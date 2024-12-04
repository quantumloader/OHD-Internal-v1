#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTags

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// 0x0028 (0x0028 - 0x0000)
struct BlueprintGameplayTagLibrary_AddGameplayTag final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0020(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// 0x0040 (0x0040 - 0x0000)
struct BlueprintGameplayTagLibrary_AppendGameplayTagContainers final 
{
public:
	struct FGameplayTagContainer                  InOutTagContainer;                                 // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  InTagContainer;                                    // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_BreakGameplayTagContainer final 
{
public:
	struct FGameplayTagContainer                  GameplayTagContainer;                              // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// 0x0070 (0x0070 - 0x0000)
struct BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      TagQuery;                                          // 0x0020(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1418[0x7];                                     // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// 0x0020 (0x0020 - 0x0000)
struct BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag final 
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0010(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1419[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// 0x0014 (0x0014 - 0x0000)
struct BlueprintGameplayTagLibrary_EqualEqual_GameplayTag final 
{
public:
	struct FGameplayTag                           A;                                                 // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           B;                                                 // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_141A[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer final 
{
public:
	struct FGameplayTagContainer                  A;                                                 // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  B;                                                 // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_141B[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// 0x0068 (0x0068 - 0x0000)
struct BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     ActorClass;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      GameplayTagQuery;                                  // 0x0010(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         OutActors;                                         // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// 0x0018 (0x0018 - 0x0000)
struct BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag final 
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// 0x0028 (0x0028 - 0x0000)
struct BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_141C[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// 0x0010 (0x0010 - 0x0000)
struct BlueprintGameplayTagLibrary_GetTagName final 
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// 0x0038 (0x0038 - 0x0000)
struct BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags final 
{
public:
	TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface;                             // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_141D[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_HasAllTags final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0040(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0041(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_141E[0x6];                                     // 0x0042(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_HasAnyTags final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0040(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0041(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_141F[0x6];                                     // 0x0042(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_HasTag final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0020(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1420[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// 0x000C (0x000C - 0x0000)
struct BlueprintGameplayTagLibrary_IsGameplayTagValid final 
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1421[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// 0x0050 (0x0050 - 0x0000)
struct BlueprintGameplayTagLibrary_IsTagQueryEmpty final 
{
public:
	struct FGameplayTagQuery                      TagQuery;                                          // 0x0000(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1422[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray final 
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0010(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// 0x0028 (0x0028 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag final 
{
public:
	struct FGameplayTag                           SingleTag;                                         // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// 0x0090 (0x0090 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeGameplayTagQuery final 
{
public:
	struct FGameplayTagQuery                      TagQuery;                                          // 0x0000(0x0048)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      ReturnValue;                                       // 0x0048(0x0048)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// 0x0010 (0x0010 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeLiteralGameplayTag final 
{
public:
	struct FGameplayTag                           Value;                                             // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// 0x0040 (0x0040 - 0x0000)
struct BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer final 
{
public:
	struct FGameplayTagContainer                  Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_MatchesAnyTags final 
{
public:
	struct FGameplayTag                           TagOne;                                            // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  OtherContainer;                                    // 0x0008(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1423[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// 0x0014 (0x0014 - 0x0000)
struct BlueprintGameplayTagLibrary_MatchesTag final 
{
public:
	struct FGameplayTag                           TagOne;                                            // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           TagTwo;                                            // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExactMatch;                                       // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1424[0x2];                                     // 0x0012(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// 0x0014 (0x0014 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_GameplayTag final 
{
public:
	struct FGameplayTag                           A;                                                 // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           B;                                                 // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1425[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// 0x0048 (0x0048 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer final 
{
public:
	struct FGameplayTagContainer                  A;                                                 // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  B;                                                 // 0x0020(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1426[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// 0x0038 (0x0038 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer final 
{
public:
	struct FGameplayTagContainer                  A;                                                 // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	class FString                                 B;                                                 // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1427[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// 0x0020 (0x0020 - 0x0000)
struct BlueprintGameplayTagLibrary_NotEqual_TagTag final 
{
public:
	struct FGameplayTag                           A;                                                 // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 B;                                                 // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1428[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// 0x0030 (0x0030 - 0x0000)
struct BlueprintGameplayTagLibrary_RemoveGameplayTag final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0020(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1429[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// 0x0020 (0x0020 - 0x0000)
struct GameplayTagAssetInterface_GetOwnedGameplayTags final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// 0x0028 (0x0028 - 0x0000)
struct GameplayTagAssetInterface_HasAllMatchingGameplayTags final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_142A[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// 0x0028 (0x0028 - 0x0000)
struct GameplayTagAssetInterface_HasAnyMatchingGameplayTags final 
{
public:
	struct FGameplayTagContainer                  TagContainer;                                      // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_142B[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// 0x000C (0x000C - 0x0000)
struct GameplayTagAssetInterface_HasMatchingGameplayTag final 
{
public:
	struct FGameplayTag                           TagToCheck;                                        // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_142C[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
