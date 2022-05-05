// Fill out your copyright notice in the Description page of Project Settings.


#include "Slime.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
ASlime::ASlime()
{
	//CapsuleComponent�̏����T�C�Y�ݒ�
	GetCapsuleComponent()->InitCapsuleSize(100.f, 100.f);

	//��]���̃t���O������
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//CharacterMovementComponent�̏����ݒ�
	GetCharacterMovement()->bOrientRotationToMovement = true;
	//�L�����̐U������ɂ��ω��ʂ�ݒ�
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);
	//�L������Z�������ւ̈ړ��i����̑��x�j��ݒ�i�W�����v���Ȃ��L�����Ȃ̂�0�j
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	//�󒆂ł̑���ʂ�ݒ�i�󒆈ړ����Ȃ��L�����Ȃ̂�0�j
	GetCharacterMovement()->AirControl = 0.0f;
	//�����ł̍ő�Βn���x��ݒ�(cm/s)
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	//�ŏ��̃A�i���O�X�e�B�b�N�̌X���ňړ����鑊�Α��x(cm/s)
	GetCharacterMovement()->MinAnalogWalkSpeed = 30.f;
	//�������Ă��Ȃ����̌����x
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ASlime::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASlime::Synthetic()
{

}