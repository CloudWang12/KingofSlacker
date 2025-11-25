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

void UTaskComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UTaskComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

