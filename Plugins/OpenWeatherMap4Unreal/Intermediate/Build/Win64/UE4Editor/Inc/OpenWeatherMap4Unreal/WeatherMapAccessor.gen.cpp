// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenWeatherMap4Unreal/Public/WeatherMapAccessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherMapAccessor() {}
// Cross Module References
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenWeatherMap4Unreal();
	OPENWEATHERMAP4UNREAL_API UEnum* Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits();
	OPENWEATHERMAP4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FWeatherData();
	OPENWEATHERMAP4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FCityData();
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UWeatherMapAccessor_NoRegister();
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UWeatherMapAccessor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal, nullptr, "WeatherMapAccessorOnEventDispather__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETemperatureUnits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits, Z_Construct_UPackage__Script_OpenWeatherMap4Unreal(), TEXT("ETemperatureUnits"));
		}
		return Singleton;
	}
	template<> OPENWEATHERMAP4UNREAL_API UEnum* StaticEnum<ETemperatureUnits>()
	{
		return ETemperatureUnits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETemperatureUnits(ETemperatureUnits_StaticEnum, TEXT("/Script/OpenWeatherMap4Unreal"), TEXT("ETemperatureUnits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits_Hash() { return 4244029151U; }
	UEnum* Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenWeatherMap4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETemperatureUnits"), 0, Get_Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETemperatureUnits::TU_Celsius", (int64)ETemperatureUnits::TU_Celsius },
				{ "ETemperatureUnits::TU_Kelvin", (int64)ETemperatureUnits::TU_Kelvin },
				{ "ETemperatureUnits::TU_Fahrenheit", (int64)ETemperatureUnits::TU_Fahrenheit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
				{ "TU_Celsius.DisplayName", "Celsius" },
				{ "TU_Fahrenheit.DisplayName", "Fahrenheit" },
				{ "TU_Kelvin.DisplayName", "Kelvin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal,
				nullptr,
				"ETemperatureUnits",
				"ETemperatureUnits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FWeatherData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENWEATHERMAP4UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FWeatherData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeatherData, Z_Construct_UPackage__Script_OpenWeatherMap4Unreal(), TEXT("WeatherData"), sizeof(FWeatherData), Get_Z_Construct_UScriptStruct_FWeatherData_Hash());
	}
	return Singleton;
}
template<> OPENWEATHERMAP4UNREAL_API UScriptStruct* StaticStruct<FWeatherData>()
{
	return FWeatherData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeatherData(FWeatherData::StaticStruct, TEXT("/Script/OpenWeatherMap4Unreal"), TEXT("WeatherData"), false, nullptr, nullptr);
static struct FScriptStruct_OpenWeatherMap4Unreal_StaticRegisterNativesFWeatherData
{
	FScriptStruct_OpenWeatherMap4Unreal_StaticRegisterNativesFWeatherData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeatherData")),new UScriptStruct::TCppStructOps<FWeatherData>);
	}
} ScriptStruct_OpenWeatherMap4Unreal_StaticRegisterNativesFWeatherData;
	struct Z_Construct_UScriptStruct_FWeatherData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudsAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CloudsAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WindAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Humidity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Humidity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pressure_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pressure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weather_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Weather;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeatherData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeatherData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_CloudsAmount_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData|Clouds" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_CloudsAmount = { "CloudsAmount", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, CloudsAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_CloudsAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_CloudsAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindAngle_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData|Wind" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindAngle = { "WindAngle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, WindAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData|Wind" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed = { "WindSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, WindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Humidity_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData|Humidity" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Humidity = { "Humidity", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, Humidity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Humidity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Humidity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Pressure_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData|Pressure" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Pressure = { "Pressure", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, Pressure), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Pressure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Pressure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData|Temperature" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Temperature_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Weather_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Weather = { "Weather", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherData, Weather), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Weather_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Weather_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeatherData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_CloudsAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Humidity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Pressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_Weather,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeatherData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal,
		nullptr,
		&NewStructOps,
		"WeatherData",
		sizeof(FWeatherData),
		alignof(FWeatherData),
		Z_Construct_UScriptStruct_FWeatherData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeatherData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeatherData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenWeatherMap4Unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeatherData"), sizeof(FWeatherData), Get_Z_Construct_UScriptStruct_FWeatherData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeatherData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeatherData_Hash() { return 2837445251U; }
class UScriptStruct* FCityData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENWEATHERMAP4UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FCityData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityData, Z_Construct_UPackage__Script_OpenWeatherMap4Unreal(), TEXT("CityData"), sizeof(FCityData), Get_Z_Construct_UScriptStruct_FCityData_Hash());
	}
	return Singleton;
}
template<> OPENWEATHERMAP4UNREAL_API UScriptStruct* StaticStruct<FCityData>()
{
	return FCityData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCityData(FCityData::StaticStruct, TEXT("/Script/OpenWeatherMap4Unreal"), TEXT("CityData"), false, nullptr, nullptr);
static struct FScriptStruct_OpenWeatherMap4Unreal_StaticRegisterNativesFCityData
{
	FScriptStruct_OpenWeatherMap4Unreal_StaticRegisterNativesFCityData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CityData")),new UScriptStruct::TCppStructOps<FCityData>);
	}
} ScriptStruct_OpenWeatherMap4Unreal_StaticRegisterNativesFCityData;
	struct Z_Construct_UScriptStruct_FCityData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CityName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|CityData|Coordinates" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityData, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Longitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|CityData|Coordinates" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityData, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Latitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CountryCode_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|CityData" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CountryCode = { "CountryCode", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityData, CountryCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CountryCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CountryCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CityName_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|CityData" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CityName = { "CityName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityData, CityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CityName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CityName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityData_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CountryCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityData_Statics::NewProp_CityName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal,
		nullptr,
		&NewStructOps,
		"CityData",
		sizeof(FCityData),
		alignof(FCityData),
		Z_Construct_UScriptStruct_FCityData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCityData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCityData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCityData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCityData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenWeatherMap4Unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CityData"), sizeof(FCityData), Get_Z_Construct_UScriptStruct_FCityData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCityData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCityData_Hash() { return 3358891774U; }
	void UWeatherMapAccessor::StaticRegisterNativesUWeatherMapAccessor()
	{
		UClass* Class = UWeatherMapAccessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReceivedHttpStatesCode", &UWeatherMapAccessor::execGetReceivedHttpStatesCode },
			{ "GetReceivedWeatherMapData", &UWeatherMapAccessor::execGetReceivedWeatherMapData },
			{ "GetWeatherIconURL", &UWeatherMapAccessor::execGetWeatherIconURL },
			{ "RequestWeatherMapDataWithCityID", &UWeatherMapAccessor::execRequestWeatherMapDataWithCityID },
			{ "RequestWeatherMapDataWithCityName", &UWeatherMapAccessor::execRequestWeatherMapDataWithCityName },
			{ "RequestWeatherMapDataWithCoordinates", &UWeatherMapAccessor::execRequestWeatherMapDataWithCoordinates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics
	{
		struct WeatherMapAccessor_eventGetReceivedHttpStatesCode_Parms
		{
			int32 ResponseCode;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeatherMapAccessor_eventGetReceivedHttpStatesCode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeatherMapAccessor_eventGetReceivedHttpStatesCode_Parms), &Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventGetReceivedHttpStatesCode_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::NewProp_ResponseCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|Received|Error" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Get the received HTTP status code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherMapAccessor, nullptr, "GetReceivedHttpStatesCode", sizeof(WeatherMapAccessor_eventGetReceivedHttpStatesCode_Parms), Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics
	{
		struct WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms
		{
			FCityData CityData;
			FWeatherData WeatherData;
			FDateTime UpdatedTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeatherData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CityData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms), &Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_UpdatedTime = { "UpdatedTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms, UpdatedTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_WeatherData = { "WeatherData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms, WeatherData), Z_Construct_UScriptStruct_FWeatherData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_CityData = { "CityData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms, CityData), Z_Construct_UScriptStruct_FCityData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_UpdatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_WeatherData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::NewProp_CityData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|Received" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Get the received weather information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherMapAccessor, nullptr, "GetReceivedWeatherMapData", sizeof(WeatherMapAccessor_eventGetReceivedWeatherMapData_Parms), Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics
	{
		struct WeatherMapAccessor_eventGetWeatherIconURL_Parms
		{
			FString URL;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeatherMapAccessor_eventGetWeatherIconURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeatherMapAccessor_eventGetWeatherIconURL_Parms), &Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventGetWeatherIconURL_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|Received|Icon" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Get icon image corresponding to weather information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherMapAccessor, nullptr, "GetWeatherIconURL", sizeof(WeatherMapAccessor_eventGetWeatherIconURL_Parms), Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics
	{
		struct WeatherMapAccessor_eventRequestWeatherMapDataWithCityID_Parms
		{
			int32 CityID;
			ETemperatureUnits Units;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Units;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Units_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CityID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCityID_Parms, Units), Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::NewProp_CityID = { "CityID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCityID_Parms, CityID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::NewProp_Units,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::NewProp_Units_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::NewProp_CityID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|Request" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Request weather information for a specific City ID using the OpenWeatherMap API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherMapAccessor, nullptr, "RequestWeatherMapDataWithCityID", sizeof(WeatherMapAccessor_eventRequestWeatherMapDataWithCityID_Parms), Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics
	{
		struct WeatherMapAccessor_eventRequestWeatherMapDataWithCityName_Parms
		{
			FString CityName;
			ETemperatureUnits Units;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Units;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Units_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CityName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCityName_Parms, Units), Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::NewProp_CityName = { "CityName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCityName_Parms, CityName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::NewProp_Units,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::NewProp_Units_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::NewProp_CityName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|Request" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Request weather information for a specified city using the OpenWeatherMap API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherMapAccessor, nullptr, "RequestWeatherMapDataWithCityName", sizeof(WeatherMapAccessor_eventRequestWeatherMapDataWithCityName_Parms), Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics
	{
		struct WeatherMapAccessor_eventRequestWeatherMapDataWithCoordinates_Parms
		{
			float Latitude;
			float Longitude;
			ETemperatureUnits Units;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Units;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Units_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCoordinates_Parms, Units), Z_Construct_UEnum_OpenWeatherMap4Unreal_ETemperatureUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCoordinates_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherMapAccessor_eventRequestWeatherMapDataWithCoordinates_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Units,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Units_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::NewProp_Latitude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|Request" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Request weather information for specific coordinates using the OpenWeatherMap API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherMapAccessor, nullptr, "RequestWeatherMapDataWithCoordinates", sizeof(WeatherMapAccessor_eventRequestWeatherMapDataWithCoordinates_Parms), Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeatherMapAccessor_NoRegister()
	{
		return UWeatherMapAccessor::StaticClass();
	}
	struct Z_Construct_UClass_UWeatherMapAccessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailureCommunication_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailureCommunication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecivedErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecivedErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceivedWeatherMapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceivedWeatherMapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAPIKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mAPIKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeatherMapAccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeatherMapAccessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedHttpStatesCode, "GetReceivedHttpStatesCode" }, // 2547415375
		{ &Z_Construct_UFunction_UWeatherMapAccessor_GetReceivedWeatherMapData, "GetReceivedWeatherMapData" }, // 1072413681
		{ &Z_Construct_UFunction_UWeatherMapAccessor_GetWeatherIconURL, "GetWeatherIconURL" }, // 2797567475
		{ &Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityID, "RequestWeatherMapDataWithCityID" }, // 698022703
		{ &Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCityName, "RequestWeatherMapDataWithCityName" }, // 34529165
		{ &Z_Construct_UFunction_UWeatherMapAccessor_RequestWeatherMapDataWithCoordinates, "RequestWeatherMapDataWithCoordinates" }, // 618780459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherMapAccessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeatherMapAccessor.h" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnFailureCommunication_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|Error" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Called when communication fails" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnFailureCommunication = { "OnFailureCommunication", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeatherMapAccessor, OnFailureCommunication), Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnFailureCommunication_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnFailureCommunication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnRecivedErrorCode_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|Error" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "Called when an HTTP error occurs. Continue to call <GetReceivedHttpStatesCode> if necessary" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnRecivedErrorCode = { "OnRecivedErrorCode", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeatherMapAccessor, OnRecivedErrorCode), Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnRecivedErrorCode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnRecivedErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnReceivedWeatherMapData_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|Received" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "It is called when the weather information is received. Continue to call <GetReceivedWeatherMapData> and get information" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnReceivedWeatherMapData = { "OnReceivedWeatherMapData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeatherMapAccessor, OnReceivedWeatherMapData), Z_Construct_UDelegateFunction_OpenWeatherMap4Unreal_WeatherMapAccessorOnEventDispather__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnReceivedWeatherMapData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnReceivedWeatherMapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_mAPIKey_MetaData[] = {
		{ "Category", "OpenWeatherMap4Unreal|APIKey" },
		{ "DisplayName", "APIKey" },
		{ "ModuleRelativePath", "Public/WeatherMapAccessor.h" },
		{ "ToolTip", "API key required to use OpenWeatherMap API" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_mAPIKey = { "mAPIKey", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeatherMapAccessor, mAPIKey), METADATA_PARAMS(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_mAPIKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_mAPIKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeatherMapAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnFailureCommunication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnRecivedErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_OnReceivedWeatherMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeatherMapAccessor_Statics::NewProp_mAPIKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeatherMapAccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeatherMapAccessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeatherMapAccessor_Statics::ClassParams = {
		&UWeatherMapAccessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeatherMapAccessor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWeatherMapAccessor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeatherMapAccessor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWeatherMapAccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeatherMapAccessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeatherMapAccessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeatherMapAccessor, 2833616564);
	template<> OPENWEATHERMAP4UNREAL_API UClass* StaticClass<UWeatherMapAccessor>()
	{
		return UWeatherMapAccessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeatherMapAccessor(Z_Construct_UClass_UWeatherMapAccessor, &UWeatherMapAccessor::StaticClass, TEXT("/Script/OpenWeatherMap4Unreal"), TEXT("UWeatherMapAccessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherMapAccessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
