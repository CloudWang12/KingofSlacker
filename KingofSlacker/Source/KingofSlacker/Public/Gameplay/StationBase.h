#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "StationBase.generated.h"

// 前向声明（只声明不在上述包含中的类）
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
	// 组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* ProgressBar;

	// Widget引用
	UPROPERTY(BlueprintReadOnly, Category = "Station")
	UBarPercentageWidget* ProgressBarWidget;

	// 玩家状态
	UPROPERTY(BlueprintReadOnly, Category = "Station")
	AKS_PlayerState* KS_PlayerState;

	// 委托
	UPROPERTY(BlueprintAssignable, Category = "Station")
	FOnBarProgressMax OnBarProgressMax;

	// 循环控制
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	bool bLoopEnabled = true;

	UPROPERTY(BlueprintReadOnly, Category = "Station")
	int32 LoopCount = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	int32 MaxLoopCount = 0;

	// 状态
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

	// 计时器
	FTimerHandle TimerHandle;
	FTimerHandle ResetTimerHandle;
	FTimerHandle DelayTimerHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Station")
	float TimerInterval = 0.05f;

public:
	// 函数
	UFUNCTION(BlueprintCallable, Category = "Station")
	AKS_PlayerState* GetKSPlayerState();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void ResetLoopState();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void StartTimer();
	
	UFUNCTION(BlueprintCallable, Category = "Station")
	void StopTimer();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void StartResetTimer();
	
	UFUNCTION(BlueprintCallable, Category = "Station")
	void StopResetTimer();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void StartDealyTimer();
	
	UFUNCTION(BlueprintCallable, Category = "Station")
	void StopDealyTimer();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void UpdateData();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void ResetData();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void DelayData();

	UFUNCTION(BlueprintCallable, Category = "Station")
	void OnSpacePressed();
	
	UFUNCTION(BlueprintCallable, Category = "Station")
	void OnSpaceReleased();
};