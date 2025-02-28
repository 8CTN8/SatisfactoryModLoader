// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGBuildGunPaint.h"

UFGBuildGunStatePaint::UFGBuildGunStatePaint() : Super() {
	this->mHoverProxyMaterial = nullptr;
	this->mInvisibleMaterialDescriptor = nullptr;
	this->mActiveColorSlot = 0;
	this->mActiveRecipe = nullptr;
	this->mActiveColorSwatch = nullptr;
	this->mActivePatternDesc = nullptr;
	this->mActiveMaterialDesc = nullptr;
	this->mPatternRotation = 0;
	this->mSingleApplicationActor = nullptr;
	this->mCurrentCustomizationTarget = nullptr;
	this->mLastAppliedActor = nullptr;
	this->mPreviewActor = nullptr;
}
void UFGBuildGunStatePaint::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}
void UFGBuildGunStatePaint::BeginState_Implementation(){ }
void UFGBuildGunStatePaint::EndState_Implementation(){ }
void UFGBuildGunStatePaint::TickState_Implementation(float deltaTime){ }
void UFGBuildGunStatePaint::PrimaryFire_Implementation(){ }
void UFGBuildGunStatePaint::PrimaryFireRelease_Implementation(){ }
void UFGBuildGunStatePaint::SecondaryFire_Implementation(){ }
void UFGBuildGunStatePaint::ScrollDown_Implementation(){ }
void UFGBuildGunStatePaint::ScrollUp_Implementation(){ }
void UFGBuildGunStatePaint::CreateStencilProxy(AActor* selected){ }
void UFGBuildGunStatePaint::DestroyStencilProxies(bool destroyComponents){ }
void UFGBuildGunStatePaint::Server_ExecutePrimaryFire_Implementation(){ }
void UFGBuildGunStatePaint::Server_ExecutePaint_Implementation(uint8 mode, FFactoryCustomizationData customizationData, AActor* hitActor){ }
void UFGBuildGunStatePaint::SetActiveCustomization(TSubclassOf< UFGFactoryCustomizationDescriptor > customizationDesc){ }
void UFGBuildGunStatePaint::SetActiveSwatchDesc(TSubclassOf< UFGFactoryCustomizationDescriptor_Swatch > swatchDesc){ }
void UFGBuildGunStatePaint::SetActivePatternDesc(TSubclassOf< UFGFactoryCustomizationDescriptor_Pattern > patternDesc){ }
void UFGBuildGunStatePaint::SetActiveMaterialDesc(TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
void UFGBuildGunStatePaint::RemoveCustomization(TSubclassOf< UFGFactoryCustomizationDescriptor > customization){ }
void UFGBuildGunStatePaint::ClearAllCustomizations(){ }
void UFGBuildGunStatePaint::SetActiveRecipe(TSubclassOf< UFGCustomizationRecipe > customizationRecipe){ }
bool UFGBuildGunStatePaint::IsCustomizationActive(TSubclassOf< UFGFactoryCustomizationDescriptor > customization){ return bool(); }
bool UFGBuildGunStatePaint::IsRecipeActive(TSubclassOf<  UFGCustomizationRecipe > inClass){ return bool(); }
TArray< FItemAmount > UFGBuildGunStatePaint::GetCustomizationCost() const{ return TArray<FItemAmount>(); }
void UFGBuildGunStatePaint::SpawnPreviewActor(AFGBuildable* aimedAtBuildable, TSubclassOf< UFGFactoryCustomizationDescriptor_Material >& targetMaterialDesc){ }
USceneComponent* UFGBuildGunStatePaint::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void UFGBuildGunStatePaint::ValidateCost(){ }
void UFGBuildGunStatePaint::AddConstructDisqualifier(TSubclassOf<  UFGConstructDisqualifier > disqualifier){ }
uint8 UFGBuildGunStatePaint::AlignPatternRotationWithActor(const AActor* actor, uint8 currentPatternRotation) const{ return uint8(); }
