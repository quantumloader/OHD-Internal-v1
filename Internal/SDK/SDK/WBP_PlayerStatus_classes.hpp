#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerStatus

#include "Basic.hpp"

#include "HDMain_structs.hpp"
#include "HDMain_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerStatus.WBP_PlayerStatus_C
// 0x0058 (0x02B0 - 0x0258)
class UWBP_PlayerStatus_C final  : public UHDUIUWPlayerStatus
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EffectChangeUIAnim;                                // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StanceChangeUIAnim;                                // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AllStaminaFullUIAnim;                              // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SprintInputUIAnim;                                 // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AmmoResupplyFXIcon;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         EffectStack;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MobilityStatusBar_C*               JumpStaminaBar;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MedicHealFXIcon;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MobilityStatusBar_C*               SprintStaminaBar;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StanceIndicator_C*                 StanceIndicator;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PlayerStatus(int32 EntryPoint, class APawn* K2Node_Event_VictimPawn, class AController* K2Node_Event_VictimController, float K2Node_Event_KillingDamage, struct FDamageEvent& K2Node_Event_DamageEvent, class APawn* K2Node_Event_InstigatingPawn, class AActor* K2Node_Event_DamageCauser, float Temp_float_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_Event_NewValueNorm_2, float K2Node_Event_OldValueNorm_2, bool K2Node_Event_bInitial_4, float K2Node_Event_NewValueNorm_1, float K2Node_Event_OldValueNorm_1, bool K2Node_Event_bInitial_3, float K2Node_Event_NewValueNorm, float K2Node_Event_OldValueNorm, bool K2Node_Event_bInitial_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, float K2Node_Event_SprintValueNorm, float K2Node_Event_JumpValueNorm, bool K2Node_Event_bInitial_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, enum class EHDUICharacterStanceState K2Node_Event_NewState, enum class EHDUICharacterStanceState K2Node_Event_OldState, bool K2Node_Event_bInitial, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EUMGSequencePlayMode K2Node_Select_Default_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_CustomEvent_EffectIndicatorWidget_1, class UWidget* K2Node_CustomEvent_EffectIndicatorWidget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void OwnerDeactivatePlayerEffect(class UWidget* EffectIndicatorWidget);
	void OwnerActivatePlayerEffect(class UWidget* EffectIndicatorWidget);
	void Construct();
	void OwnerSetStanceState(enum class EHDUICharacterStanceState NewState, enum class EHDUICharacterStanceState OldState, bool bInitial);
	void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
	void OwnerEndSprint();
	void OwnerStartSprint();
	void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
	void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
	void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
	void SetAmmoResupplyEffectVisibility(bool bVisible);
	void SetMedicHealingEffectVisibility(bool bVisible);
	void SetPlayerEffectVisibility(class UWidget* EffectWidget, bool bVisible, bool bVisibilityDirty, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_PlayerStatus_C">();
	}
	static class UWBP_PlayerStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerStatus_C>();
	}
};

}
