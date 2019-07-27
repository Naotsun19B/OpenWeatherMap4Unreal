// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenWeatherMap4Unreal/Public/EditorSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSetting() {}
// Cross Module References
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UEditorSetting_NoRegister();
	OPENWEATHERMAP4UNREAL_API UClass* Z_Construct_UClass_UEditorSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OpenWeatherMap4Unreal();
// End Cross Module References
	void UEditorSetting::StaticRegisterNativesUEditorSetting()
	{
	}
	UClass* Z_Construct_UClass_UEditorSetting_NoRegister()
	{
		return UEditorSetting::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDebugLog_MetaData[];
#endif
		static void NewProp_UseDebugLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDebugLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenWeatherMap4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorSetting.h" },
		{ "ModuleRelativePath", "Public/EditorSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorSetting.h" },
	};
#endif
	void Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog_SetBit(void* Obj)
	{
		((UEditorSetting*)Obj)->UseDebugLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog = { "UseDebugLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorSetting), &Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSetting_Statics::NewProp_UseDebugLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorSetting_Statics::ClassParams = {
		&UEditorSetting::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorSetting_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorSetting_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorSetting, 1430936533);
	template<> OPENWEATHERMAP4UNREAL_API UClass* StaticClass<UEditorSetting>()
	{
		return UEditorSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorSetting(Z_Construct_UClass_UEditorSetting, &UEditorSetting::StaticClass, TEXT("/Script/OpenWeatherMap4Unreal"), TEXT("UEditorSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
