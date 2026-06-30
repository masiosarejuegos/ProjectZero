// Masiosare Juegos.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ProjectZeroCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class PROJECTZERO_API AProjectZeroCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AProjectZeroCharacter();
	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;
};
