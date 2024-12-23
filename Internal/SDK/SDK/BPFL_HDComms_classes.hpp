#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HDComms

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_HDComms.BPFL_HDComms_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_HDComms_C final  : public UBlueprintFunctionLibrary
{
public:
	static void GetValidCommsComponentForPlayer(class APlayerController* Player, class UObject* __WorldContext, class UDFPlayerCommsComponent** PlayerCommsComp, class UDFCommWorldSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UDFPlayerCommsComponent* CallFunc_FindCommsComponentByPlayer_OutPlayerCommsComp, bool CallFunc_FindCommsComponentByPlayer_ReturnValue, class UDFPlayerCommsComponent* CallFunc_InitPlayerComms_ReturnValue);
	static void GetColorForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, struct FSlateColor* ChannelColor, const struct FSlateColor& CommandChannelGroupColor, const struct FSlateColor& SquadChannelGroupColor, const struct FSlateColor& TeamChannelColor, const struct FSlateColor& LocalChannelGroupColor, bool Temp_bool_Variable, class FName CallFunc_GetChannelName_ReturnValue, bool CallFunc_InstancesChannelWithGroup_ReturnValue, class FName K2Node_Select_Default, bool K2Node_SwitchName_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	static void SetupNewTeamChannel(class UDFCommChannel* CreatedChannel, class AHDTeamState* TeamToAssociate, class UObject* __WorldContext, class UHDTeamCommChannelState* K2Node_DynamicCast_AsHDTeam_Comm_Channel_State, bool K2Node_DynamicCast_bSuccess);
	static void SetupNewSquadChannel(class UDFCommChannel* CreatedChannel, class AHDSquadState* SquadToAssociate, class UObject* __WorldContext, class UHDSQCommChannelState* K2Node_DynamicCast_AsHDSQComm_Channel_State, bool K2Node_DynamicCast_bSuccess);
	static void GetTextChatIconForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, class UTexture2D** ChannelChatIcon, class UTexture2D* CommandChannelIcon, class UTexture2D* SquadChannelIcon, class UTexture2D* TeamChannelIcon, class UTexture2D* GlobalChannelIcon, bool Temp_bool_Variable, class FName CallFunc_GetChannelName_ReturnValue, bool CallFunc_InstancesChannelWithGroup_ReturnValue, class FName K2Node_Select_Default, bool K2Node_SwitchName_CmpSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BPFL_HDComms_C">();
	}
	static class UBPFL_HDComms_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_HDComms_C>();
	}
};

}

