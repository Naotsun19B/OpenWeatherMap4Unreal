// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "Http.h"
//#include "Json.h"
#include "Runtime/Json/Public/Dom/JsonObject.h"
#include "Runtime/Json/Public/Dom/JsonValue.h"
#include "Runtime/Json/Public/Serialization/JsonSerializer.h"
#include "Runtime/Json/Public/Serialization/JsonReader.h"

class FOpenWeatherMap4UnrealModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};