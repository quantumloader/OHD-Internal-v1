#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HDCoreUGC

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum HDCoreUGC.EHDCoreUGCTargetState
// NumValues: 0x0005
enum class EHDCoreUGCTargetState : uint8
{
	Installed                                = 0,
	Registered                               = 1,
	Loaded                                   = 2,
	Active                                   = 3,
	EHDCoreUGCTargetState_MAX                = 4,
};

// ScriptStruct HDCoreUGC.UGCPrimaryAssetSearchInfo
// 0x0018 (0x0018 - 0x0000)
struct FUGCPrimaryAssetSearchInfo final 
{
public:
	struct FPrimaryAssetType                      AssetType;                                         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Directory;                                         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct HDCoreUGC.HDCoreUGCPluginStateMachineProperties
// 0x00F8 (0x00F8 - 0x0000)
struct FHDCoreUGCPluginStateMachineProperties final 
{
public:
	uint8                                         Pad_FA5[0x90];                                     // 0x0000(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	class UHDCoreUGCData*                         UGCData;                                           // 0x0090(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FA6[0x60];                                     // 0x0098(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

