// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet2.h"

// Sets default values
ABullet2::ABullet2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABullet2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

