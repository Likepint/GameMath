#pragma once

#include "CoreMinimal.h"
#include "Actors/CActor.h"
#include "CActor_Subtraction_Green.generated.h"

UCLASS()
class GAMEMATH_API ACActor_Subtraction_Green : public ACActor
{
	GENERATED_BODY()
	
public:
	ACActor_Subtraction_Green();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
