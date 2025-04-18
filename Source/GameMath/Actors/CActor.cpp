#include "Actors/CActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

ACActor::ACActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<UBoxComponent>("Collision");
	Collision->SetBoxExtent(FVector(50));
	RootComponent = Collision;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("/Script/Engine.StaticMesh'/Game/Actors/Meshes/Cube.Cube'"));
	if (mesh.Succeeded())
		Mesh->SetStaticMesh(mesh.Object);

}

void ACActor::BeginPlay()
{
	Super::BeginPlay();

}

void ACActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector start = GetActorLocation();
	FVector end = start + Direction.GetSafeNormal() * 300;

	DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 0.1);

	SetActorLocation(GetActorLocation() + Direction * 50 * DeltaTime);

}
