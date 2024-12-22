

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "MainCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class AURA_API AMainCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AMainCharacter();

private:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;
};
