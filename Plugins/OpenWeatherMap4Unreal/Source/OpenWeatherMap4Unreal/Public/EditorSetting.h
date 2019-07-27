// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EditorSetting.generated.h"

/**
 * 
 */
UCLASS(config = Editor, defaultconfig)
class OPENWEATHERMAP4UNREAL_API UEditorSetting : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Config, Category = "Debug")
		bool UseDebugLog = true;
};
