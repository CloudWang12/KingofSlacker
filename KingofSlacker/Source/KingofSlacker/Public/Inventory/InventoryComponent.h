// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemType.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddItemDelegate,FItemType, ItemEntry);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KINGOFSLACKER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UInventoryComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item Actor")
	FItemType ItemType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item Actor")
	UDataTable* ItemDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item Actor")
	TArray<FItemType>ItemEntries;

	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnAddItemDelegate OnItemChanged;

protected:

	virtual void BeginPlay() override;

public:
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	FItemType GetItemData(FName ItemName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddItem(FName ItemName);

	UFUNCTION(BlueprintCallable,category="Inventory")
	void LoadItem(TArray<FItemType>ItemsArray);
	
		
};
