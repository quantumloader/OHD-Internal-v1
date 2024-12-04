#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuBackground_Movie

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuBackground_Movie.WBP_MenuBackground_Movie_C
// 0x00C0 (0x02F0 - 0x0230)
class UWBP_MenuBackground_Movie_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BgFilterImg;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgMovieImg;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                           MoviePlayer;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlaylist*                         MoviePlaylist;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            FilterImgBrush;                                    // 0x0258(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                           FilterImgColor;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MenuBackground_Movie(int32 EntryPoint, bool CallFunc_OpenPlaylist_ReturnValue, bool K2Node_Event_IsDesignTime);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_MenuBackground_Movie_C">();
	}
	static class UWBP_MenuBackground_Movie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuBackground_Movie_C>();
	}
};

}

