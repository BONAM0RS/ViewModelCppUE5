// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "VM_Character.generated.h"

/**
 * 
 */
UCLASS()
class VIEWMODELCPPUE5_API UVM_Character : public UMVVMViewModelBase
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess))
	float CurrentHealth;
		
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta=(AllowPrivateAccess))
	float MaxHealth;
 
public:
	void SetCurrentHealth(float NewCurrentHealth);
	void SetMaxHealth(float NewMaxHealth);
 
	float GetCurrentHealth() const;
	float GetMaxHealth() const;
 
public:
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetHealthPercent() const;
		
};
