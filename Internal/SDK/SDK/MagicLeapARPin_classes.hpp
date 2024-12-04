#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapARPin

#include "Basic.hpp"

#include "MagicLeapARPin_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0130 (0x0320 - 0x01F0)
class UMagicLeapARPinComponent final  : public USceneComponent
{
public:
	class FString                                 ObjectUID;                                         // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UserIndex;                                         // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapAutoPinType              AutoPinType;                                       // 0x0204(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldPinActor;                                   // 0x0205(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_123D[0x2];                                     // 0x0206(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UMagicLeapARPinSaveGame>    PinDataClass;                                      // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPersistentEntityPinned;                          // 0x0210(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPersistentEntityPinLost;                         // 0x0220(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                  PinnedCFUID;                                       // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        PinnedSceneComponent;                              // 0x0240(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                PinData;                                           // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_123E[0xD0];                                    // 0x0250(0x00D0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> Param_PinDataClass);
	bool GetPinnedPinID(struct FGuid* PinID);
	void PersistentEntityPinLost__DelegateSignature();
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	bool PinActor(class AActor* ActorToPin);
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	void UnPin();

	bool GetPinState(struct FMagicLeapARPinState* State) const;
	bool IsPinned() const;
	bool PinRestoredOrSynced() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinComponent">();
	}
	static class UMagicLeapARPinComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinComponent>();
	}
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapARPinFunctionLibrary final  : public UBlueprintFunctionLibrary
{
public:
	static void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate);
	static enum class EMagicLeapPassableWorldError CreateTracker();
	static enum class EMagicLeapPassableWorldError DestroyTracker();
	static bool GetARPinPositionAndOrientation(struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinID, struct FMagicLeapARPinState* State);
	static class FString GetARPinStateToString(struct FMagicLeapARPinState& State);
	static enum class EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<struct FGuid>* Pins);
	static enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid* PinID);
	static enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32* Count);
	static bool IsTrackerValid();
	static void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinFunctionLibrary">();
	}
	static class UMagicLeapARPinFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinFunctionLibrary>();
	}
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (0x0040 - 0x0028)
class UMagicLeapARPinSettings final  : public UObject
{
public:
	float                                         UpdateCheckFrequency;                              // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                   OnUpdatedEventTriggerDelta;                        // 0x002C(0x0010)(Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinSettings">();
	}
	static class UMagicLeapARPinSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinSettings>();
	}
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0078 (0x00A0 - 0x0028)
class UMagicLeapARPinSaveGame final  : public USaveGame
{
public:
	struct FGuid                                  PinnedID;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_124A[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ComponentWorldTransform;                           // 0x0040(0x0030)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             PinTransform;                                      // 0x0070(0x0030)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapARPinSaveGame">();
	}
	static class UMagicLeapARPinSaveGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapARPinSaveGame>();
	}
};

}

