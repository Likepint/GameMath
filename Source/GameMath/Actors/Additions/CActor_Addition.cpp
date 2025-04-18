#include "Actors/Additions/CActor_Addition.h"

ACActor_Addition::ACActor_Addition()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACActor_Addition::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Addition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector start = GetActorLocation();
	FVector end = start + Direction.GetSafeNormal() * 300;

	DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 0.1);

	SetActorLocation(GetActorLocation() + Direction * 50 * DeltaTime);

}
