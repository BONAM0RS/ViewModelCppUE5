// Fill out your copyright notice in the Description page of Project Settings.

#include "VM_Character.h"


void UVM_Character::SetCurrentHealth(float NewCurrentHealth)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(CurrentHealth, NewCurrentHealth))
	{
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
	}
}

void UVM_Character::SetMaxHealth(float NewMaxHealth)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(MaxHealth, NewMaxHealth))
	{
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
	}
}

float UVM_Character::GetCurrentHealth() const
{
	return CurrentHealth;
}

float UVM_Character::GetMaxHealth() const
{
	return MaxHealth;
}

float UVM_Character::GetHealthPercent() const
{
	if (MaxHealth != 0.f)
	{
		return CurrentHealth / MaxHealth;
	}

	return 0.f;
}
