#pragma once

#include "CoreMinimal.h"
#include "Actors/CActor.h"
#include "CActor_Addition_Red.generated.h"

UCLASS()
class GAMEMATH_API ACActor_Addition_Red : public ACActor
{
	GENERATED_BODY()

public:
	ACActor_Addition_Red();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
};
