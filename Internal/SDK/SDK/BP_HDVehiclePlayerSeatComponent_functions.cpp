#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HDVehiclePlayerSeatComponent

#include "Basic.hpp"

#include "BP_HDVehiclePlayerSeatComponent_classes.hpp"
#include "BP_HDVehiclePlayerSeatComponent_parameters.hpp"


namespace SDK
{

// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                K2Node_DynamicCast_AsPlayer_Controller                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADFBaseCharacter*                 K2Node_DynamicCast_AsDFBase_Character                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADFBasePlayerCharacter*           K2Node_DynamicCast_AsDFBase_Player_Character           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                K2Node_CustomEvent_PC_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>   CallFunc_K2_GetComponentsByClass_ReturnValue           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           CallFunc_GetObjectClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                K2Node_CustomEvent_PC                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArcVehicleSeatConfig*            CallFunc_GetValidSeatConfig_SeatConfig                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArcBaseVehicle*                  CallFunc_GetVehicleOwner_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// struct FRotator                         CallFunc_K2_GetActorRotation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_BreakRotator_Roll                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Pitch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Yaw                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsLocalController_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_Add_FloatFloat_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArcVehicleSeatConfig*            CallFunc_GetVehicleSeatConfigFromRef_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArcVehicleSeatConfig*            CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArcBaseVehicle*                  CallFunc_GetVehicleOwner_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HDVehicleSeatAttachment_Player_C*K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsSeatRefValid_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArcVehicleSeatConfig*            CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_2     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>   CallFunc_K2_GetComponentsByClass_ReturnValue_1         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_HDVehicleSeatAttachment_Player_C*K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_1(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Array_Length_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArcVehicleSeatConfig*            CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_3     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsSeatRefValid_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_HDVehicleSeatAttachment_Player_C*K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_2(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArcVehicleSeatChangeType    K2Node_Event_SeatChangeType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasAuthority_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                            K2Node_CustomEvent_VictimPawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      K2Node_CustomEvent_VictimController                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_CustomEvent_KillingDamage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                     K2Node_CustomEvent_DamageEvent                         (ConstParm)
// class APawn*                            K2Node_CustomEvent_InstigatingPawn                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_CustomEvent_DamageCauser                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                K2Node_DynamicCast_AsPlayer_Controller_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADFBaseCharacter*                 K2Node_DynamicCast_AsDFBase_Character_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAuthority_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Array_Index_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           CallFunc_Array_Get_Item_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                K2Node_DynamicCast_AsPlayer_Controller_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_8                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HDVehiclePlayerSeatComponent_C::ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ADFBaseCharacter* K2Node_DynamicCast_AsDFBase_Character, bool K2Node_DynamicCast_bSuccess_1, class ADFBasePlayerCharacter* K2Node_DynamicCast_AsDFBase_Player_Character, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue_2, class APlayerController* K2Node_CustomEvent_PC_1, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class APlayerController* K2Node_CustomEvent_PC, bool CallFunc_IsValid_ReturnValue_1, class UArcVehicleSeatConfig* CallFunc_GetValidSeatConfig_SeatConfig, class AArcBaseVehicle* CallFunc_GetVehicleOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocalController_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UArcVehicleSeatConfig* CallFunc_GetVehicleSeatConfigFromRef_ReturnValue, class UArcVehicleSeatConfig* CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1, class AArcBaseVehicle* CallFunc_GetVehicleOwner_ReturnValue_1, class UBP_HDVehicleSeatAttachment_Player_C* K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsSeatRefValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class UArcVehicleSeatConfig* CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_2, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, class UBP_HDVehicleSeatAttachment_Player_C* K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, class UArcVehicleSeatConfig* CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_3, bool CallFunc_IsSeatRefValid_ReturnValue_1, class UBP_HDVehicleSeatAttachment_Player_C* K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_2, bool K2Node_DynamicCast_bSuccess_5, enum class EArcVehicleSeatChangeType K2Node_Event_SeatChangeType, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue, class APawn* K2Node_CustomEvent_VictimPawn, class AController* K2Node_CustomEvent_VictimController, float K2Node_CustomEvent_KillingDamage, struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class APawn* K2Node_CustomEvent_InstigatingPawn, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_IsValid_ReturnValue_3, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_5, class ADFBaseCharacter* K2Node_DynamicCast_AsDFBase_Character_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, class AActor* CallFunc_GetOwner_ReturnValue_6, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_8)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent");

