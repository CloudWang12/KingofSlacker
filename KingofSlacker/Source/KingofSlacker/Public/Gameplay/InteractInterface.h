// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

class AItemActor;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class KINGOFSLACKER_API IInteractInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(bool bInRange);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FText GetName();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UTexture2D* GetTexture();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AItemActor* GetItemActorRef();
};
