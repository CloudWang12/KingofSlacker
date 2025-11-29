

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StationBase.generated.h"

UCLASS()
class KINGOFSLACKER_API AStationBase : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AStationBase();

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float TimerInterval = 0.05f;

protected:
	
	virtual void BeginPlay() override;

public:	
	

	UFUNCTION(BlueprintCallable)
	void ComputerStationGameplay();
	UFUNCTION(BlueprintCallable)
	void StopComputerStationGameplay();

	void StartTimer();
	void StopTimer();

	UFUNCTION(BlueprintCallable)
	void UpdateData();

	UFUNCTION(BlueprintCallable)
	void OnSpacePressed();
	UFUNCTION(BlueprintCallable)
	void OnSpaceReleased();

};
