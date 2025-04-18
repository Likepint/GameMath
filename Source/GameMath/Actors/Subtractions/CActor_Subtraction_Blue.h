#pragma once

#include "CoreMinimal.h"
#include "Actors/Subtractions/CActor_Subtraction.h"
#include "CActor_Subtraction_Blue.generated.h"

UCLASS()
class GAMEMATH_API ACActor_Subtraction_Blue : public ACActor_Subtraction
{
	GENERATED_BODY()

public:
	ACActor_Subtraction_Blue();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
};
