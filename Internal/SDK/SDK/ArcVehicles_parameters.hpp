#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArcVehicles

#include "Basic.hpp"

#include "ArcVehicles_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ArcVehicles.ArcVehiclePawn.GetOwningVehicle
// 0x0008 (0x0008 - 0x0000)
struct ArcVehiclePawn_GetOwningVehicle final 
{
public:
	class AArcBaseVehicle*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehiclePawn.GetSeatConfig
// 0x0008 (0x0008 - 0x0000)
struct ArcVehiclePawn_GetSeatConfig final 
{
public:
	class UArcVehicleSeatConfig*                  ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehiclePawn.NotifyPlayerSeatChangeEvent
// 0x0000 (0x0000 - 0x0000)
struct ArcVehiclePawn_NotifyPlayerSeatChangeEvent
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArcVehicleSeatConfig*                  ToSeat;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArcVehicleSeatConfig*                  FromSeat;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EArcVehicleSeatChangeType          SeatChangeEvent;                                   // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehiclePlayerSeatComponent.BP_OnRep_StoredPlayerState
// 0x0008 (0x0008 - 0x0000)
struct ArcVehiclePlayerSeatComponent_BP_OnRep_StoredPlayerState final 
{
public:
	class APlayerState*                           InPreviousPlayerState;                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_SeatConfig
// 0x0010 (0x0010 - 0x0000)
struct ArcVehiclePlayerSeatComponent_OnRep_SeatConfig final 
{
public:
	struct FArcVehicleSeatReference               InPreviousSeatConfig;                              // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_StoredPlayerState
// 0x0008 (0x0008 - 0x0000)
struct ArcVehiclePlayerSeatComponent_OnRep_StoredPlayerState final 
{
public:
	class APlayerState*                           InPreviousPlayerState;                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnSeatChangeEvent
// 0x0000 (0x0000 - 0x0000)
struct ArcVehiclePlayerSeatComponent_OnSeatChangeEvent
{
public:
	enum class EArcVehicleSeatChangeType          SeatChangeType;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.GetAllSeats
// 0x0010 (0x0010 - 0x0000)
struct ArcBaseVehicle_GetAllSeats final 
{
public:
	TArray<class UArcVehicleSeatConfig*>          Seats;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.GetDriverSeat
// 0x0008 (0x0008 - 0x0000)
struct ArcBaseVehicle_GetDriverSeat final 
{
public:
	class UArcVehicleSeatConfig*                  ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.GetNearestExitTransform
// 0x0060 (0x0060 - 0x0000)
struct ArcBaseVehicle_GetNearestExitTransform final 
{
public:
	struct FTransform                             InputLocation;                                     // 0x0000(0x0030)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             ReturnValue;                                       // 0x0030(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.RequestEnterAnySeat
// 0x0008 (0x0008 - 0x0000)
struct ArcBaseVehicle_RequestEnterAnySeat final 
{
public:
	class APlayerState*                           InPlayerState;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.RequestEnterSeat
// 0x0010 (0x0010 - 0x0000)
struct ArcBaseVehicle_RequestEnterSeat final 
{
public:
	class APlayerState*                           InPlayerState;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RequestedSeatIndex;                                // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreRestrictions;                               // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FBF[0x3];                                      // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ArcVehicles.ArcBaseVehicle.RequestLeaveVehicle
// 0x0008 (0x0008 - 0x0000)
struct ArcBaseVehicle_RequestLeaveVehicle final 
{
public:
	class APlayerState*                           InPlayerState;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.SetupSeat
// 0x0008 (0x0008 - 0x0000)
struct ArcBaseVehicle_SetupSeat final 
{
public:
	class UArcVehicleSeatConfig*                  SeatConfig;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.GetSortedExitPoints
// 0x0040 (0x0040 - 0x0000)
struct ArcBaseVehicle_GetSortedExitPoints final 
{
public:
	struct FTransform                             InputLocation;                                     // 0x0000(0x0030)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     OutTransformArray;                                 // 0x0030(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcBaseVehicle.IsValidSeatIndex
// 0x0008 (0x0008 - 0x0000)
struct ArcBaseVehicle_IsValidSeatIndex final 
{
public:
	int32                                         InSeatIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC0[0x3];                                      // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleFromSeatConfig
// 0x0018 (0x0018 - 0x0000)
struct ArcVehicleBPFunctionLibrary_GetVehicleFromSeatConfig final 
{
public:
	struct FArcVehicleSeatReference               SeatRef;                                           // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class AArcBaseVehicle*                        ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleSeatConfigFromRef
// 0x0018 (0x0018 - 0x0000)
struct ArcVehicleBPFunctionLibrary_GetVehicleSeatConfigFromRef final 
{
public:
	struct FArcVehicleSeatReference               SeatRef;                                           // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UArcVehicleSeatConfig*                  ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleBPFunctionLibrary.IsSeatRefValid
// 0x0018 (0x0018 - 0x0000)
struct ArcVehicleBPFunctionLibrary_IsSeatRefValid final 
{
public:
	struct FArcVehicleSeatReference               SeatRef;                                           // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC1[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ArcVehicles.ArcVehicleSeatConfig.AttachPlayerToSeat
// 0x0008 (0x0008 - 0x0000)
struct ArcVehicleSeatConfig_AttachPlayerToSeat final 
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig.BP_AttachPlayerToSeat
// 0x0008 (0x0008 - 0x0000)
struct ArcVehicleSeatConfig_BP_AttachPlayerToSeat final 
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig.BP_UnAttachPlayerFromSeat
// 0x0008 (0x0008 - 0x0000)
struct ArcVehicleSeatConfig_BP_UnAttachPlayerFromSeat final 
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig.UnAttachPlayerFromSeat
// 0x0008 (0x0008 - 0x0000)
struct ArcVehicleSeatConfig_UnAttachPlayerFromSeat final 
{
public:
	class APlayerState*                           Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig.GetVehicleOwner
// 0x0008 (0x0008 - 0x0000)
struct ArcVehicleSeatConfig_GetVehicleOwner final 
{
public:
	class AArcBaseVehicle*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig.IsDriverSeat
// 0x0001 (0x0001 - 0x0000)
struct ArcVehicleSeatConfig_IsDriverSeat final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig.IsOpenSeat
// 0x0001 (0x0001 - 0x0000)
struct ArcVehicleSeatConfig_IsOpenSeat final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleSeatConfig_SeatPawn.OnRep_SeatPawn
// 0x0008 (0x0008 - 0x0000)
struct ArcVehicleSeatConfig_SeatPawn_OnRep_SeatPawn final 
{
public:
	class AArcVehiclePawn*                        OldSeatPawn;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ArcVehicles.ArcVehicleTurretMovementComp.Server_ServerMove
// 0x000C (0x000C - 0x0000)
struct ArcVehicleTurretMovementComp_Server_ServerMove final 
{
public:
	struct FRotator                               FullRotation;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

