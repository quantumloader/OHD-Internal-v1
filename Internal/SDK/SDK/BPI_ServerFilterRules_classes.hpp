#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ServerFilterRules

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_ServerFilterRules.BPI_ServerFilterRules_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_ServerFilterRules_C final  : public IInterface
{
public:
	void GetFilterRules(bool bActiveOnly, TMap<class UClass*, struct FHDFilterRuleParams>* FilterRules) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BPI_ServerFilterRules_C">();
	}
	static class IBPI_ServerFilterRules_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_ServerFilterRules_C>();
	}
};

}

