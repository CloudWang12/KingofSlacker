

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StationBase.generated.h"

class AKS_PlayerState;
class UBarPercentageWidget;
class UWidgetComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBarProgressMax);

UCLASS()
class KINGOFSLACKER_API AStationBase : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AStationBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent*ProgressBar;

	UPROPERTY(EditAnywhere, Category="Station")
	UBarPercentageWidget*ProgressBarWidget;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Station")
	AKS_PlayerState * KS_PlayerState;

	UPROPERTY(BlueprintAssignable, Category="Station")
	FOnBarProgressMax OnBarProgressMax;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	bool bHoldingSpace = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	bool bInRange = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float BarValue = 0.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float BarMaxValue = 1.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float BarIncreaseValue = 0.2f;

	FTimerHandle TimerHandle;

	FTimerHandle ResetTimerHandle;

	FTimerHandle DelayTimerHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float TimerInterval = 0.05f;

protected:
	
	virtual void BeginPlay() override;

public:	

	void StartTimer();
	void StopTimer();

	void StartResetTimer();
	void StopResetTimer();

	void StartDealyTimer();
	void StopDealyTimer();

	UFUNCTION(BlueprintCallable)
	void UpdateData();

	void ResetData();

	void DelayData();

	UFUNCTION(BlueprintCallable)
	void OnSpacePressed();
	UFUNCTION(BlueprintCallable)
	void OnSpaceReleased();

};
