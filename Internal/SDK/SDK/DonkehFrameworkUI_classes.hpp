#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonkehFrameworkUI

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DonkehFrameworkUI_structs.hpp"


namespace SDK
{

// Class DonkehFrameworkUI.DFBaseMenu
// 0x0008 (0x0238 - 0x0230)
class UDFBaseMenu : public UUserWidget
{
public:
	uint8                                         bMenuConstructedInDesigner : 1;                    // 0x0230(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bMenuPopped : 1;                                   // 0x0230(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bFlushPlayerInputUponConstruction : 1;             // 0x0230(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))

public:
	void ReceiveOnMenuCovered();
	void ReceiveOnMenuPop();
	void ReceiveOnMenuPush();
	void ReceiveOnMenuUncovered();
	void RemoveFromMenuStack();

	bool IsTopOfMenuStack() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFBaseMenu">();
	}
	static class UDFBaseMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFBaseMenu>();
	}
};

// Class DonkehFrameworkUI.DFContextualWidgetBase
// 0x0010 (0x0240 - 0x0230)
class UDFContextualWidgetBase : public UUserWidget
{
public:
	TArray<class UDFContextualWidgetPrerequisiteBase*> Prerequisites;                                     // 0x0230(0x0010)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void PrerequisiteNotMet(class UDFContextualWidgetPrerequisiteBase* FailedPrereq);
	void PrerequisitesMet();
	bool TestPrerequisites(bool bInvokeEvents);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFContextualWidgetBase">();
	}
	static class UDFContextualWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFContextualWidgetBase>();
	}
};

// Class DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase
// 0x0008 (0x0030 - 0x0028)
class UDFContextualWidgetPrerequisiteBase : public UObject
{
public:
	uint8                                         bForceSuccess : 1;                                 // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))

public:
	class UDFContextualWidgetBase* GetWidgetOuter() const;
	bool SatisfiesPrerequisite() const;
	bool TestPrerequisite() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFContextualWidgetPrerequisiteBase">();
	}
	static class UDFContextualWidgetPrerequisiteBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFContextualWidgetPrerequisiteBase>();
	}
};

// Class DonkehFrameworkUI.DFGameDialogDescriptor
// 0x0040 (0x0068 - 0x0028)
class UDFGameDialogDescriptor final  : public UObject
{
public:
	class FText                                   Header;                                            // 0x0028(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   Body;                                              // 0x0040(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDFConfirmationDialogAction>    ButtonActions;                                     // 0x0058(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFGameDialogDescriptor">();
	}
	static class UDFGameDialogDescriptor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFGameDialogDescriptor>();
	}
};

// Class DonkehFrameworkUI.DFGameDialog
// 0x0000 (0x0238 - 0x0238)
class UDFGameDialog : public UDFBaseMenu
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFGameDialog">();
	}
	static class UDFGameDialog* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFGameDialog>();
	}
};

// Class DonkehFrameworkUI.DFMenuManager
// 0x0030 (0x0058 - 0x0028)
class UDFMenuManager final  : public UObject
{
public:
	uint8                                         Pad_E62[0x8];                                      // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMenuStackEntry>                MenuStack;                                         // 0x0030(0x0010)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                         MenuManagerClassName;                              // 0x0040(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ActivateMenu(class UDFBaseMenu* MenuToAdd, enum class EMenuActivationMode ActivationMode, bool bShowMouseCursor, bool bUIOnlyInput);
	void ClearMenuStack();
	void PopMenu();
	void RemoveMenu(class UDFBaseMenu* MenuToRemove);

	class UDFBaseMenu* Top() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFMenuManager">();
	}
	static class UDFMenuManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFMenuManager>();
	}
};

// Class DonkehFrameworkUI.DFMenuManagerBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UDFMenuManagerBlueprintFunctions final  : public UBlueprintFunctionLibrary
{
public:
	static class UDFBaseMenu* CreateAndActivate(class UObject* WorldContextObject, TSubclassOf<class UDFBaseMenu> MenuWidgetType, class APlayerController* OwningPlayer, enum class EMenuActivationMode ActivationMode, bool bShowMouseCursor, bool bUIOnlyInput);
	static class UDFMenuManager* GetMenuManager(class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFMenuManagerBlueprintFunctions">();
	}
	static class UDFMenuManagerBlueprintFunctions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFMenuManagerBlueprintFunctions>();
	}
};

