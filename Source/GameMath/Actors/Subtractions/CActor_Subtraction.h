#pragma once

#include "CoreMinimal.h"
#include "Actors/CActor.h"
#include "CActor_Subtraction.generated.h"

UCLASS()
class GAMEMATH_API ACActor_Subtraction : public ACActor
{
	GENERATED_BODY()
	
public:
	ACActor_Subtraction();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
