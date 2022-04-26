// Fill out your copyright notice in the Description page of Project Settings.


#include "CharaAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

void UCharaAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	//Superクラスの呼び出し
	Super::NativeUpdateAnimation(DeltaSeconds);

	//アニメーションブループリントのCharacterを取得
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwningActor());
	if (OwnerCharacter != nullptr) {
		//速度を取得する
		Speed = OwnerCharacter->GetVelocity().Size();
	}
}