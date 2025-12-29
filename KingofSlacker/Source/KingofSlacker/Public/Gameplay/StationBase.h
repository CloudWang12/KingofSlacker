#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "StationBase.generated.h"

class AKS_PlayerState;
class UBarPercentageWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBarProgressMax);

UCLASS()
class KINGOFSLACKER_API AStationBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AStationBase();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* ProgressBar;

	UPROPERTY(BlueprintReadOnly, Category = "Station")
	UBarPercentageWidget* ProgressBarWidget;

	UPROPERTY(BlueprintReadOnly, Category = "Station")
	AKS_PlayerState* KS_PlayerState;

	UPROPERTY(BlueprintAssignable, Category = "Station")
	FOnBarProgressMax OnBarProgressMax;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	bool bLoopEnabled = true;

	UPROPERTY(BlueprintReadOnly, Category = "Station")
	int32 LoopCount = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	int32 MaxLoopCount = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	bool bHoldingSpace = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	bool bInRange = false;

	// 进度值
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float BarValue = 0.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float BarMaxValue = 1.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float BarIncreaseValue = 0.2f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float EffectTimes = 1.f;

	FTimerHandle TimerHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float TimerInterval = 0.05f;

public:
	UFUNCTION(BlueprintCallable, Category = "Station")
	AKS_PlayerState* GetKSPlayerState();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void ResetProgress();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void StartTimer();
	
	UFUNCTION(BlueprintCallable, Category = "Station")
	void StopTimer();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void UpdateData();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void OnSpacePressed();
	
	UFUNCTION(BlueprintCallable, Category = "Station")
	void OnSpaceReleased();
};