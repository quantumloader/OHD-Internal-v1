#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDContextualWidgetBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.ExecuteUbergraph_WBP_HDContextualWidgetBase
// 0x0010 (0x0010 - 0x0000)
struct WBP_HDContextualWidgetBase_C_ExecuteUbergraph_WBP_HDContextualWidgetBase final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BAF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDFContextualWidgetPrerequisiteBase* K2Node_Event_FailedPrereq;                         // 0x0008(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisiteNotMet
// 0x0008 (0x0008 - 0x0000)
struct WBP_HDContextualWidgetBase_C_PrerequisiteNotMet final  : public DFContextualWidgetBase_PrerequisiteNotMet
{
public:
	const class UDFContextualWidgetPrerequisiteBase* FailedPrereq;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

