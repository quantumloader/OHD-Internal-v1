#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuBackground_Static

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuBackground_Static.WBP_MenuBackground_Static_C
// 0x0010 (0x0240 - 0x0230)
class UWBP_MenuBackground_Static_C final  : public UUserWidget
{
public:
	class UBackgroundBlur*                        BgBlur;                                            // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgImg;                                             // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_MenuBackground_Static_C">();
	}
	static class UWBP_MenuBackground_Static_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuBackground_Static_C>();
	}
};

}