// Class DonkehFrameworkUI.DFMinimap
// 0x0068 (0x0298 - 0x0230)
class UDFMinimap : public UUserWidget
{
public:
	TArray<class UDFPOIWidget*>                   MapPOIs;                                           // 0x0230(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E65[0x18];                                     // 0x0240(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CurrentMapPos;                                     // 0x0258(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         CurrentZoom;                                       // 0x0260(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MaxZoom;                                           // 0x0264(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MapLength;                                         // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                MapOffset;                                         // 0x026C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                             POIDataTable;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                           OuterCanvas;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                           MapCanvas;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                 MapImg;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UDFPOIWidget* AddNewPOI(class AActor* POIActor);
	int32 ClearPOIs();
	bool FindPOIByActor(class AActor* POIActor, class UDFPOIWidget** OutFoundPOI);
	void OnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
	void ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
	bool RemovePOI(class UDFPOIWidget* POIToRemove);
	bool RemovePOIAt(int32 Index);
	bool RemovePOIByActor(class AActor* POIActorToRemove);
	bool RemovePOIByActorClass(TSubclassOf<class AActor>& POIActorClass);
	void SetMapDirty();
	void UpdateMapPos(struct FVector2D& NewMapPos);
	void UpdateZoomValue(float NewZoomValue);

	bool ConvertMapLocationToLocalWidgetLocation(const struct FVector2D& MapLocation, struct FVector2D* WidgetLocation) const;
	bool DeprojectMapLocationToWorld(const struct FVector2D& MapLocation, struct FVector* WorldLocation) const;
	struct FVector2D GetMapSizeAbsolute() const;
	struct FVector2D GetMapSizeLocal() const;
	class UDFPOIWidget* GetPOIAt(int32 Index) const;
	int32 GetPOICount() const;
	int32 GetPOIIndex(class UDFPOIWidget* POI) const;
	bool HasAnyPOIs() const;
	bool HasPOI(class UDFPOIWidget* POI) const;
	bool ProjectWorldLocationToMap(const struct FVector& WorldLocation, struct FVector2D* MapLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFMinimap">();
	}
	static class UDFMinimap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFMinimap>();
	}
};

// Class DonkehFrameworkUI.DFPOIComponent
// 0x0018 (0x00C8 - 0x00B0)
class UDFPOIComponent final  : public UActorComponent
{
public:
	uint8                                         Pad_E72[0x14];                                     // 0x00B0(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bAutoRegisterPOI : 1;                              // 0x00C4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))

public:
	void OnMinimapLateInit(class UDFMinimap* NewMinimap);
	void RegisterPOI(class UDFMinimap* MinimapWidget);
	void UnregisterPOI();

	class UDFMinimap* GetMinimap() const;
	class UDFPOIWidget* GetPOIWidget() const;
	bool IsPOIRegistered() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFPOIComponent">();
	}
	static class UDFPOIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFPOIComponent>();
	}
};

// Class DonkehFrameworkUI.DFPOIWidget
// 0x0170 (0x03A0 - 0x0230)
class UDFPOIWidget : public UUserWidget
{
public:
	uint8                                         Pad_E73[0x10];                                     // 0x0230(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 POIActor;                                          // 0x0240(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMinimapPOITableRow                    POIActorData;                                      // 0x0248(0x0130)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E74[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectionStateChanged;                           // 0x0380(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         bSelected : 1;                                     // 0x0390(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_E75[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNamedSlot*                             IconSlot;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DeselectPOI();
	void InitPOI(class UDFMinimap* OwningMapWidget, class AActor* ActorToTrack, struct FMinimapPOITableRow* ActorPOIData);
	void OnOwningMapDirty();
	void OnPOIActorEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void ReceiveOnPOIActorEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void ReceivePOIDeselected();
	void ReceivePOIInitialized();
	void ReceivePOISelected();
	void SelectPOI();
	void SetPOISelectionState(bool bNewSelected);
	void UpdatePosition();
	void UpdateRotation();

	bool CanSelect() const;
	struct FSlateBrush GetDefaultIconBrush() const;
	bool HasFixedRotation() const;
	bool IsDynamic() const;
	bool IsInitialized() const;
	bool IsPOIActorValid() const;
	bool IsSelectable() const;
	bool ReceiveCanSelect() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFPOIWidget">();
	}
	static class UDFPOIWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFPOIWidget>();
	}
};

// Class DonkehFrameworkUI.DFUIMessagingSubsystem
// 0x0068 (0x0098 - 0x0030)
class UDFUIMessagingSubsystem final  : public ULocalPlayerSubsystem
{
public:
	class UDFGameDialog*                          TopmostDialog;                                     // 0x0030(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDFGameDialog>              ConfirmationDialogClassPtr;                        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDFGameDialog>              ErrorDialogClassPtr;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UClass>                   ConfirmationDialogClass;                           // 0x0048(0x0028)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UClass>                   ErrorDialogClass;                                  // 0x0070(0x0028)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFUIMessagingSubsystem">();
	}
	static class UDFUIMessagingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFUIMessagingSubsystem>();
	}
};

// Class DonkehFrameworkUI.POIWidgetSlotInterface
// 0x0000 (0x0028 - 0x0028)
class IPOIWidgetSlotInterface final  : public IInterface
{
public:
	void SetIconBrush(struct FSlateBrush& NewIconBrush);

	struct FSlateBrush GetIconBrush() const;
	class UNamedSlot* GetIconSlot() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"POIWidgetSlotInterface">();
	}
	static class IPOIWidgetSlotInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPOIWidgetSlotInterface>();
	}
};

}
