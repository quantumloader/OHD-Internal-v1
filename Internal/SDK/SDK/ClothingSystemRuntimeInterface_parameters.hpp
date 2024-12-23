#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// 0x000C (0x000C - 0x0000)
struct ClothingSimulationInteractor_EnableGravityOverride final 
{
public:
	struct FVector                                InVector;                                          // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_SetAnimDriveSpringStiffness final 
{
public:
	float                                         InStiffness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

