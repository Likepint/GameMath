#include "Actors/Additions/CActor_Addition_Red.h"

ACActor_Addition_Red::ACActor_Addition_Red()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialInstance> material(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Actors/Materials/MI_Red.MI_Red'"));
	if (material.Succeeded())
		Mesh->SetMaterial(0, material.Object);

	Direction = GetActorForwardVector();

}

void ACActor_Addition_Red::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Addition_Red::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
