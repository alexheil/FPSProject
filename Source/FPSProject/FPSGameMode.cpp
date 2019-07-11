// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSGameMode.h"
#include "Engine.h"

AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
      // set default pawn class to our Blueprinted character
      static ConstructorHelpers::FClassFinder<APawn> PlayerPawnObject(TEXT("Pawn'/Game/Blueprints/BP_FPSCharacter.BP_FPSCharacter_C'"));
      if (PlayerPawnObject.Class != NULL)
      {
            DefaultPawnClass = PlayerPawnObject.Class;
      }
}

void AFPSGameMode::BeginPlay() 
{
      Super::BeginPlay();

      StartMatch();

      if (GEngine)
      {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
      }
}