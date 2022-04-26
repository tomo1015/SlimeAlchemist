// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharaAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SLIMEALCHEMIST_API UCharaAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
protected:
	//���s���x
	UPROPERTY(BlueprintReadWrite)
		float Speed = 0.0f;

public:
	//���t���[���Ăяo����鏈���̃I�[�o���C�h
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

};
