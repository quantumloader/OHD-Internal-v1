#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ViewPunchRecoilHandler

#include "Basic.hpp"

#include "DonkehFramework_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C
// 0x0050 (0x0078 - 0x0028)
class UBP_ViewPunchRecoilHandler_C final  : public UDFGunRecoilHandler
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CurrentCofAngleDegrees;                            // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         ConeOfFireAngleGrowthPerShotDegrees;               // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxConeOfFireAngleDegrees;                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinConeOfFireAngleDegrees;                         // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConeOfFireDecayRate;                               // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DesiredCoF;                                        // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RecoilDirection;                                   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecoilPunchMagnitude;                              // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecoilCounter;                                     // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               InitialViewAngle;                                  // 0x0054(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	float                                         Recoil_DX;                                         // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Recoil_DY;                                         // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RecoilRestitutionTime;                             // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEasingFunc                        VerticalRecoilEasingMode;                          // 0x006C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEasingFunc                        HorizontalRecoilEasingMode;                        // 0x006D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165A[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RecoilDT;                                          // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ViewPunchRecoilHandler(int32 EntryPoint, class AController* CallFunc_GetController_Controller, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float K2Node_CustomEvent_DT_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_CustomEvent_DT, bool CallFunc_IsFiring_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ViewRotation, class AController* CallFunc_GetController_Controller_1, float CallFunc_Divide_FloatFloat_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class AHDPlayerCharacter* K2Node_DynamicCast_AsHDPlayer_Character, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Ease_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, class AController* CallFunc_GetController_Controller_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AHDPlayerCharacter* K2Node_DynamicCast_AsHDPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
	void OnWeaponStartFire();
	void OnWeaponStopFire();
	void ComputeRecoil(float DT);
	void ComputeConeOfFire(float DT);
	void OnTick(float DeltaTime);
	void ViewPunch();
	void OnWeaponFire();
	struct FVector GetConeOfFireOffset(float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue);
	void GetControlRotation(struct FRotator* ViewRotation, class AController* CallFunc_GetController_Controller, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetController(class AController** Controller, class APawn* CallFunc_GetOwningPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_ViewPunchRecoilHandler_C">();
	}
	static class UBP_ViewPunchRecoilHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ViewPunchRecoilHandler_C>();
	}
};

}

