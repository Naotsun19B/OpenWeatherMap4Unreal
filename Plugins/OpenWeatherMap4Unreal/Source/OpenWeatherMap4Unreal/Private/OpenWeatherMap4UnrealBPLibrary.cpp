// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OpenWeatherMap4UnrealBPLibrary.h"
#include "EditorSetting.h"

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
	return Data.CityName + "[" + Data.CountryCode + "] (lon, lat) = (" + FString::SanitizeFloat(Data.Longitude, 2) + ", " + FString::SanitizeFloat(Data.Latitude, 2) + ")";
}

FString UOpenWeatherMap4UnrealBPLibrary::ConvertWeatherDataToString(FWeatherData Data)
{
	return	"[Weather] " + Data.Weather + "(" + Data.Description + ")\n" +
			"[Temperature]" + FString::SanitizeFloat(Data.Temperature, 2) + "\n" +
			"[Pressure]" + FString::SanitizeFloat(Data.Pressure, 2) + "\n" +
			"[Humidity]" + FString::FromInt(Data.Humidity) + "\n" +
			"[Wind]" + FString::SanitizeFloat(Data.WindSpeed, 2) + "(" + FString::FromInt(Data.WindAngle) + ")\n" +
			"[Clouds]" + FString::FromInt(Data.CloudsAmount);
}

FString UOpenWeatherMap4UnrealBPLibrary::ConvertDateTimeToString(FDateTime Time)
{
	return Time.ToString();
}