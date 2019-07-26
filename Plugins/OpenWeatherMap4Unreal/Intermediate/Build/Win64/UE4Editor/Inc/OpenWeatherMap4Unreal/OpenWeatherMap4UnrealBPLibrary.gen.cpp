// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenWeatherMap4Unreal/Public/OpenWeatherMap4UnrealBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenWeatherMap4UnrealBPLibrary() {}
// Cross Module References
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_NoRegister();
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OpenWeatherMap4Unreal();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString();
	OPENWEATHERMAP4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FCityData();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString();
	OPENWEATHERMAP4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FWeatherData();
	OPENWEATHERMAP4UNREAL_API UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor();
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UWeatherMapAccessor_NoRegister();
// End Cross Module References
	void UOpenWeatherMap4UnrealBPLibrary::StaticRegisterNativesUOpenWeatherMap4UnrealBPLibrary()
	{
		UClass* Class = UOpenWeatherMap4UnrealBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertCityDataToString", &UOpenWeatherMap4UnrealBPLibrary::execConvertCityDataToString },
			{ "ConvertDateTimeToString", &UOpenWeatherMap4UnrealBPLibrary::execConvertDateTimeToString },
			{ "ConvertWeatherDataToString", &UOpenWeatherMap4UnrealBPLibrary::execConvertWeatherDataToString },
			{ "CreateWeatherMapAccessor", &UOpenWeatherMap4UnrealBPLibrary::execCreateWeatherMapAccessor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics
	{
		struct OpenWeatherMap4UnrealBPLibrary_eventConvertCityDataToString_Parms
		{
			FCityData Data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventConvertCityDataToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventConvertCityDataToString_Parms, Data), Z_Construct_UScriptStruct_FCityData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "DisplayName", "ToString(CityData)" },
		{ "ModuleRelativePath", "Public/OpenWeatherMap4UnrealBPLibrary.h" },
		{ "ToolTip", "Convert FCityData to FString" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary, nullptr, "ConvertCityDataToString", sizeof(OpenWeatherMap4UnrealBPLibrary_eventConvertCityDataToString_Parms), Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics
	{
		struct OpenWeatherMap4UnrealBPLibrary_eventConvertDateTimeToString_Parms
		{
			FDateTime Time;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventConvertDateTimeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventConvertDateTimeToString_Parms, Time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "DisplayName", "ToString(DateTime)" },
		{ "ModuleRelativePath", "Public/OpenWeatherMap4UnrealBPLibrary.h" },
		{ "ToolTip", "Convert FDateTime to FString" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary, nullptr, "ConvertDateTimeToString", sizeof(OpenWeatherMap4UnrealBPLibrary_eventConvertDateTimeToString_Parms), Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics
	{
		struct OpenWeatherMap4UnrealBPLibrary_eventConvertWeatherDataToString_Parms
		{
			FWeatherData Data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventConvertWeatherDataToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventConvertWeatherDataToString_Parms, Data), Z_Construct_UScriptStruct_FWeatherData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "DisplayName", "ToString(WeatherData)" },
		{ "ModuleRelativePath", "Public/OpenWeatherMap4UnrealBPLibrary.h" },
		{ "ToolTip", "Convert FWeatherData to FString" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary, nullptr, "ConvertWeatherDataToString", sizeof(OpenWeatherMap4UnrealBPLibrary_eventConvertWeatherDataToString_Parms), Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics
	{
		struct OpenWeatherMap4UnrealBPLibrary_eventCreateWeatherMapAccessor_Parms
		{
			FString APIKey;
			UWeatherMapAccessor* WeatherMapAccessor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeatherMapAccessor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::NewProp_WeatherMapAccessor = { "WeatherMapAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventCreateWeatherMapAccessor_Parms, WeatherMapAccessor), Z_Construct_UClass_UWeatherMapAccessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenWeatherMap4UnrealBPLibrary_eventCreateWeatherMapAccessor_Parms, APIKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::NewProp_WeatherMapAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::NewProp_APIKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenWeatherMap4Unreal|WeatherMapAccessor|Game" },
		{ "ModuleRelativePath", "Public/OpenWeatherMap4UnrealBPLibrary.h" },
		{ "ToolTip", "Create a class to access the OpenWeatherMap API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary, nullptr, "CreateWeatherMapAccessor", sizeof(OpenWeatherMap4UnrealBPLibrary_eventCreateWeatherMapAccessor_Parms), Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_NoRegister()
	{
		return UOpenWeatherMap4UnrealBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertCityDataToString, "ConvertCityDataToString" }, // 2039486053
		{ &Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertDateTimeToString, "ConvertDateTimeToString" }, // 3735881856
		{ &Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_ConvertWeatherDataToString, "ConvertWeatherDataToString" }, // 2975000745
		{ &Z_Construct_UFunction_UOpenWeatherMap4UnrealBPLibrary_CreateWeatherMapAccessor, "CreateWeatherMapAccessor" }, // 2193589411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenWeatherMap4UnrealBPLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenWeatherMap4UnrealBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenWeatherMap4UnrealBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::ClassParams = {
		&UOpenWeatherMap4UnrealBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenWeatherMap4UnrealBPLibrary, 180504907);
	template<> OPENWEATHERMAP4UNREAL_API UClass* StaticClass<UOpenWeatherMap4UnrealBPLibrary>()
	{
		return UOpenWeatherMap4UnrealBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenWeatherMap4UnrealBPLibrary(Z_Construct_UClass_UOpenWeatherMap4UnrealBPLibrary, &UOpenWeatherMap4UnrealBPLibrary::StaticClass, TEXT("/Script/OpenWeatherMap4Unreal"), TEXT("UOpenWeatherMap4UnrealBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenWeatherMap4UnrealBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
