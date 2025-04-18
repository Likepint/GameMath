#include "Actors/Subtractions/CActor_Subtraction_Blue.h"

ACActor_Subtraction_Blue::ACActor_Subtraction_Blue()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialInstance> material(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Actors/Materials/MI_Blue.MI_Blue'"));
	if (material.Succeeded())
		Mesh->SetMaterial(0, material.Object);

	Direction = GetActorForwardVector() - GetActorRightVector();

}

void ACActor_Subtraction_Blue::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Subtraction_Blue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
