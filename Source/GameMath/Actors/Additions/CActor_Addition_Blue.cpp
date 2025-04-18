#include "Actors/Additions/CActor_Addition_Blue.h"

ACActor_Addition_Blue::ACActor_Addition_Blue()
{
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterialInstance> material(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Actors/Materials/MI_Blue.MI_Blue'"));
	if (material.Succeeded())
		Mesh->SetMaterial(0, material.Object);

	Direction = GetActorForwardVector() + GetActorRightVector();

}

void ACActor_Addition_Blue::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor_Addition_Blue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
