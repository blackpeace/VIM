// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Items/VWeapon.h"
#include "VEnergyRifle.generated.h"

/**
 * 
 */
UCLASS()
class VIM_API AVEnergyRifle : public AVWeapon
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditDefaultsOnly) //per second
	float RechargeAmount;
	float Charge;
};
