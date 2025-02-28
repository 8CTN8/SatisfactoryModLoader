// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGStickyExplosive.h"
#include "DamageTypes/FGDamageType.h"
#include "GameFramework/RotatingMovementComponent.h"

AFGStickyExplosive::AFGStickyExplosive() : Super() {
	this->mDetonateIn = 0.0;
	this->mEnvironmentDestructionSphere = nullptr;
	this->mRotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
	this->mThrowRotation.Pitch = -147.99;
	this->mThrowRotation.Yaw = -3.86471;
	this->mThrowRotation.Roll = -154.623;
	this->mProjectileData.ProjectileClass = nullptr;
	this->mProjectileData.ProjectileLifeSpan = 10.0;
	this->mProjectileData.ProjectileStickSpan = 5.0;
	this->mProjectileData.ExplosionDamage = 100;
	this->mProjectileData.ExplosionRadius = 300.0;
	this->mProjectileData.ImpactDamage = 0;
	this->mProjectileData.ShouldExplodeOnImpact = true;
	this->mProjectileData.CanTriggerExplodeBySameClass = true;
	this->mProjectileData.ExplodeAtEndOfLife = false;
	this->mProjectileData.DamageType = UFGDamageType::StaticClass();
	this->mProjectileData.DamageTypeExplode = UFGDamageType::StaticClass();
	this->mProjectileData.DamageFalloffCurve.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mProjectileData.DamageFalloffCurve.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mProjectileData.DamageFalloffCurve.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mProjectileData.DamageFalloffCurve.ExternalCurve = nullptr;
	this->mProjectileData.EffectiveRange = 0.0;
	this->mProjectileData.WeaponDamageMultiplier = 1.0;
}
void AFGStickyExplosive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGStickyExplosive, mDetonateIn);
}
void AFGStickyExplosive::OnImpact(const FHitResult& hitResult){ }
float AFGStickyExplosive::TakeDamage(float DamageAmount, const  FDamageEvent& DamageEvent,
							 AController* EventInstigator,
							AActor* DamageCauser){ return float(); }
bool AFGStickyExplosive::ShouldSave_Implementation() const{ return bool(); }
bool AFGStickyExplosive::NeedTransform_Implementation(){ return bool(); }
void AFGStickyExplosive::TriggerSecondary(){ }
void AFGStickyExplosive::TriggerSecondaryWithDelay(float delayTime){ }
void AFGStickyExplosive::SetToDetonate(float timeUntilDetonate){ }
void AFGStickyExplosive::OnRep_DetonateIn(){ }
