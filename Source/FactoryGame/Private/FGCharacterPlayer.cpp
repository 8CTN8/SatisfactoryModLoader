// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCharacterPlayer.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FGOutlineComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "FGCharacterMovementComponent.h"

AFGCharacterPlayer::AFGCharacterPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFGCharacterMovementComponent>(ACharacter::CharacterMovementComponentName)) {
	this->mBaseTurnRate = 45.0;
	this->mBaseLookUpRate = 45.0;
	this->mMesh1PAnimClass = nullptr;
	this->mMesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh3P"));
	this->mFoliagePickupProxyClass = nullptr;
	this->mFoliagePickupProxy = nullptr;
	this->mBuildGun = nullptr;
	this->mResourceScanner = nullptr;
	this->mResourceMiner = nullptr;
	this->mWaitingClientAttachDrivable = nullptr;
	this->mBestUsableActor = nullptr;
	this->mAnimInstanceClass = nullptr;
	this->mAnimInstanceClass1P = nullptr;
	this->mReviveDuration = 5.0;
	this->mDrownDamageDamageType = nullptr;
	this->mDrownDamage = 10.0;
	this->mDrownDamageInterval = 1.0;
	this->mPlayerToRevive = nullptr;
	this->mPickupToCollect = nullptr;
	this->m1PDefaultFootstepEffect.Particle = nullptr;
	this->mLastSafeGroundPositions[0].X = 0.0;;
	this->mLastSafeGroundPositions[0].Y = 0.0;;
	this->mLastSafeGroundPositions[0].Z = 0.0;;
	this->mLastSafeGroundPositions[1].X = 0.0;;
	this->mLastSafeGroundPositions[1].Y = 0.0;;
	this->mLastSafeGroundPositions[1].Z = 0.0;;
	this->mLastSafeGroundPositions[2].X = 0.0;;
	this->mLastSafeGroundPositions[2].Y = 0.0;;
	this->mLastSafeGroundPositions[2].Z = 0.0;;
	this->mLastSafeGroundPositionLoopHead = 0;
	this->mCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT(" PlayerCamera "));
	this->mCinematicCameraComponent = nullptr;
	this->mSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	this->mCameraComponent->SetupAttachment(mSpringArmComponent);
	this->mCurrentCameraMode = ECameraMode::ECM_None;
	this->mPlayerPreferredCameraMode = ECameraMode::ECM_FirstPerson;
	this->mInventory = nullptr;
	this->mAllowedResourceFormsInInventory.Add(EResourceForm::RF_SOLID);
	this->mBeltSlot = nullptr;
	this->mTrashSlot = nullptr;
	this->mAllowCameraToggling = false;
	this->mUseDistance = 450.0;
	this->mPickupCounter = 0;
	this->mReviver = nullptr;
	this->mDefaultWalkHeadBobShake = nullptr;
	this->mDefaultSprintHeadBobShake = nullptr;
	this->mDrivenVehicle = nullptr;
	this->mSavedDrivenVehicle = nullptr;
	this->mOutlineComponent = CreateDefaultSubobject<UFGOutlineComponent>(TEXT("OutlineComponent"));
	this->mHealthGenerationThreshold = 0.3;
	this->mHealthGenerationAmount = 1.0;
	this->mHealthGenerationInterval = 0.5;
	this->mHealthGenerationWaitTime = 3.0;
	this->mRadiationIntensity = 0.0;
	this->mRadiationDamageAngle = 0.0;
	this->mRadiationImmunity = 0.0;
	this->mInRadioactiveZone = false;
	this->mCameraOffsetBlendSpeed = 3.0;
	this->mReplicatedIsSliding = false;
	this->mCrouchSpeed = 3.0;
	this->mStandSpeed = 3.0;
	this->mSlideToCrouchSpeed = 1.0;
	this->mIncomingAttackers = 0;
	this->mZiplineParticle = nullptr;
	this->mNoUpdate = false;
	this->mActorRepresentationTexture = nullptr;
	this->mActorRepresentationTextureDead = nullptr;
	this->bNetUseOwnerRelevancy = true;
	this->mMesh3P->SetupAttachment(GetCapsuleComponent());
	this->mSpringArmComponent->SetupAttachment(GetCapsuleComponent());
}
void AFGCharacterPlayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGCharacterPlayer, mFoliagePickupProxy);
	DOREPLIFETIME(AFGCharacterPlayer, mBuildGun);
	DOREPLIFETIME(AFGCharacterPlayer, mResourceScanner);
	DOREPLIFETIME(AFGCharacterPlayer, mResourceMiner);
	DOREPLIFETIME(AFGCharacterPlayer, mWaitingClientAttachDrivable);
	DOREPLIFETIME(AFGCharacterPlayer, mActiveEquipments);
	DOREPLIFETIME(AFGCharacterPlayer, mAllAttachments);
	DOREPLIFETIME(AFGCharacterPlayer, mActiveAttachments);
	DOREPLIFETIME(AFGCharacterPlayer, mInventory);
	DOREPLIFETIME(AFGCharacterPlayer, mBeltSlot);
	DOREPLIFETIME(AFGCharacterPlayer, mTrashSlot);
	DOREPLIFETIME(AFGCharacterPlayer, mPickupCounter);
	DOREPLIFETIME(AFGCharacterPlayer, mDrivenVehicle);
	DOREPLIFETIME(AFGCharacterPlayer, mRadiationIntensity);
	DOREPLIFETIME(AFGCharacterPlayer, mRadiationDamageAngle);
	DOREPLIFETIME(AFGCharacterPlayer, mRadiationImmunity);
	DOREPLIFETIME(AFGCharacterPlayer, mInRadioactiveZone);
	DOREPLIFETIME(AFGCharacterPlayer, mReplicatedIsSliding);
	DOREPLIFETIME(AFGCharacterPlayer, mIncomingAttackers);
}
void AFGCharacterPlayer::PostActorCreated(){ Super::PostActorCreated(); }
void AFGCharacterPlayer::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGCharacterPlayer::BeginPlay(){ }
void AFGCharacterPlayer::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGCharacterPlayer::Tick(float deltaTime){ }
void AFGCharacterPlayer::Destroyed(){ }
bool AFGCharacterPlayer::IsLocallyControlled() const{ return bool(); }
void AFGCharacterPlayer::PossessedBy(AController* newController){ }
void AFGCharacterPlayer::UnPossessed(){ }
void AFGCharacterPlayer::OnRep_Controller(){ }
void AFGCharacterPlayer::AddControllerPitchInput(float Val){ }
void AFGCharacterPlayer::Jump(){ }
void AFGCharacterPlayer::OnJumped_Implementation(){ }
bool AFGCharacterPlayer::CanJumpInternal_Implementation() const{ return bool(); }
void AFGCharacterPlayer::OnStartCrouch(float HeightAdjust, float ScaledHeightAdjust){ }
void AFGCharacterPlayer::OnEndCrouch(float HeightAdjust, float ScaledHeightAdjust){ }
void AFGCharacterPlayer::Died(AActor* died){ }
const FFootstepEffect& AFGCharacterPlayer::GetFootstepEffect(const FHitResult& hitResult) const{ return *(new FFootstepEffect); }
void AFGCharacterPlayer::OnTakeDamage(AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ }
void AFGCharacterPlayer::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode){ }
void AFGCharacterPlayer::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGCharacterPlayer::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGCharacterPlayer::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGCharacterPlayer::IsUseable_Implementation() const{ return bool(); }
void AFGCharacterPlayer::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGCharacterPlayer::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGCharacterPlayer::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGCharacterPlayer::ReceiveRadiation_Implementation(float amount, float duration, FVector direction, TSubclassOf<  UFGDamageType > damageType){ }
void AFGCharacterPlayer::RegisterIncomingAttacker_Implementation( AFGEnemyController* forController){ }
void AFGCharacterPlayer::UnregisterAttacker_Implementation( AFGEnemyController* forController){ }
AActor* AFGCharacterPlayer::GetActor_Implementation(){ return nullptr; }
float AFGCharacterPlayer::GetEnemyTargetDesirability_Implementation( AFGEnemyController* forController){ return float(); }
bool AFGCharacterPlayer::ShouldAutoregisterAsTargetable_Implementation() const{ return bool(); }
UPrimitiveComponent* AFGCharacterPlayer::GetTargetComponent_Implementation(){ return nullptr; }
bool AFGCharacterPlayer::IsAlive_Implementation() const{ return bool(); }
FVector AFGCharacterPlayer::GetAttackLocation_Implementation() const{ return FVector(); }
bool AFGCharacterPlayer::ShouldSave_Implementation() const{ return bool(); }
void AFGCharacterPlayer::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGCharacterPlayer::AddAsRepresentation(){ return bool(); }
bool AFGCharacterPlayer::UpdateRepresentation(){ return bool(); }
bool AFGCharacterPlayer::RemoveAsRepresentation(){ return bool(); }
bool AFGCharacterPlayer::IsActorStatic(){ return bool(); }
FVector AFGCharacterPlayer::GetRealActorLocation(){ return FVector(); }
FRotator AFGCharacterPlayer::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGCharacterPlayer::GetActorRepresentationTexture(){ return nullptr; }
FText AFGCharacterPlayer::GetActorRepresentationText(){ return FText(); }
void AFGCharacterPlayer::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGCharacterPlayer::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGCharacterPlayer::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGCharacterPlayer::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGCharacterPlayer::GetActorShouldShowInCompass(){ return bool(); }
bool AFGCharacterPlayer::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGCharacterPlayer::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGCharacterPlayer::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGCharacterPlayer::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGCharacterPlayer::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
void AFGCharacterPlayer::OnPossessedSetup(){ }
void AFGCharacterPlayer::EquipEquipment(AFGEquipment* equipment){ }
void AFGCharacterPlayer::UnequipEquipment(AFGEquipment* equipment){ }
void AFGCharacterPlayer::SetOverrideEquipment(AFGEquipment* equipment){ }
void AFGCharacterPlayer::ClearOverrideEquipment(AFGEquipment* equipment){ }
TArray< AFGEquipment* > AFGCharacterPlayer::GetActiveEquipments() const{ return TArray<AFGEquipment*>(); }
TArray< class AFGEquipmentAttachment* > AFGCharacterPlayer::GetActiveAttachments() const{ return TArray<class AFGEquipmentAttachment*>(); }
ECrosshairState AFGCharacterPlayer::GetActiveCrosshairState_Implementation(){ return ECrosshairState(); }
UFGInventoryComponentEquipment* AFGCharacterPlayer::GetEquipmentSlot(EEquipmentSlot slot) const{ return nullptr; }
AFGEquipment* AFGCharacterPlayer::GetEquipmentInSlot(EEquipmentSlot slot) const{ return nullptr; }
FInventoryItem AFGCharacterPlayer::GetActiveEquipmentItem(EEquipmentSlot slot) const{ return FInventoryItem(); }
bool AFGCharacterPlayer::CanEquipBuildGun() const{ return bool(); }
bool AFGCharacterPlayer::CanEquipBuildGunForDismantle() const{ return bool(); }
bool AFGCharacterPlayer::CanEquipBuildGunForPaint() const{ return bool(); }
bool AFGCharacterPlayer::IsBuildGunEquipped() const{ return bool(); }
void AFGCharacterPlayer::ToggleBuildGun(){ }
void AFGCharacterPlayer::ToggleBuildGunPaint(){ }
void AFGCharacterPlayer::HotKeyRecipe(TSubclassOf<  UFGRecipe > recipe){ }
void AFGCharacterPlayer::HotKeyDismantle(){ }
void AFGCharacterPlayer::HotKeyPaint(TSubclassOf<  UFGCustomizationRecipe > customization){ }
USkeletalMeshComponent* AFGCharacterPlayer::GetMesh3P() const{ return nullptr; }
USkeletalMeshComponent* AFGCharacterPlayer::GetMainMesh() const{ return nullptr; }
void AFGCharacterPlayer::ToggleCameraMode(){ }
void AFGCharacterPlayer::Photo_SetAdvancedPhotoMode(bool enabled){ }
void AFGCharacterPlayer::Photo_ToggleAdvancedPhotoMode(){ }
void AFGCharacterPlayer::StartFocusAim_Implementation(){ }
void AFGCharacterPlayer::StopFocusAim_Implementation(){ }
void AFGCharacterPlayer::StartPressingJump_Implementation(){ }
void AFGCharacterPlayer::StopPressingJump_Implementation(){ }
void AFGCharacterPlayer::StartFreeRotate3P_Implementation(){ }
void AFGCharacterPlayer::StopFreeRotate3P_Implementation(){ }
void AFGCharacterPlayer::CameraZoomIn_Implementation(){ }
void AFGCharacterPlayer::CameraZoomOut_Implementation(){ }
void AFGCharacterPlayer::SetFirstPersonMode_Implementation(){ }
void AFGCharacterPlayer::SetThirdPersonMode_Implementation(){ }
void AFGCharacterPlayer::SetCameraMode(ECameraMode newCameraMode){ }
void AFGCharacterPlayer::UsePreferredCameraMode(){ }
bool AFGCharacterPlayer::IsFirstPerson() const{ return bool(); }
void AFGCharacterPlayer::SprintPressed(){ }
void AFGCharacterPlayer::SprintReleased(){ }
void AFGCharacterPlayer::CrouchPressed(){ }
void AFGCharacterPlayer::CrouchReleased(){ }
void AFGCharacterPlayer::TickCameraOffset(float dt){ }
void AFGCharacterPlayer::CycleHandEquipmentPressedUp(){ }
void AFGCharacterPlayer::CycleHandEquipmentPressedDown(){ }
void AFGCharacterPlayer::Server_CycleHandEquipmentPressed_Implementation(int32 dir){ }
bool AFGCharacterPlayer::Server_CycleHandEquipmentPressed_Validate(int32 dir){ return bool(); }
void AFGCharacterPlayer::DoCycleEquipment(int32 dir){ }
void AFGCharacterPlayer::StartDriving( AFGDriveablePawn* vehicle){ }
void AFGCharacterPlayer::StopDriving( AFGDriveablePawn* vehicle){ }
UFGGameUI* AFGCharacterPlayer::GetGameUI(){ return nullptr; }
void AFGCharacterPlayer::TrySpawnInitialGear(){ }
void AFGCharacterPlayer::SpawnInitialGear_Implementation(){ }
void AFGCharacterPlayer::OnPickUpItem(){ }
void AFGCharacterPlayer::PickUpItem( AFGItemPickup* itemPickup){ }
void AFGCharacterPlayer::SetPickupToCollect( AFGItemPickup* itemPickup){ }
void AFGCharacterPlayer::Server_ToggleSwitchControl_Implementation( AFGBuildableRailroadSwitchControl* switchControl){ }
bool AFGCharacterPlayer::Server_ToggleSwitchControl_Validate( AFGBuildableRailroadSwitchControl* switchControl){ return bool(); }
void AFGCharacterPlayer::TickDrownDamage(float delta){ }
void AFGCharacterPlayer::TickHealthGeneration(float delta){ }
UFGLadderComponent* AFGCharacterPlayer::GetCurrentLadderComponent(){ return nullptr; }
TSubclassOf< class UMatineeCameraShake > AFGCharacterPlayer::GetDesiredSprintHeadBobShake(){ return TSubclassOf<class UMatineeCameraShake>(); }
TSubclassOf< class UMatineeCameraShake > AFGCharacterPlayer::GetDesiredWalkHeadBobShake(){ return TSubclassOf<class UMatineeCameraShake>(); }
UFGCharacterMovementComponent* AFGCharacterPlayer::GetFGMovementComponent(){ return nullptr; }
void AFGCharacterPlayer::SetWantSprintBobbing(bool wantBobbing){ }
FVector AFGCharacterPlayer::GetInventoryDropLocation_Implementation(const  UFGInventoryComponent* component, FInventoryStack stack){ return FVector(); }
void AFGCharacterPlayer::AddRadiationImmunity(float toAdd){ }
void AFGCharacterPlayer::SetRadiationImmunity(float newImmunity){ }
void AFGCharacterPlayer::ClientCheatWalk_Implementation(){ }
void AFGCharacterPlayer::ClientCheatFly_Implementation(){ }
void AFGCharacterPlayer::CheatToggleGhostFly(){ }
void AFGCharacterPlayer::CheatToggleGhostFly(bool ghostModeActive){ }
bool AFGCharacterPlayer::CheatToggleGhostFlyIsActive(){ return bool(); }
bool AFGCharacterPlayer::CheatToggleFlyModeIsActive(){ return bool(); }
void AFGCharacterPlayer::CheatToggleFlyMode(){ }
void AFGCharacterPlayer::CheatTeleport(){ }
void AFGCharacterPlayer::OnSlideStart(){ }
void AFGCharacterPlayer::OnSlideEnd(){ }
void AFGCharacterPlayer::Multicast_PlayJumpEffects_Implementation(bool boostJump){ }
void AFGCharacterPlayer::Client_HyperTubeStart_Implementation(AActor* tubeStart, float startTime, float pipeVelocity, float pipeProgress){ }
bool AFGCharacterPlayer::Client_HyperTubeStart_Validate(AActor* tubeStart, float startTime, float pipeVelocity, float pipeProgress){ return bool(); }
void AFGCharacterPlayer::Client_HyperTubeEnd_Implementation(FVector point, FVector velocity, float startTime){ }
bool AFGCharacterPlayer::Client_HyperTubeEnd_Validate(FVector point, FVector velocity, float startTime){ return bool(); }
void AFGCharacterPlayer::ZiplineStart(AActor* ziplineActor, FVector actorForward){ }
void AFGCharacterPlayer::ZiplineEnd(FVector exitForce){ }
void AFGCharacterPlayer::Multicast_ZiplineStart_Implementation(AActor* ziplineActor, FVector actorForward){ }
bool AFGCharacterPlayer::Multicast_ZiplineStart_Validate(AActor* ziplineActor, FVector actorForward){ return bool(); }
void AFGCharacterPlayer::Multicast_ZiplineEnd_Implementation(FVector exitForce){ }
bool AFGCharacterPlayer::Multicast_ZiplineEnd_Validate(FVector exitForce){ return bool(); }
void AFGCharacterPlayer::PlayZiplineEffects(FVector inLocation){ }
void AFGCharacterPlayer::NetMulticast_CheatFly_Implementation(){ }
void AFGCharacterPlayer::SetupPlayerInputComponent( UInputComponent* InputComponent){ }
void AFGCharacterPlayer::OnInventorySlotsUnlocked(int32 newUnlockedSlots){ }
void AFGCharacterPlayer::OnArmsSlotsUnlocked(int32 newUnlockedSlots){ }
void AFGCharacterPlayer::CheckAndAddPositionToSafeList(UWorld * world, FVector currentPos){ }
float AFGCharacterPlayer::AdjustDamage(AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ return float(); }
void AFGCharacterPlayer::DoRagdoll_Internal(){ }
void AFGCharacterPlayer::SetMeshVisibility(bool isFirstPerson){ }
UAkAudioEvent* AFGCharacterPlayer::GetFootstepEvent(int32 footDown) const{ return nullptr; }
void AFGCharacterPlayer::OnDisabledInputGateChanged_Implementation(FDisabledInputGate newValue){ }
void AFGCharacterPlayer::SpawnDeathCrate(){ }
void AFGCharacterPlayer::SetupInventory(){ }
void AFGCharacterPlayer::OnItemAddedToInventory(TSubclassOf<UFGItemDescriptor> itemClass, int32 numAdded){ }
void AFGCharacterPlayer::AddDefaultInventoryItems(){ }
void AFGCharacterPlayer::ReEquipExistingEquipment(){ }
void AFGCharacterPlayer::UnEquipAllEquipment(){ }
void AFGCharacterPlayer::UpdateBestUsableActor(){ }
void AFGCharacterPlayer::OnUsePressed(){ }
void AFGCharacterPlayer::OnUseReleased(){ }
void AFGCharacterPlayer::OnUse(){ }
void AFGCharacterPlayer::OnUseStop(){ }
bool AFGCharacterPlayer::CanBePickedUp(const FHitResult& hitResult){ return bool(); }
void AFGCharacterPlayer::MoveForward(float Val){ }
void AFGCharacterPlayer::MoveRight(float Val){ }
void AFGCharacterPlayer::TurnAtRate(float Rate){ }
void AFGCharacterPlayer::LookUpAtRate(float Rate){ }
void AFGCharacterPlayer::SetBestUsableActor( AActor* newBestUsableActor){ }
float AFGCharacterPlayer::GetUseDistance(){ return float(); }
void AFGCharacterPlayer::OnReviveTimerComplete(){ }
float AFGCharacterPlayer::GetReviveProgress(){ return float(); }
void AFGCharacterPlayer::Client_Revived_Implementation(){ }
void AFGCharacterPlayer::Client_ReviveStarted_Implementation(){ }
void AFGCharacterPlayer::Client_ReviveEnded_Implementation(){ }
float AFGCharacterPlayer::GetPickupProgress(){ return float(); }
void AFGCharacterPlayer::StartReceivingRadiation(){ }
void AFGCharacterPlayer::StopReceivingRadiation(){ }
void AFGCharacterPlayer::TornOff(){ }
void AFGCharacterPlayer::DebugBuildablesInFrustum(){ }
void AFGCharacterPlayer::TriggerBestUsableActorDelegate(){ }
void AFGCharacterPlayer::UpdateHUDCrosshair(){ }
bool AFGCharacterPlayer::IsSliding() const{ return bool(); }
bool AFGCharacterPlayer::IsInPumpiMode(){ return bool(); }
AFGEquipment* AFGCharacterPlayer::SpawnEquipment(TSubclassOf< AFGEquipment > equipmentClass, AActor* owner){ return nullptr; }
AFGEquipmentAttachment* AFGCharacterPlayer::SpawnAttachmentForEquipment(AFGEquipment* equipment){ return nullptr; }
AFGEquipmentAttachment* AFGCharacterPlayer::SpawnSecondaryAttachmentForEquipment(AFGEquipment* equipment){ return nullptr; }
void AFGCharacterPlayer::UpdateHeadBob(){ }
void AFGCharacterPlayer::NotifyGameStatePlayerAdded(){ }
void AFGCharacterPlayer::UpdateGameUIRadiationStatus(){ }
void AFGCharacterPlayer::UpdateGameUIRadiationIntensity(){ }
int32 AFGCharacterPlayer::GetTotalPlayerInventorySlots() const{ return int32(); }
int32 AFGCharacterPlayer::GetTotalPlayerArmEquipmentSlots() const{ return int32(); }
void AFGCharacterPlayer::Server_EquipEquipment_Implementation(AFGEquipment* newEquipment){ }
bool AFGCharacterPlayer::Server_EquipEquipment_Validate(AFGEquipment* newEquipment){ return bool(); }
void AFGCharacterPlayer::Server_UnequipEquipment_Implementation(AFGEquipment* newEquipment){ }
bool AFGCharacterPlayer::Server_UnequipEquipment_Validate(AFGEquipment* newEquipment){ return bool(); }
void AFGCharacterPlayer::Server_RevivePlayer_Implementation(AFGCharacterPlayer* playerToRevive){ }
void AFGCharacterPlayer::Server_OnUse_Implementation(){ }
bool AFGCharacterPlayer::Server_OnUse_Validate(){ return bool(); }
void AFGCharacterPlayer::Server_OnUseReleased_Implementation(){ }
bool AFGCharacterPlayer::Server_OnUseReleased_Validate(){ return bool(); }
void AFGCharacterPlayer::Server_PickUpItem_Implementation( AFGItemPickup* itemPickup){ }
bool AFGCharacterPlayer::Server_PickUpItem_Validate( AFGItemPickup* itemPickup){ return bool(); }
void AFGCharacterPlayer::OnSlideStatusUpdated(){ }
void AFGCharacterPlayer::OnRep_ActiveEquipments(){ }
void AFGCharacterPlayer::OnRep_ActiveAttachments(){ }
void AFGCharacterPlayer::OnRep_DrivenVehicle(){ }
void AFGCharacterPlayer::OnRep_PickupCounter(){ }
void AFGCharacterPlayer::OnRep_InRadioactiveZone(){ }
void AFGCharacterPlayer::OnRep_RadiationIntensity(){ }
void AFGCharacterPlayer::OnRep_IsSliding(){ }
void AFGCharacterPlayer::MigrateNumSavedSlots(){ }
void AFGCharacterPlayer::CheckItemPickedUp(){ }
bool AFGCharacterPlayer::FilterInventoryClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGCharacterPlayer::InitializePreferredCameraMode(){ }
void AFGCharacterPlayer::DoUnSlide(){ }
void AFGCharacterPlayer::OnUserSettingsUpdated(){ }
const FName AFGCharacterPlayer::ArmsInvComponentName = FName();
const FName AFGCharacterPlayer::BackInvComponentName = FName();
FOnPersistentEquipmentSpawned AFGCharacterPlayer::OnPersistentEquipmentSpawned = FOnPersistentEquipmentSpawned();
FOnEquipmentEquipped AFGCharacterPlayer::OnEquipmentEquipped = FOnEquipmentEquipped();
FOnEquipmentUnequipped AFGCharacterPlayer::OnEquipmentUnequipped = FOnEquipmentUnequipped();
FOnFoliagePickupSpawned AFGCharacterPlayer::OnFoliagePickupSpawned = FOnFoliagePickupSpawned();
