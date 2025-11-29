// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TaskComponent.generated.h"

USTRUCT(BlueprintType)
struct FTaskDefinition : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(editanywhere, BlueprintReadWrite)
	FName TaskID;

	UPROPERTY(editanywhere, BlueprintReadWrite)
	FName TaskName;

	UPROPERTY(editanywhere, BlueprintReadWrite)
	FText TaskDescription;
	
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDayDelegate,int,Day);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMonthDelegate,int,Month);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnYearDelegate,int,Year);



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KINGOFSLACKER_API UTaskComponent : public UActorComponent
{
	GENERATED_BODY()


public:

	UPROPERTY(VisibleAnywhere)
	FTimerHandle TimerHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int day = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int month = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int year = 1;

	UPROPERTY(BlueprintAssignable)
	FOnDayDelegate OnDayChanged;

	UPROPERTY(BlueprintAssignable)
	FOnMonthDelegate OnMonthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnYearDelegate OnYearChanged;
	


public:	
	
	UTaskComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FTaskDefinition TaskDefinition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FTaskDefinition>Tasks;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	TMap<FName,FTaskDefinition>AllTasks;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UDataTable* TaskDataTable;

	

	UFUNCTION(BlueprintCallable)
	void ShowTask();

	UFUNCTION(BlueprintCallable)
	void StartTimer();

	UFUNCTION(BlueprintCallable)
	void StopTimer();

	void TimeManager();


	

protected:

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
