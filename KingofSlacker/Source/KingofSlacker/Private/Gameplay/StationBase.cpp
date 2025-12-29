#include "Gameplay/StationBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Gameplay/KS_PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "UI/BarPercentageWidget.h"

// 构造函数
AStationBase::AStationBase()
{
	PrimaryActorTick.bCanEverTick = false;

	// 创建根组件（空静态网格体）
	Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	// 配置根组件
	Root->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Root->SetHiddenInGame(true);
	
	// 创建进度条组件并附加到Root
	ProgressBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("ProgressBar"));
	ProgressBar->SetupAttachment(Root);
	
	// 设置进度条的默认位置和大小
	ProgressBar->SetRelativeLocation(FVector(0, 0, 100));
	ProgressBar->SetRelativeScale3D(FVector(1.0f));
	
	// 设置默认的Widget空间（根据你的需求选择）
	// ProgressBar->SetWidgetSpace(EWidgetSpace::Screen); // 屏幕空间
	ProgressBar->SetWidgetSpace(EWidgetSpace::World);     // 世界空间
	
	// 设置绘制尺寸
	ProgressBar->SetDrawSize(FVector2D(200, 50));
}

// BeginPlay
void AStationBase::BeginPlay()
{
	Super::BeginPlay();

	// 初始化进度条Widget
	if (ProgressBar)
	{
		ProgressBarWidget = Cast<UBarPercentageWidget>(ProgressBar->GetUserWidgetObject());
		if (ProgressBarWidget && BarMaxValue > 0)
		{
			ProgressBarWidget->SetBarPercentage(BarValue / BarMaxValue);
		}
		else if (!ProgressBarWidget)
		{
			UE_LOG(LogTemp, Warning, TEXT("AStationBase: 无法获取或转换ProgressBarWidget"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AStationBase: ProgressBar组件为空"));
	}
}

// 获取玩家状态
AKS_PlayerState* AStationBase::GetKSPlayerState() const
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	
	if (PC)
	{
		KS_PlayerState = PC->GetPlayerState<AKS_PlayerState>();
		return KS_PlayerState;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AStationBase: 无法获取PlayerController"));
		return nullptr;
	}
}

// 重置循环状态
void AStationBase::ResetLoopState()
{
	LoopCount = 0;
	BarValue = 0.f;
	
	if (ProgressBarWidget)
	{
		ProgressBarWidget->SetBarPercentage(0.f);
	}
	
	UE_LOG(LogTemp, Log, TEXT("AStationBase: 循环状态已重置"));
}

// 启动进度更新计时器
void AStationBase::StartTimer()
{
	if (!TimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().SetTimer(
			TimerHandle,
			this,
			&AStationBase::UpdateData,
			TimerInterval, // 使用配置的时间间隔
			true
		);
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 启动进度计时器"));
	}
}

// 停止进度更新计时器
void AStationBase::StopTimer()
{
	if (TimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 停止进度计时器"));
	}
}

// 启动重置计时器
void AStationBase::StartResetTimer()
{
	if (!ResetTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().SetTimer(
			ResetTimerHandle,
			this,
			&AStationBase::ResetData,
			5.f,
			false
		);
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 启动重置计时器"));
	}
}

// 停止重置计时器
void AStationBase::StopResetTimer()
{
	if (ResetTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(ResetTimerHandle);
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 停止重置计时器"));
	}
}

// 启动延迟减少计时器
void AStationBase::StartDealyTimer()
{
	if (!DelayTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().SetTimer(
			DelayTimerHandle,
			this,
			&AStationBase::DelayData,
			0.1f, // 固定0.1秒间隔
			true
		);
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 启动延迟减少计时器"));
	}
}

// 停止延迟减少计时器
void AStationBase::StopDealyTimer()
{
	if (DelayTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(DelayTimerHandle);
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 停止延迟减少计时器"));
	}
}

// 更新进度数据（主循环）
void AStationBase::UpdateData()
{
	// 只有在范围内且按住空格时才更新
	if (bInRange && bHoldingSpace)
	{
		// 计算本次更新的增量
		float Delta = BarIncreaseValue * TimerInterval * EffectTimes;
		
		// 更新进度值并限制在0到最大值之间
		BarValue = FMath::Clamp(BarValue + Delta, 0.f, BarMaxValue);
		
		// 更新UI显示
		if (ProgressBarWidget)
		{
			ProgressBarWidget->SetBarPercentage(BarValue / BarMaxValue);
		}
		
		// 检查是否达到最大值
		if (BarValue >= BarMaxValue)
		{
			// 增加循环计数
			LoopCount++;
			
			// 广播进度完成事件
			OnBarProgressMax.Broadcast();
			
			// 记录日志
			UE_LOG(LogTemp, Log, TEXT("AStationBase: 进度完成，当前循环次数: %d"), LoopCount);
			
			// 检查是否应该继续循环
			bool bShouldLoop = bLoopEnabled && bHoldingSpace && bInRange;
			
			// 如果有最大循环次数限制，检查是否达到
			if (MaxLoopCount > 0)
			{
				bShouldLoop = bShouldLoop && (LoopCount < MaxLoopCount);
			}
			
			if (bShouldLoop)
			{
				// 开始新一轮循环
				BarValue = 0.f;
				
				// 更新UI显示为0
				if (ProgressBarWidget)
				{
					ProgressBarWidget->SetBarPercentage(0.f);
				}
				
				UE_LOG(LogTemp, Log, TEXT("AStationBase: 开始新一轮循环"));
			}
			else
			{
				// 停止循环
				StopTimer();
				LoopCount = 0; // 重置循环计数
				
				// 保持进度条在满状态
				BarValue = BarMaxValue;
				if (ProgressBarWidget)
				{
					ProgressBarWidget->SetBarPercentage(1.f);
				}
				
				UE_LOG(LogTemp, Log, TEXT("AStationBase: 循环结束"));
			}
		}
	}
	else
	{
		// 不在范围内或没有按住空格，停止计时器
		StopTimer();
	}
}

// 重置数据（开始减少进度）
void AStationBase::ResetData()
{
	StopTimer();
	StartDealyTimer();
	UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 开始重置数据"));
}

// 延迟减少数据（进度条自动减少）
void AStationBase::DelayData()
{
	// 只有在没有按住空格且不在满状态时才减少
	if (!bHoldingSpace && BarValue > 0.f)
	{
		float Delta = BarIncreaseValue * 0.1f; // 使用固定0.1秒间隔计算减少量
		BarValue = FMath::Clamp(BarValue - Delta, 0.f, BarMaxValue);
		
		if (ProgressBarWidget)
		{
			ProgressBarWidget->SetBarPercentage(BarValue / BarMaxValue);
		}
		
		// 如果减少到0，停止减少计时器
		if (BarValue <= 0.f)
		{
			StopDealyTimer();
			UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 进度已归零，停止减少"));
		}
	}
	else
	{
		// 如果玩家又开始按空格或进度已经为0，停止减少计时器
		StopDealyTimer();
	}
}

// 空格按下事件
void AStationBase::OnSpacePressed()
{
	bHoldingSpace = true;
	
	// 停止所有计时器
	StopDealyTimer();
	StopResetTimer();
	
	// 如果进度条已经满了且启用循环，立即重置
	if (BarValue >= BarMaxValue && bLoopEnabled)
	{
		BarValue = 0.f;
		if (ProgressBarWidget)
		{
			ProgressBarWidget->SetBarPercentage(0.f);
		}
		LoopCount = 0; // 重置循环计数
		UE_LOG(LogTemp, Log, TEXT("AStationBase: 空格按下，重置满进度开始新循环"));
	}
	else
	{
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 空格按下，开始增加进度"));
	}
	
	// 启动进度增加计时器
	StartTimer();
}

// 空格释放事件
void AStationBase::OnSpaceReleased()
{
	bHoldingSpace = false;
	
	// 只有在进度条未满时才启动重置计时器
	if (BarValue < BarMaxValue)
	{
		StartResetTimer();
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 空格释放，启动重置计时器"));
	}
	else
	{
		UE_LOG(LogTemp, Verbose, TEXT("AStationBase: 空格释放，进度已满，不启动重置"));
	}
	
	// 停止进度增加计时器
	StopTimer();
	
	// 重置循环计数（如果进度没满）
	if (BarValue < BarMaxValue)
	{
		LoopCount = 0;
	}
}