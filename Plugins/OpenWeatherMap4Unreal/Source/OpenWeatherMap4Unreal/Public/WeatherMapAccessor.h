// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenWeatherMap4Unreal.h"
#include "WeatherMapAccessor.generated.h"

UENUM(BlueprintType)
enum class ETemperatureUnits : uint8
{
	TU_Celsius		UMETA(DisplayName = "Celsius"),
	TU_Kelvin		UMETA(DisplayName = "Kelvin"),
	TU_Fahrenheit	UMETA(DisplayName = "Fahrenheit"),
};

USTRUCT(BlueprintType)
struct FCityData
{
	GENERATED_USTRUCT_BODY()

		FCityData(FString cityName, FString countryCode, float latitude, float longitude)
		: CityName(cityName), CountryCode(countryCode), Latitude(latitude), Longitude(longitude) {}

	FCityData() : FCityData("", "", 0, 0) {}

	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|CityData")
		FString CityName;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|CityData")
		FString CountryCode;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|CityData|Coordinates")
		float Latitude;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|CityData|Coordinates")
		float Longitude;
};

USTRUCT(BlueprintType)
struct FWeatherData
{
	GENERATED_USTRUCT_BODY()

		FWeatherData(FString weather, FString description, float temperature, float pressure, float humidity, float windSpeed, float windAngle, int cloudsAmout)
		: Weather(weather), Description(description), Temperature(temperature), Pressure(pressure), Humidity(humidity),
		WindSpeed(windSpeed), WindAngle(windAngle), CloudsAmount(cloudsAmout) {}

	FWeatherData() : FWeatherData("", "", 0, 0, 0, 0, 0, 0) {}

	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData")
		FString Weather;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData")
		FString Description;

	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData|Temperature")
		float Temperature;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData|Pressure")
		float Pressure;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData|Humidity", meta = (ClampMin = "0", ClampMax = "100"))
		int Humidity;

	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData|Wind")
		float WindSpeed;
	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData|Wind")
		int WindAngle;

	UPROPERTY(BlueprintReadWrite, Category = "OpenWeatherMap4Unreal|WeatherData|Clouds", meta = (ClampMin = "0", ClampMax = "100"))
		int CloudsAmount;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWeatherMapAccessorOnEventDispather);

UCLASS(BlueprintType)
class OPENWEATHERMAP4UNREAL_API UWeatherMapAccessor : public UObject
{
	GENERATED_BODY()

protected:
	const FString BaseURL = "http://api.openweathermap.org/data/2.5/weather?";
	const FString IconBaseURL = "http://openweathermap.org/img/w/";

	FString ReceivedDataBuffer;
	int32 ResponseCodeBuffer;
	FString IconID;

public:
	// API key required to use OpenWeatherMap API
	UPROPERTY(BlueprintReadOnly, Category = "OpenWeatherMap4Unreal|APIKey", meta = (DisplayName = "APIKey"))
		FString mAPIKey;
	// It is called when the weather information is received. Continue to call <GetReceivedWeatherMapData> and get information
	UPROPERTY(BlueprintAssignable, Category = "OpenWeatherMap4Unreal|Received")
		FWeatherMapAccessorOnEventDispather OnReceivedWeatherMapData;
	// Called when an HTTP error occurs. Continue to call <GetReceivedHttpStatesCode> if necessary
	UPROPERTY(BlueprintAssignable, Category = "OpenWeatherMap4Unreal|Error")
		FWeatherMapAccessorOnEventDispather OnRecivedErrorCode;
	// Called when communication fails
	UPROPERTY(BlueprintAssignable, Category = "OpenWeatherMap4Unreal|Error")
		FWeatherMapAccessorOnEventDispather OnFailureCommunication;

public:
	// Request weather information for a specified city using the OpenWeatherMap API
	UFUNCTION(BlueprintCallable, Category = "OpenWeatherMap4Unreal|Request")
		void RequestWeatherMapDataWithCityName(FString CityName, ETemperatureUnits Units);
	// Request weather information for specific coordinates using the OpenWeatherMap API
	UFUNCTION(BlueprintCallable, Category = "OpenWeatherMap4Unreal|Request")
		void RequestWeatherMapDataWithCoordinates(float Latitude, float Longitude, ETemperatureUnits Units);
	// Request weather information for a specific City ID using the OpenWeatherMap API
	UFUNCTION(BlueprintCallable, Category = "OpenWeatherMap4Unreal|Request")
		void RequestWeatherMapDataWithCityID(int CityID, ETemperatureUnits Units);
	// Get the received weather information
	UFUNCTION(BlueprintCallable, Category = "OpenWeatherMap4Unreal|Received")
		bool GetReceivedWeatherMapData(FCityData& CityData, FWeatherData& WeatherData, FDateTime& UpdatedTime);
	// Get the received HTTP status code
	UFUNCTION(BlueprintCallable, Category = "OpenWeatherMap4Unreal|Received|Error")
		bool GetReceivedHttpStatesCode(int32& ResponseCode);
	// Get icon image corresponding to weather information. Continue to call <DownloadImage> and get icon image
	UFUNCTION(BlueprintCallable, Category = "OpenWeatherMap4Unreal|Received|Icon")
		bool GetWeatherIconURL(FString& URL);

private:
	// Access the OpenWeatherMap API from the formed URL
	void RequestWeatherMapData(FString URL);
	// Set temperature unit
	FString SelectUnits(ETemperatureUnits Units);
};
