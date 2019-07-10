// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSGameMode.h"
#include "Engine.h"

AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

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