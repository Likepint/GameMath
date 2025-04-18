#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CActor.generated.h"

UCLASS()
class GAMEMATH_API ACActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* Collision;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Mesh;
	
public:	
	ACActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	FVector Direction;

};
