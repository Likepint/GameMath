#include "Actors/Subtractions/CActor_Subtraction_Green.h"

ACActor_Subtraction_Green::ACActor_Subtraction_Green()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialInstance> material(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Actors/Materials/MI_Green.MI_Green'"));
	if (material.Succeeded())
		Mesh->SetMaterial(0, material.Object);

	Direction = GetActorRightVector();

}

void ACActor_Subtraction_Green::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Subtraction_Green::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
