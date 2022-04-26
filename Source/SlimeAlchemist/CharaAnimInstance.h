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
	//歩行速度
	UPROPERTY(BlueprintReadWrite)
		float Speed = 0.0f;

public:
	//毎フレーム呼び出される処理のオーバライド
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

};
