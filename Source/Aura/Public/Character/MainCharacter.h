

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

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
private:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;
};
