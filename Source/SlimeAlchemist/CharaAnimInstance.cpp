// Fill out your copyright notice in the Description page of Project Settings.


#include "CharaAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

void UCharaAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	//Super�N���X�̌Ăяo��
	Super::NativeUpdateAnimation(DeltaSeconds);

	//�A�j���[�V�����u���[�v�����g��Character���擾
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwningActor());
	if (OwnerCharacter != nullptr) {
		//���x���擾����
		Speed = OwnerCharacter->GetVelocity().Size();
	}
}