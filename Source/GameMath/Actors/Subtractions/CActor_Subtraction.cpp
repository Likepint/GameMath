#include "Actors/Subtractions/CActor_Subtraction.h"

ACActor_Subtraction::ACActor_Subtraction()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACActor_Subtraction::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Subtraction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector start = GetActorLocation();
	FVector end = start + Direction.GetSafeNormal() * 300;

	DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 0.1);

	SetActorLocation(GetActorLocation() + Direction * 50 * DeltaTime);

}
