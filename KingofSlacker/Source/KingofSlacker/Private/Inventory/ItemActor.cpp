


#include "Inventory/ItemActor.h"



AItemActor::AItemActor()
{
 	
	PrimaryActorTick.bCanEverTick = false;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	
	SetRootComponent(Mesh);
	
	
	
}


void AItemActor::BeginPlay()
{
	Super::BeginPlay();
	if (ItemDataTable)
	{
		ItemType = *ItemDataTable->FindRow<FItemType>(ItemName,"Context");
	}
	
}


void AItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemActor::Interact_Implementation(bool bInRange)
{
	IInteractInterface::Interact_Implementation(bInRange);
}

void AItemActor::Delegate_InteractItem()
{
	OnInteractItem.Broadcast();
}

