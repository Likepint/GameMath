#include "Actors/Additions/CActor_Addition_Green.h"

ACActor_Addition_Green::ACActor_Addition_Green()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialInstance> material(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Actors/Materials/MI_Green.MI_Green'"));
	if (material.Succeeded())
		Mesh->SetMaterial(0, material.Object);

	Direction = GetActorRightVector();

}

void ACActor_Addition_Green::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Addition_Green::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
