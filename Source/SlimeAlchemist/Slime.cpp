// Fill out your copyright notice in the Description page of Project Settings.


#include "Slime.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
ASlime::ASlime()
{
	//CapsuleComponentの初期サイズ設定
	GetCapsuleComponent()->InitCapsuleSize(100.f, 100.f);

	//回転軸のフラグ初期化
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//CharacterMovementComponentの初期設定
	GetCharacterMovement()->bOrientRotationToMovement = true;
	//キャラの振り向きによる変化量を設定
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);
	//キャラのZ軸方向への移動（跳躍の速度）を設定（ジャンプしないキャラなので0）
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	//空中での操作量を設定（空中移動がないキャラなので0）
	GetCharacterMovement()->AirControl = 0.0f;
	//歩きでの最大対地速度を設定(cm/s)
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	//最小のアナログスティックの傾きで移動する相対速度(cm/s)
	GetCharacterMovement()->MinAnalogWalkSpeed = 30.f;
	//加速していない時の減速度
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