// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Alchemist.generated.h"

UCLASS()
class SLIMEALCHEMIST_API AAlchemist : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAlchemist();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//前後移動
	void MoveForward(float value);

	//左右移動
	void MoveRight(float value);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
