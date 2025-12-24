// Fill out your copyright notice in the Description page of Project Settings.


#include "Task/TaskComponent.h"

#include "Microsoft/COMPointer.h"


UTaskComponent::UTaskComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

}


void UTaskComponent::ShowTask()
{
	AllTasks.Empty();

	TArray<FName> TaskNames = TaskDataTable->GetRowNames();

	for (const FName& TaskName : TaskNames)
	{
		FTaskDefinition *Task = TaskDataTable->FindRow<FTaskDefinition>(TaskName,TEXT("LoadTasks"));
		
		if (Task)
		{
			FTaskDefinition TaskDef = *Task;
			AllTasks.Add(TaskName,TaskDef);
		}
	}
}

void UTaskComponent::StartTimer()
{
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle,
		this,
		&UTaskComponent::TimeManager,
		1.f,
		true
		);
}

void UTaskComponent::StopTimer()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}

void UTaskComponent::TimeManager()
{
	day++;
	int Max_day = 30;
	if (month==2)
	{
		Max_day = 28;
	}
	else if (month==1 || month==3 || month==5 ||month==7|| month==8 || month==10 || month==12)
	{
		Max_day = 31;
	}
	if (day > Max_day)
	{
		month++;
		if (month>12)
		{
			month = 1;
			year++;
			OnYearChanged.Broadcast(year);
		}
		OnMonthChanged.Broadcast(month);
		day = 1 ;
	}

	OnDayChanged.Broadcast(day);
}

void UTaskComponent::LoadTaskData(int InYear, int InMonth, int InDay)
{
	OnYearChanged.Broadcast(InYear);
	OnMonthChanged.Broadcast(InMonth);
	OnDayChanged.Broadcast(InDay);
}

void UTaskComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UTaskComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

