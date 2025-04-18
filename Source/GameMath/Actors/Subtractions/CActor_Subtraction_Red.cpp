#include "Actors/Subtractions/CActor_Subtraction_Red.h"

ACActor_Subtraction_Red::ACActor_Subtraction_Red()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialInstance> material(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Actors/Materials/MI_Red.MI_Red'"));
	if (material.Succeeded())
		Mesh->SetMaterial(0, material.Object);

	Direction = GetActorForwardVector();

}

void ACActor_Subtraction_Red::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Subtraction_Red::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
