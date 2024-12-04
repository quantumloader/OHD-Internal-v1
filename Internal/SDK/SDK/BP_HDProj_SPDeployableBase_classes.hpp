#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDProj_SPDeployableBase

#include "Basic.hpp"

#include "HDMain_classes.hpp"
#include "DonkehFramework_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C
// 0x00A0 (0x0430 - 0x0390)
class ABP_HDProj_SPDeployableBase_C : public AHDProj_SpawnPointDeployable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       HitDetectionSphere;                                // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SpawnSphere;                                       // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ProjectileCollision;                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDFPOIComponent*                        POI;                                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlySquadMembersCanSpawn;                         // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159E[0x3];                                     // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PostTriggerLifeSpan;                               // 0x03BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlacementRestrictionDistance;                      // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpawnable;                                        // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159F[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSpawnPointActivationChanged;                     // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVector>                        SpawnPointLocOffsets;                              // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSpawnPointDef>                 GeneratedSpawnPoints;                              // 0x03E8(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIgnoreFriendlyFire;                               // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A0[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Health;                                            // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisableWhenOverrun;                               // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A1[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfEnemiesToDisable;                          // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyWhenOverrun;                               // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A2[0x3];                                     // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfEnemiesToDestroy;                          // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentNumberOfEnemies;                            // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A3[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHDSquadState*                          OwnerSquadState;                                   // 0x0418(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyWhenSquadDisbands;                         // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOnlyOnePerSquad;                                  // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15A4[0x2];                                     // 0x0422(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxNumberOfInstances;                              // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnemyTolerance_Radius;                             // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnemyTolerance_MaxNumberOfChars;                   // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSpawnPointActivationChanged__DelegateSignature(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled);
	void ExecuteUbergraph_BP_HDProj_SPDeployableBase(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ADFBaseCharacter* K2Node_DynamicCast_AsDFBase_Character, bool K2Node_DynamicCast_bSuccess, class ADFBaseCharacter* K2Node_DynamicCast_AsDFBase_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsEnemyChar_bEnemyChar, float CallFunc_GetGameTimeSinceCreation_ReturnValue, uint8 CallFunc_GetTeamNum_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, uint8 K2Node_CustomEvent_LastTeamNum, uint8 K2Node_CustomEvent_NewTeamNum, struct FHitResult& K2Node_Event_ImpactHitResult, int32 Temp_int_Variable, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class ADFBaseProjectile* K2Node_DynamicCast_AsDFBase_Projectile, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, struct FTransform& Temp_struct_Variable, class UDFPOIComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_HasServerAuthority_bAuthority, class AHDSquadState* K2Node_CustomEvent_Squad, class AHDPlayerState* K2Node_CustomEvent_MemberPS, int32 CallFunc_GetNumSquadMembers_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess_3);
	void MemberPreUnregisteredFromOwnerSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OverlappingPawnTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
	void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceivePayloadActivated(struct FHitResult& ImpactHitResult);
	void HasServerAuthority(bool* bAuthority, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsEnemyChar(class ADFBaseCharacter* Char, bool* bEnemyChar, bool CallFunc_IsAlive_ReturnValue, uint8 CallFunc_GetTeamNum_ReturnValue, uint8 CallFunc_GetTeamNum_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsSpawnable(bool* bSpawnPointEnabled);
	void SetIsSpawnable(bool bNewEnabled, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void CheckForEnemyChars(bool bFoundEnemyChar, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, class ADFBaseCharacter* K2Node_DynamicCast_AsDFBase_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEnemyChar_bEnemyChar, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GenerateSpawnPointList(int32 Temp_int_Variable, const struct FSpawnPointDef& CallFunc_GetSpawnPoint_SpawnPoint, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable_1, const struct FSpawnPointDef& CallFunc_GetSpawnPoint_SpawnPoint_1, int32 CallFunc_Array_Add_ReturnValue, const struct FSpawnPointDef& K2Node_MakeStruct_SpawnPointDef, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void HandleTakeDamageFromProjectile(class ADFBaseProjectile* InProjectile, float InDamage, class ADFBaseWeapon* CallFunc_GetOwningWeapon_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADFBaseCharacter* CallFunc_GetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsEnemyChar_bEnemyChar, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void CheckEnemyOverrun(bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitDeployable(bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class ABP_HDProj_SPDeployableBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_HDProj_SPDeployableBase_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1);

	void GetSpawnPoint(bool bMeshZOffset, int32 SpawnPointIdx, struct FSpawnPointDef* SpawnPoint, bool Temp_bool_Variable, struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetActorTransformOffsetByMeshZBounds_OffsetActorWorldXForm, const struct FTransform& K2Node_Select_Default, const struct FTransform& CallFunc_GetTransformOffsetBySpawnIndex_NewTransform, const struct FSpawnPointDef& K2Node_MakeStruct_SpawnPointDef) const;
	void AreSpawnPointsEqual(struct FSpawnPointDef& SpawnPointOne, struct FSpawnPointDef& SpawnPointTwo, bool* bEqual, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_TransformTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) const;
	void GetActorTransformOffsetByMeshZBounds(struct FTransform* OffsetActorWorldXForm, struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue) const;
	void GetTransformOffsetBySpawnIndex(int32& SpawnIdx, const struct FTransform& Transform, struct FTransform* NewTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue) const;
	void CanPlayerSpawnHere(class AController* InPlayer, bool* bPlayerCanSpawn, class AHDPlayerState* K2Node_DynamicCast_AsHDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsRegisteredSquadMember_ReturnValue) const;
	int32 GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints, const TArray<struct FSpawnPointDef>& SpawnPointArr, int32 CallFunc_Array_Length_ReturnValue) const;
	bool FindSpawnPointBP(int32 SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint, bool CallFunc_Array_IsValidIndex_ReturnValue) const;
	bool CanSpawnActorFromSpawnPointBP(struct FSpawnPointDef& SpawnPoint, TSubclassOf<class AActor> SpawnActorClass) const;
	bool CanRestartPlayerFromSpawnPointBP(struct FSpawnPointDef& SpawnPoint, class AController* Player, TSubclassOf<class APawn> PlayerPawnClass, bool bSameTeam, bool bFoundSpawnPoint, bool CallFunc_CanPlayerSpawnHere_bPlayerCanSpawn, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_AreSpawnPointsEqual_bEqual, uint8 CallFunc_GetTeamNum_ReturnValue, uint8 CallFunc_GetTeamNum_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_GetTeamNum_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) const;
	bool GetSpawnPointCollisionHandlingOverrideBP(struct FSpawnPointDef& SpawnPoint, enum class ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_HDProj_SPDeployableBase_C">();
	}
	static class ABP_HDProj_SPDeployableBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HDProj_SPDeployableBase_C>();
	}
};

}
