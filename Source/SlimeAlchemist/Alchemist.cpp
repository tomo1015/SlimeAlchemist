// Fill out your copyright notice in the Description page of Project Settings.


#include "Alchemist.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

//�R���X�g���N�^
AAlchemist::AAlchemist()
{
	//CapsuleComponent�̏����T�C�Y�ݒ�
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	
	//��]���̃t���O������
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//CharacterMovementComponent�̏����ݒ�
	//�L�����̈ړ������ɑ΂��ăL��������]�����鏈����ON
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
}

// Called when the game starts or when spawned
void AAlchemist::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAlchemist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//���͂̃o�C���h����
void AAlchemist::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//UObject�N���X�Ń`�F�b�N�����𓮂���
	//��UObject�N���X�ɂ͎Q�Ƃ̎����X�V��GC�i�K�[�x�W�R���N�V�����j�̏���������̂ł���𗘗p����
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//�A�N�V�����C���v�b�g��ݒ�
	//�������F�v���W�F�N�g�ݒ聨�C���v�b�g���o�C���f�B���O�Őݒ肵�����O
	//��O�����F���삳���������\�b�h
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AAlchemist::MoveForward);//�O��ړ�
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AAlchemist::MoveRight);//���E�ړ�
}

//�O��ړ�
void AAlchemist::MoveForward(float Value)
{
	//�R���g���[���[�������āA���͒l��0�łȂ��Ȃ��
	if ((Controller != nullptr) && (Value != 0.0f)) 
	{
		//�R���g���[���[������͂�����]���擾����
		FRotator Rotation = Controller->GetControlRotation();
		//Yaw�̉�]�̂ݎ擾����
		FRotator YawRotation = FRotator(0, Rotation.Yaw, 0);

		//�L�����̈ړ��������擾����
		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		//�����Ɠ��͒l���ړ����\�b�h�֓����
		AddMovementInput(Direction, Value);
	}
}

//���E�ړ�
void AAlchemist::MoveRight(float Value)
{
	//�R���g���[���[�������āA���͒l��0�łȂ��Ȃ��
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		//�R���g���[���[������͂�����]���擾����
		FRotator Rotation = Controller->GetControlRotation();
		//Yaw�̉�]�̂ݎ擾����
		FRotator YawRotation = FRotator(0, Rotation.Yaw, 0);

		//�L�����̈ړ��������擾����
		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		//�����Ɠ��͒l���ړ����\�b�h�֓����
		AddMovementInput(Direction, Value);
	}
}