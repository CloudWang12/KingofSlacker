
#pragma once

#include "CoreMinimal.h"
#include "CharacterTemplate.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;


UCLASS(Abstract)
class KINGOFSLACKER_API ACharacterBase : public ACharacterTemplate
{
	GENERATED_BODY()
	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	
	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;



public:
	
	ACharacterBase();

	
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

	
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

protected:
	
	virtual void BeginPlay() override;

	
	void Move(const FInputActionValue& Value);

	
	void Look(const FInputActionValue& Value);
	

public:	

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

};
