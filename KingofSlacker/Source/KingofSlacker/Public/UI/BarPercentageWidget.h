// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BarPercentageWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class KINGOFSLACKER_API UBarPercentageWidget : public UUserWidget
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintImplementableEvent, Category="Life Bar")
	void SetBarPercentage(float BarPercentage);
	
};
