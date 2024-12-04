#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuGM

#include "Basic.hpp"

#include "BP_MenuGM_classes.hpp"
#include "BP_MenuGM_parameters.hpp"


namespace SDK
{

// Function BP_MenuGM.BP_MenuGM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuGM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGM_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuGM.BP_MenuGM_C.ExecuteUbergraph_BP_MenuGM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*                    CallFunc_GetGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTBGameInstance*                  K2Node_DynamicCast_AsTBGame_Instance                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MenuGM_C::ExecuteUbergraph_BP_MenuGM(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTBGameInstance* K2Node_DynamicCast_AsTBGame_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuGM_C", "ExecuteUbergraph_BP_MenuGM");

	Params::BP_MenuGM_C_ExecuteUbergraph_BP_MenuGM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTBGame_Instance = K2Node_DynamicCast_AsTBGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

