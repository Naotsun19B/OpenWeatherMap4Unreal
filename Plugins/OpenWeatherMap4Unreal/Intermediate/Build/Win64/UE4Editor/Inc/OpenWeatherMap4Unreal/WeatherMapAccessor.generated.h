// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCityData;
struct FWeatherData;
struct FDateTime;
enum class ETemperatureUnits : uint8;
#ifdef OPENWEATHERMAP4UNREAL_WeatherMapAccessor_generated_h
#error "WeatherMapAccessor.generated.h already included, missing '#pragma once' in WeatherMapAccessor.h"
#endif
#define OPENWEATHERMAP4UNREAL_WeatherMapAccessor_generated_h

#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeatherData_Statics; \
	OPENWEATHERMAP4UNREAL_API static class UScriptStruct* StaticStruct();


template<> OPENWEATHERMAP4UNREAL_API UScriptStruct* StaticStruct<struct FWeatherData>();

#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCityData_Statics; \
	OPENWEATHERMAP4UNREAL_API static class UScriptStruct* StaticStruct();


template<> OPENWEATHERMAP4UNREAL_API UScriptStruct* StaticStruct<struct FCityData>();

#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_70_DELEGATE \
static inline void FWeatherMapAccessorOnEventDispather_DelegateWrapper(const FMulticastScriptDelegate& WeatherMapAccessorOnEventDispather) \
{ \
	WeatherMapAccessorOnEventDispather.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeatherIconURL) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWeatherIconURL(Z_Param_Out_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReceivedHttpStatesCode) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ResponseCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReceivedHttpStatesCode(Z_Param_Out_ResponseCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReceivedWeatherMapData) \
	{ \
		P_GET_STRUCT_REF(FCityData,Z_Param_Out_CityData); \
		P_GET_STRUCT_REF(FWeatherData,Z_Param_Out_WeatherData); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UpdatedTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReceivedWeatherMapData(Z_Param_Out_CityData,Z_Param_Out_WeatherData,Z_Param_Out_UpdatedTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestWeatherMapDataWithCityID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CityID); \
		P_GET_ENUM(ETemperatureUnits,Z_Param_Units); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestWeatherMapDataWithCityID(Z_Param_CityID,ETemperatureUnits(Z_Param_Units)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestWeatherMapDataWithCoordinates) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Latitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Longitude); \
		P_GET_ENUM(ETemperatureUnits,Z_Param_Units); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestWeatherMapDataWithCoordinates(Z_Param_Latitude,Z_Param_Longitude,ETemperatureUnits(Z_Param_Units)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestWeatherMapDataWithCityName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CityName); \
		P_GET_ENUM(ETemperatureUnits,Z_Param_Units); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestWeatherMapDataWithCityName(Z_Param_CityName,ETemperatureUnits(Z_Param_Units)); \
		P_NATIVE_END; \
	}


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeatherIconURL) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWeatherIconURL(Z_Param_Out_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReceivedHttpStatesCode) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ResponseCode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReceivedHttpStatesCode(Z_Param_Out_ResponseCode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReceivedWeatherMapData) \
	{ \
		P_GET_STRUCT_REF(FCityData,Z_Param_Out_CityData); \
		P_GET_STRUCT_REF(FWeatherData,Z_Param_Out_WeatherData); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UpdatedTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReceivedWeatherMapData(Z_Param_Out_CityData,Z_Param_Out_WeatherData,Z_Param_Out_UpdatedTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestWeatherMapDataWithCityID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CityID); \
		P_GET_ENUM(ETemperatureUnits,Z_Param_Units); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestWeatherMapDataWithCityID(Z_Param_CityID,ETemperatureUnits(Z_Param_Units)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestWeatherMapDataWithCoordinates) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Latitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Longitude); \
		P_GET_ENUM(ETemperatureUnits,Z_Param_Units); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestWeatherMapDataWithCoordinates(Z_Param_Latitude,Z_Param_Longitude,ETemperatureUnits(Z_Param_Units)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestWeatherMapDataWithCityName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CityName); \
		P_GET_ENUM(ETemperatureUnits,Z_Param_Units); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestWeatherMapDataWithCityName(Z_Param_CityName,ETemperatureUnits(Z_Param_Units)); \
		P_NATIVE_END; \
	}


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeatherMapAccessor(); \
	friend struct Z_Construct_UClass_UWeatherMapAccessor_Statics; \
public: \
	DECLARE_CLASS(UWeatherMapAccessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenWeatherMap4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UWeatherMapAccessor)


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUWeatherMapAccessor(); \
	friend struct Z_Construct_UClass_UWeatherMapAccessor_Statics; \
public: \
	DECLARE_CLASS(UWeatherMapAccessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenWeatherMap4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UWeatherMapAccessor)


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherMapAccessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherMapAccessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherMapAccessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherMapAccessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherMapAccessor(UWeatherMapAccessor&&); \
	NO_API UWeatherMapAccessor(const UWeatherMapAccessor&); \
public:


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherMapAccessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherMapAccessor(UWeatherMapAccessor&&); \
	NO_API UWeatherMapAccessor(const UWeatherMapAccessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherMapAccessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherMapAccessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherMapAccessor)


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_PRIVATE_PROPERTY_OFFSET
#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_72_PROLOG
#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_PRIVATE_PROPERTY_OFFSET \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_RPC_WRAPPERS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_INCLASS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_PRIVATE_PROPERTY_OFFSET \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_INCLASS_NO_PURE_DECLS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENWEATHERMAP4UNREAL_API UClass* StaticClass<class UWeatherMapAccessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_WeatherMapAccessor_h


#define FOREACH_ENUM_ETEMPERATUREUNITS(op) \
	op(ETemperatureUnits::TU_Celsius) \
	op(ETemperatureUnits::TU_Kelvin) \
	op(ETemperatureUnits::TU_Fahrenheit) 

enum class ETemperatureUnits : uint8;
template<> OPENWEATHERMAP4UNREAL_API UEnum* StaticEnum<ETemperatureUnits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
