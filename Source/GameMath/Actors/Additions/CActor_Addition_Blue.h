#pragma once

#include "CoreMinimal.h"
#include "Actors/Additions/CActor_Addition.h"
#include "CActor_Addition_Blue.generated.h"

UCLASS()
class GAMEMATH_API ACActor_Addition_Blue : public ACActor_Addition
{
	GENERATED_BODY()

public:
	ACActor_Addition_Blue();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
