#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_FindPathToActorSynchronously final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathStart;                                         // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 GoalActor;                                         // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherDistance;                                    // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D31[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PathfindingContext;                                // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationPath*                        ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// 0x0038 (0x0038 - 0x0000)
struct NavigationSystemV1_FindPathToLocationSynchronously final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathStart;                                         // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathEnd;                                           // 0x0014(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 PathfindingContext;                                // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationPath*                        ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// 0x0010 (0x0010 - 0x0000)
struct NavigationSystemV1_GetNavigationSystem final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationSystemV1*                    ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.GetPathCost
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_GetPathCost final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathStart;                                         // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathEnd;                                           // 0x0014(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PathCost;                                          // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D32[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ANavigationData*                        NavData;                                           // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavigationQueryResult             ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D33[0x7];                                      // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.GetPathLength
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_GetPathLength final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathStart;                                         // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PathEnd;                                           // 0x0014(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PathLength;                                        // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D34[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ANavigationData*                        NavData;                                           // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavigationQueryResult             ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D35[0x7];                                      // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// 0x0038 (0x0038 - 0x0000)
struct NavigationSystemV1_GetRandomPointInNavigableRadius final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                        NavData;                                           // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// 0x0038 (0x0038 - 0x0000)
struct NavigationSystemV1_GetRandomReachablePointInRadius final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                        NavData;                                           // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// 0x0010 (0x0010 - 0x0000)
struct NavigationSystemV1_IsNavigationBeingBuilt final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D36[0x7];                                      // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// 0x0010 (0x0010 - 0x0000)
struct NavigationSystemV1_IsNavigationBeingBuiltOrLocked final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D37[0x7];                                      // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_K2_GetRandomLocationInNavigableRadius final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RandomLocation;                                    // 0x0014(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D38[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ANavigationData*                        NavData;                                           // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D39[0x7];                                      // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_K2_GetRandomPointInNavigableRadius final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RandomLocation;                                    // 0x0014(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3A[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ANavigationData*                        NavData;                                           // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3B[0x7];                                      // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_K2_GetRandomReachablePointInRadius final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RandomLocation;                                    // 0x0014(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3C[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ANavigationData*                        NavData;                                           // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3D[0x7];                                      // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_K2_ProjectPointToNavigation final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Point;                                             // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ProjectedLocation;                                 // 0x0014(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                        NavData;                                           // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                QueryExtent;                                       // 0x0030(0x0010)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x003C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3E[0x3];                                      // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// 0x0048 (0x0048 - 0x0000)
struct NavigationSystemV1_NavigationRaycast final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RayStart;                                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RayEnd;                                            // 0x0014(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocation;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                            Querier;                                           // 0x0038(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3F[0x7];                                      // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// 0x0040 (0x0040 - 0x0000)
struct NavigationSystemV1_ProjectPointToNavigation final 
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Point;                                             // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                        NavData;                                           // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                QueryExtent;                                       // 0x0028(0x0010)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0034(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// 0x0010 (0x0010 - 0x0000)
struct NavigationSystemV1_SimpleMoveToActor final 
{
public:
	class AController*                            Controller;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class AActor*                           Goal;                                              // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// 0x0018 (0x0018 - 0x0000)
struct NavigationSystemV1_SimpleMoveToLocation final 
{
public:
	class AController*                            Controller;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Goal;                                              // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// 0x0020 (0x0020 - 0x0000)
struct NavigationSystemV1_K2_ReplaceAreaInOctreeData final 
{
public:
	const class UObject*                          Object;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                   OldArea;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                   NewArea;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D40[0x7];                                      // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// 0x0008 (0x0008 - 0x0000)
struct NavigationSystemV1_OnNavigationBoundsUpdated final 
{
public:
	class ANavMeshBoundsVolume*                   NavVolume;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// 0x0010 (0x0010 - 0x0000)
struct NavigationSystemV1_RegisterNavigationInvoker final 
{
public:
	class AActor*                                 Invoker;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileGenerationRadius;                              // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileRemovalRadius;                                 // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// 0x0001 (0x0001 - 0x0000)
struct NavigationSystemV1_SetGeometryGatheringMode final 
{
public:
	enum class ENavDataGatheringModeConfig        NewMode;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// 0x0004 (0x0004 - 0x0000)
struct NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount final 
{
public:
	int32                                         MaxNumberOfJobs;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// 0x0008 (0x0008 - 0x0000)
struct NavigationSystemV1_UnregisterNavigationInvoker final 
{
public:
	class AActor*                                 Invoker;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// 0x0014 (0x0014 - 0x0000)
struct NavigationPath_EnableDebugDrawing final 
{
public:
	bool                                          bShouldDrawDebugData;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D47[0x3];                                      // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           PathColor;                                         // 0x0004(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// 0x0001 (0x0001 - 0x0000)
struct NavigationPath_EnableRecalculationOnInvalidation final 
{
public:
	enum class ENavigationOptionFlag              DoRecalculation;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.GetDebugString
// 0x0010 (0x0010 - 0x0000)
struct NavigationPath_GetDebugString final 
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.GetPathCost
// 0x0004 (0x0004 - 0x0000)
struct NavigationPath_GetPathCost final 
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.GetPathLength
// 0x0004 (0x0004 - 0x0000)
struct NavigationPath_GetPathLength final 
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.IsPartial
// 0x0001 (0x0001 - 0x0000)
struct NavigationPath_IsPartial final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.IsStringPulled
// 0x0001 (0x0001 - 0x0000)
struct NavigationPath_IsStringPulled final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavigationPath.IsValid
// 0x0001 (0x0001 - 0x0000)
struct NavigationPath_IsValid final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// 0x0038 (0x0038 - 0x0000)
struct RecastNavMesh_K2_ReplaceAreaInTileBounds final 
{
public:
	struct FBox                                   Bounds;                                            // 0x0000(0x0020)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                   OldArea;                                           // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                   NewArea;                                           // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReplaceLinks;                                      // 0x0030(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0031(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4D[0x6];                                      // 0x0032(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// 0x0001 (0x0001 - 0x0000)
struct NavRelevantComponent_SetNavigationRelevancy final 
{
public:
	bool                                          bRelevant;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavModifierComponent.SetAreaClass
// 0x0008 (0x0008 - 0x0000)
struct NavModifierComponent_SetAreaClass final 
{
public:
	TSubclassOf<class UNavArea>                   NewAreaClass;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NavigationSystem.NavModifierVolume.SetAreaClass
// 0x0008 (0x0008 - 0x0000)
struct NavModifierVolume_SetAreaClass final 
{
public:
	TSubclassOf<class UNavArea>                   NewAreaClass;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

