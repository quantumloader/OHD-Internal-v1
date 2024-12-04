#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ServerFilterRules

#include "Basic.hpp"

#include "HDMain_structs.hpp"


namespace SDK::Params
{

// Function BPI_ServerFilterRules.BPI_ServerFilterRules_C.GetFilterRules
// 0x0058 (0x0058 - 0x0000)
struct BPI_ServerFilterRules_C_GetFilterRules final 
{
public:
	bool                                          bActiveOnly;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15EF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FHDFilterRuleParams> FilterRules;                                       // 0x0008(0x0050)(Parm, OutParm)
};

}

