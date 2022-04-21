// Copyright Epic Games, Inc. All Rights Reserved.

#include "SlimeAlchemistGameMode.h"
#include "SlimeAlchemistCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASlimeAlchemistGameMode::ASlimeAlchemistGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	
	//�v���C���[�̃u���[�v�����g�̎Q�ƃp�X���w�肷��
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Alchemist.Alchemist_c"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
