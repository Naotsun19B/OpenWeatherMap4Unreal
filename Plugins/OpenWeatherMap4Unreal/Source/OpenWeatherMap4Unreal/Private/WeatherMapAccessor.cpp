// Fill out your copyright notice in the Description page of Project Settings.

#include "WeatherMapAccessor.h"
#include <string>

DEFINE_LOG_CATEGORY_STATIC(OpenWeatherMapForUnreal, Log, All);

FString UWeatherMapAccessor::SelectUnits(ETemperatureUnits Units)
{
	FString units;
	switch (Units)
	{
	case ETemperatureUnits::TU_Celsius:		units = "&units=metric";	break;
	case ETemperatureUnits::TU_Fahrenheit:  units = "&units=imperial";	break;
	case ETemperatureUnits::TU_Kelvin:		units = "";					break;
	}

	return units;
}

void UWeatherMapAccessor::RequestWeatherMapDataWithCityName(FString CityName, ETemperatureUnits Units)
{
	//単位を指定
	FString config = SelectUnits(Units);
	//URLを作成
	FString URL = BaseURL + config + "&q=" + CityName + "&appid=" + mAPIKey;
	//APIへアクセス
	RequestWeatherMapData(URL);
}

void UWeatherMapAccessor::RequestWeatherMapDataWithCoordinates(float Latitude, float Longitude, ETemperatureUnits Units)
{
	//単位を指定
	FString config = SelectUnits(Units);
	//URLを作成
	FString URL = BaseURL + config + "lat=" + std::to_string(Latitude).c_str() + "&lon=" + std::to_string(Longitude).c_str() + "&appid=" + mAPIKey;
	//APIへアクセス
	RequestWeatherMapData(URL);
}

void UWeatherMapAccessor::RequestWeatherMapDataWithCityID(int CityID, ETemperatureUnits Units)
{
	//単位を指定
	FString config = SelectUnits(Units);
	//URLを作成
	FString URL = BaseURL + config + "id=" + std::to_string(CityID).c_str() + "&appid=" + mAPIKey;
	//APIへアクセス
	RequestWeatherMapData(URL);
}

void UWeatherMapAccessor::RequestWeatherMapData(FString URL)
{
	ReceivedDataBuffer = "";
	ResponseCodeBuffer = 0;
	IconID = "";

	auto Module = &FHttpModule::Get();
	auto Request = Module->CreateRequest();

	//終了時のイベントをバインド
	Request->OnProcessRequestComplete().BindLambda([this](auto Request, auto Response, auto WasSuccessful)
	{
		//接続成功
		if (WasSuccessful) {
			//通信成功
			if (Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300) {
				UE_LOG(OpenWeatherMapForUnreal, Log, TEXT("Communication success !"));
				this->ReceivedDataBuffer = Response->GetContentAsString();
				UE_LOG(OpenWeatherMapForUnreal, Log, TEXT("%s"), *(this->ReceivedDataBuffer));

				//イベントディスパッチャを呼び出す
				this->OnReceivedWeatherMapData.Broadcast();
			}
			//通信失敗（404エラーなど）
			else {
				UE_LOG(OpenWeatherMapForUnreal, Warning, TEXT("Communication failure ..."));
				UE_LOG(OpenWeatherMapForUnreal, Warning, TEXT("%d"), Response->GetResponseCode());

				//イベントディスパッチャを呼び出す
				this->OnRecivedErrorCode.Broadcast();
			}
		}
		//接続失敗
		else {
			UE_LOG(OpenWeatherMapForUnreal, Warning, TEXT("Failed to get weather information ..."));

			//イベントディスパッチャを呼び出す
			this->OnFailureCommunication.Broadcast();
		}
	});

	//リクエストタイプを設定
	Request->SetVerb("GET");

	//URLを設定
	Request->SetURL(URL);
	UE_LOG(OpenWeatherMapForUnreal, Log, TEXT("%s"), *URL);

	//通信を開始
	Request->ProcessRequest();
}

bool UWeatherMapAccessor::GetReceivedWeatherMapData(FCityData& CityData, FWeatherData& WeatherData, FDateTime& UpdatedTime)
{
	//Jsonオブジェクトを作成
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ReceivedDataBuffer);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	//FString型からJson形式に変換
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		TSharedPtr<FJsonObject> ObjectField;
		TArray< TSharedPtr<FJsonValue> > ArrayField;

		//都市データ
		CityData.CityName = JsonObject->GetStringField("name");

		ObjectField = JsonObject->GetObjectField(TEXT("sys"));
		CityData.CountryCode = ObjectField->GetStringField("country");

		ObjectField = JsonObject->GetObjectField(TEXT("coord"));
		CityData.Longitude = static_cast<float>(ObjectField->GetNumberField("lon"));
		CityData.Latitude = static_cast<float>(ObjectField->GetNumberField("lat"));

		//気象データ
		ArrayField = JsonObject->GetArrayField(TEXT("weather"));
		for (const auto Field : ArrayField) {
			ObjectField = Field->AsObject();
			WeatherData.Weather = ObjectField->GetStringField("main");
			WeatherData.Description = ObjectField->GetStringField("description");
			IconID = ObjectField->GetStringField("icon");
		}

		ObjectField = JsonObject->GetObjectField(TEXT("main"));
		WeatherData.Temperature = static_cast<float>(ObjectField->GetNumberField("temp"));
		WeatherData.Pressure = static_cast<float>(ObjectField->GetNumberField("pressure"));
		WeatherData.Humidity = static_cast<int>(ObjectField->GetNumberField("humidity"));

		ObjectField = JsonObject->GetObjectField(TEXT("wind"));
		WeatherData.WindSpeed = static_cast<float>(ObjectField->GetNumberField("speed"));
		WeatherData.WindAngle = static_cast<float>(ObjectField->GetNumberField("deg"));

		ObjectField = JsonObject->GetObjectField(TEXT("clouds"));
		WeatherData.CloudsAmount = static_cast<int>(ObjectField->GetNumberField("all"));

		//更新時間
		int64 UnixTime = static_cast<int64>(JsonObject->GetNumberField("dt"));
		UpdatedTime = FDateTime::FromUnixTimestamp(UnixTime);
		
		return true;
	}
	
	return false;
}

bool UWeatherMapAccessor::GetReceivedHttpStatesCode(int32& ResponseCode)
{
	if (ResponseCodeBuffer == 0) return false;
	ResponseCode = ResponseCodeBuffer;
	return true;
}

bool UWeatherMapAccessor::GetWeatherIconURL(FString& URL)
{
	if (IconID == "") return false;
	URL = IconBaseURL + IconID + ".png";
	UE_LOG(OpenWeatherMapForUnreal, Log, TEXT("%s"), *URL);
	return true;
}