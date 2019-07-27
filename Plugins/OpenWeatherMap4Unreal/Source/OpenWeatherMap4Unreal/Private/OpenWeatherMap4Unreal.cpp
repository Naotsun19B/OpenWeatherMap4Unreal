// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "OpenWeatherMap4Unreal.h"
#include "Modules/ModuleManager.h"
#include "ISettingsModule.h"
#include "EditorSetting.h"

#define LOCTEXT_NAMESPACE "FOpenWeatherMap4UnrealModule"

void FOpenWeatherMap4UnrealModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	ISettingsModule* SettingModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingModule != nullptr) {
		SettingModule->RegisterSettings(
			"Project",
			"Plugins",
			"OpenWeatherMap4Unreal",
			LOCTEXT("MySettingName", "OpenWeatherMap4Unreal"),
			LOCTEXT("MySettingDescription", "Settings for OpenWeatherMap4Unreal"),
			GetMutableDefault<UEditorSetting>()
		);
	}
}

void FOpenWeatherMap4UnrealModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule != nullptr)
	{
		SettingsModule->UnregisterSettings(
			"Project",
			"Plugins",
			"OpenWeatherMap4Unreal"
		);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOpenWeatherMap4UnrealModule, OpenWeatherMap4Unreal)