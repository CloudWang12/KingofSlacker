// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemType.generated.h"

USTRUCT(BlueprintType)
struct FItemType : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ItemDefinition")
	FText ItemName = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ItemDefinition")
	FText ItemDescription = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ItemDefinition")
	int32 ItemQuantity = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ItemDefinition")
	TSoftObjectPtr<UStaticMesh> ItemMesh = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ItemDefinition")
	TSoftObjectPtr<UTexture2D> ItemTexture = nullptr;

	
	
	
};