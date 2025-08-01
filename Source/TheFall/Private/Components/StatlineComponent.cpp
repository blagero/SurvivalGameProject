// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/StatlineComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values for this component's properties
UStatlineComponent::UStatlineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UStatlineComponent::TickStats(const float& DeltaTime)
{
	Health.TickStat(DeltaTime);
	TickStamina(DeltaTime);
	Hunger.TickStat(DeltaTime);
	Thirst.TickStat(DeltaTime);
}

void UStatlineComponent::TickStamina(const float& DeltaTime)
{
	if (bIsSprinting && IsValidSprinting()) {
		Stamina.TickStat(0 - (DeltaTime * SprintCostMultiplayer));
		if (Stamina.GetCurrent() <= 0.0) {
			SetSprinting(false);
		}
		return;
	}
	Stamina.TickStat(DeltaTime);
}

bool UStatlineComponent::IsValidSprinting()
{
	return OwningCharMovementComp->Velocity.Length() > WalkSpeed && !OwningCharMovementComp->IsFalling();
}

// Called when the game starts
void UStatlineComponent::BeginPlay()
{
	Super::BeginPlay();
	OwningCharMovementComp->MaxWalkSpeed = WalkSpeed;

}


// Called every frame
void UStatlineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (TickType != ELevelTick::LEVELTICK_PauseTick) {
		TickStats(DeltaTime);
	}

}

void UStatlineComponent::SetMovementCompReference(UCharacterMovementComponent* Comp)
{
	OwningCharMovementComp = Comp;
}

float UStatlineComponent::GetStatPercentile(const ECoreStat Stat) const
{
	switch (Stat) {
	case ECoreStat::CS_HEALTH:
		return Health.Percentile();
	case ECoreStat::CS_HUNGER:
		return Hunger.Percentile();
	case ECoreStat::CS_STAMINA:
		return Stamina.Percentile();
	case ECoreStat::CS_THIRST:
		return Thirst.Percentile();
	default:
		//TODO: Log invalid stat
		break;
	}
	return -1;
}

bool UStatlineComponent::CanSprint() const
{
	return Stamina.GetCurrent() > 0.0;
}

void UStatlineComponent::SetSprinting(const bool& IsSprinting)
{
	bIsSprinting = IsSprinting;
	OwningCharMovementComp->MaxWalkSpeed = bIsSprinting ? SprintSpeed : WalkSpeed;
}

bool UStatlineComponent::CanJump()
{
	return Stamina.GetCurrent() >= JumpCost;
}

void UStatlineComponent::HasJumped()
{
	if (!OwningCharMovementComp->IsFalling()) {
		Stamina.Adjust(0 - JumpCost);

	}
}

