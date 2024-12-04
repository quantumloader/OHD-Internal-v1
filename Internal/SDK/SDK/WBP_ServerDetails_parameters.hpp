#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HDMain_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerDetails.WBP_ServerDetails_C.ExecuteUbergraph_WBP_ServerDetails
// 0x0004 (0x0004 - 0x0000)
struct WBP_ServerDetails_C_ExecuteUbergraph_WBP_ServerDetails final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ServerDetails.WBP_ServerDetails_C.SetupServerDetails
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_ServerDetails_C_SetupServerDetails final 
{
public:
	struct FHDServerInfo                          ServerInfo;                                        // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerData
// 0x01E0 (0x01E0 - 0x0000)
struct WBP_ServerDetails_C_UpdateServerData final 
{
public:
	struct FHDServerInfo                          ServerInfo;                                        // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_GetServerIpPort_ReturnValue;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1726[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0108(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0148(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0160(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0178(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B8(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C8(0x0018)()
};

// Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerMetaData
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_ServerDetails_C_UpdateServerMetaData final 
{
public:
	struct FHDServerInfo                          ServerInfo;                                        // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_ToUpper_ReturnValue;                      // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
};

}

