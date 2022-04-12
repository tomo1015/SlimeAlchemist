// Fill out your copyright notice in the Description page of Project Settings.


#include "Alchemist.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

//コンストラクタ
AAlchemist::AAlchemist()
{
	//CapsuleComponentの初期サイズ設定
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	
	//回転軸のフラグ初期化
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//CharacterMovementComponentの初期設定
	//キャラの移動向きに対してキャラを回転させる処理をON
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

//入力のバインド処理
void AAlchemist::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//UObjectクラスでチェック処理を動かす
	//※UObjectクラスには参照の自動更新やGC（ガーベジコレクション）の処理があるのでそれを利用する
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//アクションインプットを設定
}

//前後移動
void AAlchemist::MoveForward(float value)
{

}

//左右移動
void AAlchemist::MoveRight(float value)
{

}