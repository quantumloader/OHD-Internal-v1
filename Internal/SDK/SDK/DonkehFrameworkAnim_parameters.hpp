#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonkehFrameworkAnim

#include "Basic.hpp"

#include "DonkehFrameworkAnim_structs.hpp"


namespace SDK::Params
{

// Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.EqualProps
// 0x01F8 (0x01F8 - 0x0000)
struct AnimNotify_PlayFootstepFX_EqualProps final 
{
public:
	struct FFootstepFXSettings                    Props;                                             // 0x0000(0x00F8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFootstepFXSettings                    OtherProps;                                        // 0x00F8(0x00F8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x01F0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E82[0x7];                                      // 0x01F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.GetFootstepNotifyProps
// 0x00F8 (0x00F8 - 0x0000)
struct AnimNotify_PlayFootstepFX_GetFootstepNotifyProps final 
{
public:
	struct FFootstepFXSettings                    ReturnValue;                                       // 0x0000(0x00F8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.SetFootstepNotifyProps
// 0x00F8 (0x00F8 - 0x0000)
struct AnimNotify_PlayFootstepFX_SetFootstepNotifyProps final 
{
public:
	struct FFootstepFXSettings                    PropsToUse;                                        // 0x0000(0x00F8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateControllerOwnerRefs
// 0x0000 (0x0000 - 0x0000)
struct DFCharacterAnimInstance_BlueprintUpdateControllerOwnerRefs
{
public:
	class AController*                            NewC;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateEquippedWeaponRefs
// 0x0000 (0x0000 - 0x0000)
struct DFCharacterAnimInstance_BlueprintUpdateEquippedWeaponRefs
{
public:
	class ADFBaseItem*                            NewWeap;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdatePawnOwnerRefs
// 0x0000 (0x0000 - 0x0000)
struct DFCharacterAnimInstance_BlueprintUpdatePawnOwnerRefs
{
public:
	class APawn*                                  NewPawn;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFCharacterAnimInstance.EquippedWeaponChanged
// 0x0018 (0x0018 - 0x0000)
struct DFCharacterAnimInstance_EquippedWeaponChanged final 
{
public:
	class ADFBaseCharacter*                       Character;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADFBaseItem*                            NewEquippedWeap;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADFBaseItem*                            PrevEquippedWeap;                                  // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetControllerOwner
// 0x0008 (0x0008 - 0x0000)
struct DFCharacterAnimInstance_TryGetControllerOwner final 
{
public:
	class AController*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetOwnerWeapon
// 0x0008 (0x0008 - 0x0000)
struct DFCharacterAnimInstance_TryGetOwnerWeapon final 
{
public:
	class ADFBaseItem*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFWeaponAnimInstance.BlueprintUpdateWeaponOwnerRefs
// 0x0008 (0x0008 - 0x0000)
struct DFWeaponAnimInstance_BlueprintUpdateWeaponOwnerRefs final 
{
public:
	class ADFBaseWeapon*                          NewWeap;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DonkehFrameworkAnim.DFWeaponAnimInstance.TryGetWeaponOwner
// 0x0008 (0x0008 - 0x0000)
struct DFWeaponAnimInstance_TryGetWeaponOwner final 
{
public:
	class ADFBaseWeapon*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