	Params::BP_HDVehiclePlayerSeatComponent_C_ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDFBase_Character = K2Node_DynamicCast_AsDFBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsDFBase_Player_Character = K2Node_DynamicCast_AsDFBase_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_CustomEvent_PC_1 = K2Node_CustomEvent_PC_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = std::move(CallFunc_K2_GetComponentsByClass_ReturnValue);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_CustomEvent_PC = K2Node_CustomEvent_PC;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValidSeatConfig_SeatConfig = CallFunc_GetValidSeatConfig_SeatConfig;
	Parms.CallFunc_GetVehicleOwner_ReturnValue = CallFunc_GetVehicleOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = std::move(CallFunc_K2_GetActorRotation_ReturnValue);
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetVehicleSeatConfigFromRef_ReturnValue = CallFunc_GetVehicleSeatConfigFromRef_ReturnValue;
	Parms.CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1 = CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1;
	Parms.CallFunc_GetVehicleOwner_ReturnValue_1 = CallFunc_GetVehicleOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player = K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsSeatRefValid_ReturnValue = CallFunc_IsSeatRefValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_2 = CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = std::move(CallFunc_K2_GetComponentsByClass_ReturnValue_1);
	Parms.K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_1 = K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_3 = CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_3;
	Parms.CallFunc_IsSeatRefValid_ReturnValue_1 = CallFunc_IsSeatRefValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_2 = K2Node_DynamicCast_AsBP_HDVehicle_Seat_Attachment_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_SeatChangeType = K2Node_Event_SeatChangeType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_VictimPawn = K2Node_CustomEvent_VictimPawn;
	Parms.K2Node_CustomEvent_VictimController = K2Node_CustomEvent_VictimController;
	Parms.K2Node_CustomEvent_KillingDamage = K2Node_CustomEvent_KillingDamage;
	Parms.K2Node_CustomEvent_DamageEvent = std::move(K2Node_CustomEvent_DamageEvent);
	Parms.K2Node_CustomEvent_InstigatingPawn = K2Node_CustomEvent_InstigatingPawn;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPlayer_Controller_1 = K2Node_DynamicCast_AsPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsDFBase_Character_1 = K2Node_DynamicCast_AsDFBase_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsPlayer_Controller_2 = K2Node_DynamicCast_AsPlayer_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_K2_GetComponentsByClass_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentsByClass_ReturnValue);
	CallFunc_K2_GetComponentsByClass_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1);
}


// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.SetupPlayerCameraConstraints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDVehiclePlayerSeatComponent_C::SetupPlayerCameraConstraints(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "SetupPlayerCameraConstraints");

	Params::BP_HDVehiclePlayerSeatComponent_C_SetupPlayerCameraConstraints Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ResetPlayerCameraConstraints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDVehiclePlayerSeatComponent_C::ResetPlayerCameraConstraints(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "ResetPlayerCameraConstraints");

	Params::BP_HDVehiclePlayerSeatComponent_C_ResetPlayerCameraConstraints Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnSeatChangeEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EArcVehicleSeatChangeType    SeatChangeType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDVehiclePlayerSeatComponent_C::OnSeatChangeEvent(enum class EArcVehicleSeatChangeType SeatChangeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "OnSeatChangeEvent");

	Params::BP_HDVehiclePlayerSeatComponent_C_OnSeatChangeEvent Parms{};

	Parms.SeatChangeType = SeatChangeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            VictimPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      VictimController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   KillingDamage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                     DamageEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APawn*                            InstigatingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDVehiclePlayerSeatComponent_C::OnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "OnDeath");

	Params::BP_HDVehiclePlayerSeatComponent_C_OnDeath Parms{};

	Parms.VictimPawn = VictimPawn;
	Parms.VictimController = VictimController;
	Parms.KillingDamage = KillingDamage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.InstigatingPawn = InstigatingPawn;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HDVehiclePlayerSeatComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.GetValidSeatConfig
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UArcVehicleSeatConfig*            SeatConfig                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArcVehicleSeatConfig*            CallFunc_GetVehicleSeatConfigFromRef_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsSeatRefValid_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArcVehicleSeatConfig*            CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArcVehicleSeatConfig*            K2Node_Select_Default                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HDVehiclePlayerSeatComponent_C::GetValidSeatConfig(class UArcVehicleSeatConfig** SeatConfig, bool Temp_bool_Variable, class UArcVehicleSeatConfig* CallFunc_GetVehicleSeatConfigFromRef_ReturnValue, bool CallFunc_IsSeatRefValid_ReturnValue, class UArcVehicleSeatConfig* CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1, class UArcVehicleSeatConfig* K2Node_Select_Default) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HDVehiclePlayerSeatComponent_C", "GetValidSeatConfig");

	Params::BP_HDVehiclePlayerSeatComponent_C_GetValidSeatConfig Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetVehicleSeatConfigFromRef_ReturnValue = CallFunc_GetVehicleSeatConfigFromRef_ReturnValue;
	Parms.CallFunc_IsSeatRefValid_ReturnValue = CallFunc_IsSeatRefValid_ReturnValue;
	Parms.CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1 = CallFunc_GetVehicleSeatConfigFromRef_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (SeatConfig != nullptr)
		*SeatConfig = std::move(Parms.SeatConfig);
}

}

