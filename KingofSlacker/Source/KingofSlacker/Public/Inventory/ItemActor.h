// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemType.h"
#include "GameFramework/Actor.h"
#include "Gameplay/InteractInterface.h"
#include "ItemActor.generated.h"



class IInteractInterface;

UCLASS()
class KINGOFSLACKER_API AItemActor : public AActor,public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	
	AItemActor();

	UPROPERTY(VisibleAnywhere,meta=(AllowPrivateAccess = true))
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item Actor")
	UDataTable* ItemDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item Actor")
	FName ItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item Actor")
	FItemType ItemType;

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	virtual void Interact_Implementation() override;

};
