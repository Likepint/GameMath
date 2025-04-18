#pragma once

#include "CoreMinimal.h"
#include "Actors/CActor.h"
#include "CActor_Addition.generated.h"

UCLASS()
class GAMEMATH_API ACActor_Addition : public ACActor
{
	GENERATED_BODY()
	
public:
	ACActor_Addition();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
