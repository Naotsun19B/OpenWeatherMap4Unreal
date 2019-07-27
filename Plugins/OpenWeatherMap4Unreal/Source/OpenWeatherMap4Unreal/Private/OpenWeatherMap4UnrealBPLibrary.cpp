// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OpenWeatherMap4UnrealBPLibrary.h"
#include "EditorSetting.h"
#include <string>

UOpenWeatherMap4UnrealBPLibrary::UOpenWeatherMap4UnrealBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UOpenWeatherMap4UnrealBPLibrary::CreateWeatherMapAccessor(FString APIKey, UWeatherMapAccessor* &WeatherMapAccessor)
{
	//オブジェクトを作成
	WeatherMapAccessor = NewObject<UWeatherMapAccessor>();
	//APIキーを設定
	WeatherMapAccessor->mAPIKey = APIKey;
	//ログ出力の設定
	const UEditorSetting* EditorSetting = GetDefault<UEditorSetting>();
	WeatherMapAccessor->UseDebugLog = EditorSetting->UseDebugLog;
}

FString UOpenWeatherMap4UnrealBPLibrary::ConvertCityDataToString(FCityData Data)
{
	return Data.CityName + "[" + Data.CountryCode + "] (lon, lat) = (" + std::to_string(Data.Longitude).c_str() + ", " + std::to_string(Data.Latitude).c_str() + ")";
}

FString UOpenWeatherMap4UnrealBPLibrary::ConvertWeatherDataToString(FWeatherData Data)
{
	return	"[Weather] " + Data.Weather + "(" + Data.Description + ")\n" +
			"[Temperature]" + std::to_string(Data.Temperature).c_str() + "\n" +
			"[Pressure]" + std::to_string(Data.Pressure).c_str() + "\n" +
			"[Humidity]" + std::to_string(Data.Humidity).c_str() + "\n" +
			"[Wind]" + std::to_string(Data.WindSpeed).c_str() + "(" + std::to_string(Data.WindAngle).c_str() + ")\n" +
			"[Clouds]" + std::to_string(Data.CloudsAmount).c_str();
}

FString UOpenWeatherMap4UnrealBPLibrary::ConvertDateTimeToString(FDateTime Time)
{
	return Time.ToString();
}