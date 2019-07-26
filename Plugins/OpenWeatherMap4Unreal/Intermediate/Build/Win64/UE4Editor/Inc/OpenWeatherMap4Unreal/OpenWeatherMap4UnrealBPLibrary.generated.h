// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FWeatherData;
struct FCityData;
class UWeatherMapAccessor;
#ifdef OPENWEATHERMAP4UNREAL_OpenWeatherMap4UnrealBPLibrary_generated_h
#error "OpenWeatherMap4UnrealBPLibrary.generated.h already included, missing '#pragma once' in OpenWeatherMap4UnrealBPLibrary.h"
#endif
#define OPENWEATHERMAP4UNREAL_OpenWeatherMap4UnrealBPLibrary_generated_h

#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertDateTimeToString) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOpenWeatherMap4UnrealBPLibrary::ConvertDateTimeToString(Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertWeatherDataToString) \
	{ \
		P_GET_STRUCT(FWeatherData,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOpenWeatherMap4UnrealBPLibrary::ConvertWeatherDataToString(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertCityDataToString) \
	{ \
		P_GET_STRUCT(FCityData,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOpenWeatherMap4UnrealBPLibrary::ConvertCityDataToString(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateWeatherMapAccessor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_APIKey); \
		P_GET_OBJECT_REF(UWeatherMapAccessor,Z_Param_Out_WeatherMapAccessor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenWeatherMap4UnrealBPLibrary::CreateWeatherMapAccessor(Z_Param_APIKey,Z_Param_Out_WeatherMapAccessor); \
		P_NATIVE_END; \
	}


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertDateTimeToString) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOpenWeatherMap4UnrealBPLibrary::ConvertDateTimeToString(Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertWeatherDataToString) \
	{ \
		P_GET_STRUCT(FWeatherData,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOpenWeatherMap4UnrealBPLibrary::ConvertWeatherDataToString(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertCityDataToString) \
	{ \
		P_GET_STRUCT(FCityData,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOpenWeatherMap4UnrealBPLibrary::ConvertCityDataToString(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateWeatherMapAccessor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_APIKey); \
		P_GET_OBJECT_REF(UWeatherMapAccessor,Z_Param_Out_WeatherMapAccessor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenWeatherMap4UnrealBPLibrary::CreateWeatherMapAccessor(Z_Param_APIKey,Z_Param_Out_WeatherMapAccessor); \
		P_NATIVE_END; \
	}


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenWeatherMap4UnrealBPLibrary(); \
	friend struct Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenWeatherMap4UnrealBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenWeatherMap4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UOpenWeatherMap4UnrealBPLibrary)


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUOpenWeatherMap4UnrealBPLibrary(); \
	friend struct Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenWeatherMap4UnrealBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenWeatherMap4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UOpenWeatherMap4UnrealBPLibrary)


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenWeatherMap4UnrealBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenWeatherMap4UnrealBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenWeatherMap4UnrealBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenWeatherMap4UnrealBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenWeatherMap4UnrealBPLibrary(UOpenWeatherMap4UnrealBPLibrary&&); \
	NO_API UOpenWeatherMap4UnrealBPLibrary(const UOpenWeatherMap4UnrealBPLibrary&); \
public:


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenWeatherMap4UnrealBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenWeatherMap4UnrealBPLibrary(UOpenWeatherMap4UnrealBPLibrary&&); \
	NO_API UOpenWeatherMap4UnrealBPLibrary(const UOpenWeatherMap4UnrealBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenWeatherMap4UnrealBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenWeatherMap4UnrealBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenWeatherMap4UnrealBPLibrary)


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_27_PROLOG
#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_RPC_WRAPPERS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_INCLASS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
	OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OpenWeatherMap4UnrealBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENWEATHERMAP4UNREAL_API UClass* StaticClass<class UOpenWeatherMap4UnrealBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWeatherMapPlugin_Plugins_OpenWeatherMap4Unreal_Source_OpenWeatherMap4Unreal_Public_OpenWeatherMap4UnrealBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
