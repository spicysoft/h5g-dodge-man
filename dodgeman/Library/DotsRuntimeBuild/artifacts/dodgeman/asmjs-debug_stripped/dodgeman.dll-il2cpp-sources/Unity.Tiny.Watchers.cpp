#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1);

	static inline R Invoke (Il2CppMethodSlot slot, TinyType* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData)(obj, p1);
	}
};

// System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>
struct List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233;
// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandlePool
struct AtomicSafetyHandlePool_tCD52B5F90B36FA2261F86B06B0C826B851871ECB;
// Unity.Collections.LowLevel.Unsafe.DisposeSentinel
struct DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79;
// Unity.Entities.ComponentJobSafetyManager
struct ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500;
// Unity.Entities.ComponentSystem
struct ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1;
// Unity.Entities.EntityManager
struct EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14;
// Unity.Entities.EntityQueryCache
struct EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047;
// Unity.Entities.EntityQuery[]
struct EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1;
// Unity.Entities.World
struct World_tEEA075348FAEC96EE224554FCDED78254768804E;
// Unity.Tiny.Watchers.DefaultWatchersSystem
struct DefaultWatchersSystem_tBAA87A64A29970E4DDE3FF725E4D7C98A464A7A4;
// Unity.Tiny.Watchers.IWatcherValueEntry
struct IWatcherValueEntry_tC5C230EB755B0C21B019413808C55A9FB6C3C09D;
// Unity.Tiny.Watchers.IWatcherValueEntry[]
struct IWatcherValueEntryU5BU5D_tAF18852A1910558F068C487EFEF5E1FFBF5ADC2F;
// Unity.Tiny.Watchers.WatchersSystem
struct WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356;

IL2CPP_EXTERN_C const RuntimeMethod ComponentSystem__ctor_mC248FF25EA55C4B49B251E08FBDE68FA01D98F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod List_1_RemoveAt_m21822AF21D438BBAABCED3CE7BF93BA3DA0539D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod List_1__ctor_mE3088C83ABDC028896DA4DC79ECF1D61B6D8AC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod List_1_get_Count_m966F5D00240543A4588B536F2B0CD388B4D69265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod List_1_get_Item_mF56A569A0D4597115AC61EACC84B9419BA1FD0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod List_1_set_Item_m8C083826F266DF201BDF1EB9B5FBED522155B63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod WatchersSystem__ctor_mACAE56A63B94D016ADDF849C4F1075288DC70319_RuntimeMethod_var;
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD5C60D328E53F795CF3E41AD0684C3AF064E26E2 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>
struct  List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IWatcherValueEntryU5BU5D_tAF18852A1910558F068C487EFEF5E1FFBF5ADC2F* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline IWatcherValueEntryU5BU5D_tAF18852A1910558F068C487EFEF5E1FFBF5ADC2F* get__items_0() const { return ____items_0; }
	inline IWatcherValueEntryU5BU5D_tAF18852A1910558F068C487EFEF5E1FFBF5ADC2F** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(IWatcherValueEntryU5BU5D_tAF18852A1910558F068C487EFEF5E1FFBF5ADC2F* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.ValueType
struct  ValueType_t64F15EF9CF2A81C067DEFA394EE6E92316BC80B5  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t64F15EF9CF2A81C067DEFA394EE6E92316BC80B5_marshaled_pinvoke
{
};

// Unity.Collections.LowLevel.Unsafe.DisposeSentinel
struct  DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79  : public RuntimeObject
{
public:
	// System.Int32 Unity.Collections.LowLevel.Unsafe.DisposeSentinel::m_IsCreated
	int32_t ___m_IsCreated_0;
	// System.String Unity.Collections.LowLevel.Unsafe.DisposeSentinel::m_Stack
	String_t* ___m_Stack_1;

public:
	inline int32_t get_m_IsCreated_0() const { return ___m_IsCreated_0; }
	inline int32_t* get_address_of_m_IsCreated_0() { return &___m_IsCreated_0; }
	inline void set_m_IsCreated_0(int32_t value)
	{
		___m_IsCreated_0 = value;
	}

	inline String_t* get_m_Stack_1() const { return ___m_Stack_1; }
	inline String_t** get_address_of_m_Stack_1() { return &___m_Stack_1; }
	inline void set_m_Stack_1(String_t* value)
	{
		___m_Stack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.DisposeSentinel
struct DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79_marshaled_pinvoke
{
	int32_t ___m_IsCreated_0;
	char* ___m_Stack_1;
};

// System.Boolean
struct  Boolean_t65DF67C4FFCA1C56BB2250E17E0BC1E268868230 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Boolean_t65DF67C4FFCA1C56BB2250E17E0BC1E268868230__padding[1];
	};

public:
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Int32_t585191389E07734F19F3156FF88FB3EF4800D102__padding[1];
	};

public:
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

extern void* IntPtr_t_StaticFields_Storage;
struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Entities.IntList
struct  IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD 
{
public:
	// System.Int32* Unity.Entities.IntList::p
	int32_t* ___p_0;
	// System.Int32 Unity.Entities.IntList::Count
	int32_t ___Count_1;
	// System.Int32 Unity.Entities.IntList::Capacity
	int32_t ___Capacity_2;

public:
	inline int32_t* get_p_0() const { return ___p_0; }
	inline int32_t** get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(int32_t* value)
	{
		___p_0 = value;
	}

	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline int32_t get_Capacity_2() const { return ___Capacity_2; }
	inline int32_t* get_address_of_Capacity_2() { return &___Capacity_2; }
	inline void set_Capacity_2(int32_t value)
	{
		___Capacity_2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle
struct  AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A 
{
public:
	// System.IntPtr Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::versionNode
	intptr_t ___versionNode_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::version
	int32_t ___version_1;

public:
	inline intptr_t get_versionNode_0() const { return ___versionNode_0; }
	inline intptr_t* get_address_of_versionNode_0() { return &___versionNode_0; }
	inline void set_versionNode_0(intptr_t value)
	{
		___versionNode_0 = value;
	}

	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};

extern void* AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A_StaticFields_Storage;
struct AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A_StaticFields
{
public:
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandlePool Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::pool
	AtomicSafetyHandlePool_tCD52B5F90B36FA2261F86B06B0C826B851871ECB * ___pool_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::AtomicSafetyVersionIncrease
	int32_t ___AtomicSafetyVersionIncrease_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::AllowReadOrWrite
	int32_t ___AllowReadOrWrite_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::SecondaryWritingEnabled
	int32_t ___SecondaryWritingEnabled_5;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::s_TempSliceHandle
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___s_TempSliceHandle_6;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle::s_TempMemSafetyHandle
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___s_TempMemSafetyHandle_7;

public:
	inline AtomicSafetyHandlePool_tCD52B5F90B36FA2261F86B06B0C826B851871ECB * get_pool_2() const { return ___pool_2; }
	inline AtomicSafetyHandlePool_tCD52B5F90B36FA2261F86B06B0C826B851871ECB ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(AtomicSafetyHandlePool_tCD52B5F90B36FA2261F86B06B0C826B851871ECB * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_2), (void*)value);
	}

	inline int32_t get_AtomicSafetyVersionIncrease_3() const { return ___AtomicSafetyVersionIncrease_3; }
	inline int32_t* get_address_of_AtomicSafetyVersionIncrease_3() { return &___AtomicSafetyVersionIncrease_3; }
	inline void set_AtomicSafetyVersionIncrease_3(int32_t value)
	{
		___AtomicSafetyVersionIncrease_3 = value;
	}

	inline int32_t get_AllowReadOrWrite_4() const { return ___AllowReadOrWrite_4; }
	inline int32_t* get_address_of_AllowReadOrWrite_4() { return &___AllowReadOrWrite_4; }
	inline void set_AllowReadOrWrite_4(int32_t value)
	{
		___AllowReadOrWrite_4 = value;
	}

	inline int32_t get_SecondaryWritingEnabled_5() const { return ___SecondaryWritingEnabled_5; }
	inline int32_t* get_address_of_SecondaryWritingEnabled_5() { return &___SecondaryWritingEnabled_5; }
	inline void set_SecondaryWritingEnabled_5(int32_t value)
	{
		___SecondaryWritingEnabled_5 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_s_TempSliceHandle_6() const { return ___s_TempSliceHandle_6; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_s_TempSliceHandle_6() { return &___s_TempSliceHandle_6; }
	inline void set_s_TempSliceHandle_6(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___s_TempSliceHandle_6 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_s_TempMemSafetyHandle_7() const { return ___s_TempMemSafetyHandle_7; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_s_TempMemSafetyHandle_7() { return &___s_TempMemSafetyHandle_7; }
	inline void set_s_TempMemSafetyHandle_7(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___s_TempMemSafetyHandle_7 = value;
	}
};


// Unity.Entities.ComponentSystemBase
struct  ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36  : public RuntimeObject
{
public:
	// Unity.Entities.EntityQuery[] Unity.Entities.ComponentSystemBase::m_EntityQueries
	EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1* ___m_EntityQueries_0;
	// Unity.Entities.EntityQuery[] Unity.Entities.ComponentSystemBase::m_RequiredEntityQueries
	EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1* ___m_RequiredEntityQueries_1;
	// Unity.Entities.IntList Unity.Entities.ComponentSystemBase::m_JobDependencyForReadingSystems
	IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD  ___m_JobDependencyForReadingSystems_2;
	// Unity.Entities.IntList Unity.Entities.ComponentSystemBase::m_JobDependencyForWritingSystems
	IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD  ___m_JobDependencyForWritingSystems_3;
	// System.UInt32 Unity.Entities.ComponentSystemBase::m_LastSystemVersion
	uint32_t ___m_LastSystemVersion_4;
	// Unity.Entities.ComponentJobSafetyManager* Unity.Entities.ComponentSystemBase::m_SafetyManager
	ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * ___m_SafetyManager_5;
	// Unity.Entities.EntityManager Unity.Entities.ComponentSystemBase::m_EntityManager
	EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * ___m_EntityManager_6;
	// Unity.Entities.World Unity.Entities.ComponentSystemBase::m_World
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___m_World_7;
	// System.Boolean Unity.Entities.ComponentSystemBase::m_AlwaysUpdateSystem
	bool ___m_AlwaysUpdateSystem_8;
	// System.Boolean Unity.Entities.ComponentSystemBase::m_PreviouslyEnabled
	bool ___m_PreviouslyEnabled_9;
	// System.Boolean Unity.Entities.ComponentSystemBase::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_10;
	// System.Int32 Unity.Entities.ComponentSystemBase::m_SystemID
	int32_t ___m_SystemID_11;

public:
	inline EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1* get_m_EntityQueries_0() const { return ___m_EntityQueries_0; }
	inline EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1** get_address_of_m_EntityQueries_0() { return &___m_EntityQueries_0; }
	inline void set_m_EntityQueries_0(EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1* value)
	{
		___m_EntityQueries_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntityQueries_0), (void*)value);
	}

	inline EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1* get_m_RequiredEntityQueries_1() const { return ___m_RequiredEntityQueries_1; }
	inline EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1** get_address_of_m_RequiredEntityQueries_1() { return &___m_RequiredEntityQueries_1; }
	inline void set_m_RequiredEntityQueries_1(EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1* value)
	{
		___m_RequiredEntityQueries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RequiredEntityQueries_1), (void*)value);
	}

	inline IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD  get_m_JobDependencyForReadingSystems_2() const { return ___m_JobDependencyForReadingSystems_2; }
	inline IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD * get_address_of_m_JobDependencyForReadingSystems_2() { return &___m_JobDependencyForReadingSystems_2; }
	inline void set_m_JobDependencyForReadingSystems_2(IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD  value)
	{
		___m_JobDependencyForReadingSystems_2 = value;
	}

	inline IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD  get_m_JobDependencyForWritingSystems_3() const { return ___m_JobDependencyForWritingSystems_3; }
	inline IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD * get_address_of_m_JobDependencyForWritingSystems_3() { return &___m_JobDependencyForWritingSystems_3; }
	inline void set_m_JobDependencyForWritingSystems_3(IntList_t1A4584651E2F0169F377B3D1A4204891AE2EB4CD  value)
	{
		___m_JobDependencyForWritingSystems_3 = value;
	}

	inline uint32_t get_m_LastSystemVersion_4() const { return ___m_LastSystemVersion_4; }
	inline uint32_t* get_address_of_m_LastSystemVersion_4() { return &___m_LastSystemVersion_4; }
	inline void set_m_LastSystemVersion_4(uint32_t value)
	{
		___m_LastSystemVersion_4 = value;
	}

	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * get_m_SafetyManager_5() const { return ___m_SafetyManager_5; }
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 ** get_address_of_m_SafetyManager_5() { return &___m_SafetyManager_5; }
	inline void set_m_SafetyManager_5(ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * value)
	{
		___m_SafetyManager_5 = value;
	}

	inline EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * get_m_EntityManager_6() const { return ___m_EntityManager_6; }
	inline EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 ** get_address_of_m_EntityManager_6() { return &___m_EntityManager_6; }
	inline void set_m_EntityManager_6(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * value)
	{
		___m_EntityManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntityManager_6), (void*)value);
	}

	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_m_World_7() const { return ___m_World_7; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_m_World_7() { return &___m_World_7; }
	inline void set_m_World_7(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___m_World_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_World_7), (void*)value);
	}

	inline bool get_m_AlwaysUpdateSystem_8() const { return ___m_AlwaysUpdateSystem_8; }
	inline bool* get_address_of_m_AlwaysUpdateSystem_8() { return &___m_AlwaysUpdateSystem_8; }
	inline void set_m_AlwaysUpdateSystem_8(bool value)
	{
		___m_AlwaysUpdateSystem_8 = value;
	}

	inline bool get_m_PreviouslyEnabled_9() const { return ___m_PreviouslyEnabled_9; }
	inline bool* get_address_of_m_PreviouslyEnabled_9() { return &___m_PreviouslyEnabled_9; }
	inline void set_m_PreviouslyEnabled_9(bool value)
	{
		___m_PreviouslyEnabled_9 = value;
	}

	inline bool get_U3CEnabledU3Ek__BackingField_10() const { return ___U3CEnabledU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_10() { return &___U3CEnabledU3Ek__BackingField_10; }
	inline void set_U3CEnabledU3Ek__BackingField_10(bool value)
	{
		___U3CEnabledU3Ek__BackingField_10 = value;
	}

	inline int32_t get_m_SystemID_11() const { return ___m_SystemID_11; }
	inline int32_t* get_address_of_m_SystemID_11() { return &___m_SystemID_11; }
	inline void set_m_SystemID_11(int32_t value)
	{
		___m_SystemID_11 = value;
	}
};

extern void* ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36_StaticFields_Storage;
struct ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36_StaticFields
{
public:
	// Unity.Entities.ComponentSystemBase Unity.Entities.ComponentSystemBase::ms_ExecutingSystem
	ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 * ___ms_ExecutingSystem_12;

public:
	inline ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 * get_ms_ExecutingSystem_12() const { return ___ms_ExecutingSystem_12; }
	inline ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 ** get_address_of_ms_ExecutingSystem_12() { return &___ms_ExecutingSystem_12; }
	inline void set_ms_ExecutingSystem_12(ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 * value)
	{
		___ms_ExecutingSystem_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_ExecutingSystem_12), (void*)value);
	}
};


// Unity.Entities.EntityCommandBuffer
struct  EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 
{
public:
	// Unity.Entities.EntityCommandBufferData* Unity.Entities.EntityCommandBuffer::m_Data
	EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * ___m_Data_0;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Entities.EntityCommandBuffer::m_Safety0
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety0_1;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Entities.EntityCommandBuffer::m_BufferSafety
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_BufferSafety_2;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Entities.EntityCommandBuffer::m_ArrayInvalidationSafety
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_ArrayInvalidationSafety_3;
	// System.Int32 Unity.Entities.EntityCommandBuffer::m_SafetyReadOnlyCount
	int32_t ___m_SafetyReadOnlyCount_4;
	// System.Int32 Unity.Entities.EntityCommandBuffer::m_SafetyReadWriteCount
	int32_t ___m_SafetyReadWriteCount_5;
	// Unity.Collections.LowLevel.Unsafe.DisposeSentinel Unity.Entities.EntityCommandBuffer::m_DisposeSentinel
	DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * ___m_DisposeSentinel_6;
	// System.Int32 Unity.Entities.EntityCommandBuffer::SystemID
	int32_t ___SystemID_7;

public:
	inline EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * get_m_Data_0() const { return ___m_Data_0; }
	inline EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 ** get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * value)
	{
		___m_Data_0 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_Safety0_1() const { return ___m_Safety0_1; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_Safety0_1() { return &___m_Safety0_1; }
	inline void set_m_Safety0_1(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_Safety0_1 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_BufferSafety_2() const { return ___m_BufferSafety_2; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_BufferSafety_2() { return &___m_BufferSafety_2; }
	inline void set_m_BufferSafety_2(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_BufferSafety_2 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_ArrayInvalidationSafety_3() const { return ___m_ArrayInvalidationSafety_3; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_ArrayInvalidationSafety_3() { return &___m_ArrayInvalidationSafety_3; }
	inline void set_m_ArrayInvalidationSafety_3(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_ArrayInvalidationSafety_3 = value;
	}

	inline int32_t get_m_SafetyReadOnlyCount_4() const { return ___m_SafetyReadOnlyCount_4; }
	inline int32_t* get_address_of_m_SafetyReadOnlyCount_4() { return &___m_SafetyReadOnlyCount_4; }
	inline void set_m_SafetyReadOnlyCount_4(int32_t value)
	{
		___m_SafetyReadOnlyCount_4 = value;
	}

	inline int32_t get_m_SafetyReadWriteCount_5() const { return ___m_SafetyReadWriteCount_5; }
	inline int32_t* get_address_of_m_SafetyReadWriteCount_5() { return &___m_SafetyReadWriteCount_5; }
	inline void set_m_SafetyReadWriteCount_5(int32_t value)
	{
		___m_SafetyReadWriteCount_5 = value;
	}

	inline DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * get_m_DisposeSentinel_6() const { return ___m_DisposeSentinel_6; }
	inline DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 ** get_address_of_m_DisposeSentinel_6() { return &___m_DisposeSentinel_6; }
	inline void set_m_DisposeSentinel_6(DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * value)
	{
		___m_DisposeSentinel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisposeSentinel_6), (void*)value);
	}

	inline int32_t get_SystemID_7() const { return ___SystemID_7; }
	inline int32_t* get_address_of_SystemID_7() { return &___SystemID_7; }
	inline void set_SystemID_7(int32_t value)
	{
		___SystemID_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_marshaled_pinvoke
{
	EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * ___m_Data_0;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety0_1;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_BufferSafety_2;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_ArrayInvalidationSafety_3;
	int32_t ___m_SafetyReadOnlyCount_4;
	int32_t ___m_SafetyReadWriteCount_5;
	DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79_marshaled_pinvoke ___m_DisposeSentinel_6;
	int32_t ___SystemID_7;
};

// Unity.Entities.ComponentSystem
struct  ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B  : public ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36
{
public:
	// Unity.Entities.EntityCommandBuffer Unity.Entities.ComponentSystem::m_DeferredEntities
	EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  ___m_DeferredEntities_13;
	// Unity.Entities.EntityQueryCache Unity.Entities.ComponentSystem::m_EntityQueryCache
	EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047 * ___m_EntityQueryCache_14;

public:
	inline EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  get_m_DeferredEntities_13() const { return ___m_DeferredEntities_13; }
	inline EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * get_address_of_m_DeferredEntities_13() { return &___m_DeferredEntities_13; }
	inline void set_m_DeferredEntities_13(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  value)
	{
		___m_DeferredEntities_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DeferredEntities_13))->___m_DisposeSentinel_6), (void*)NULL);
	}

	inline EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047 * get_m_EntityQueryCache_14() const { return ___m_EntityQueryCache_14; }
	inline EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047 ** get_address_of_m_EntityQueryCache_14() { return &___m_EntityQueryCache_14; }
	inline void set_m_EntityQueryCache_14(EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047 * value)
	{
		___m_EntityQueryCache_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntityQueryCache_14), (void*)value);
	}
};


// Unity.Tiny.Watchers.WatchersSystem
struct  WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356  : public ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B
{
public:
	// System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry> Unity.Tiny.Watchers.WatchersSystem::watchers
	List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * ___watchers_15;
	// System.Boolean Unity.Tiny.Watchers.WatchersSystem::inUpdate
	bool ___inUpdate_16;

public:
	inline List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * get_watchers_15() const { return ___watchers_15; }
	inline List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 ** get_address_of_watchers_15() { return &___watchers_15; }
	inline void set_watchers_15(List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * value)
	{
		___watchers_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watchers_15), (void*)value);
	}

	inline bool get_inUpdate_16() const { return ___inUpdate_16; }
	inline bool* get_address_of_inUpdate_16() { return &___inUpdate_16; }
	inline void set_inUpdate_16(bool value)
	{
		___inUpdate_16 = value;
	}
};


// Unity.Tiny.Watchers.DefaultWatchersSystem
struct  DefaultWatchersSystem_tBAA87A64A29970E4DDE3FF725E4D7C98A464A7A4  : public WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Unity.Tiny.Watchers.WatchersSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatchersSystem__ctor_mACAE56A63B94D016ADDF849C4F1075288DC70319 (WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356 * __this);
// System.Int32 System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m966F5D00240543A4588B536F2B0CD388B4D69265 (List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * __this);
// !0 System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_mF56A569A0D4597115AC61EACC84B9419BA1FD0EB (List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * __this, int32_t ___index0);
// System.Void System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m8C083826F266DF201BDF1EB9B5FBED522155B63B (List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * __this, int32_t ___index0, RuntimeObject* ___value1);
// System.Void System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m21822AF21D438BBAABCED3CE7BF93BA3DA0539D6 (List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * __this, int32_t ___index0);
// System.Void System.Collections.Generic.List`1<Unity.Tiny.Watchers.IWatcherValueEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE3088C83ABDC028896DA4DC79ECF1D61B6D8AC54 (List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * __this);
// System.Void Unity.Entities.ComponentSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSystem__ctor_mC248FF25EA55C4B49B251E08FBDE68FA01D98F1E (ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * __this);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Tiny.Watchers.DefaultWatchersSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWatchersSystem__ctor_m202FBFB79BC8030635795044725E8D4517B65869 (DefaultWatchersSystem_tBAA87A64A29970E4DDE3FF725E4D7C98A464A7A4 * __this)
{
	{
		WatchersSystem__ctor_mACAE56A63B94D016ADDF849C4F1075288DC70319(__this);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Tiny.Watchers.WatchersSystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatchersSystem_OnUpdate_mCFE1CE866BFD0584D7E8C9E16639B9FF23D6ED5E (WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356 * __this)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// inUpdate = true;
		__this->set_inUpdate_16((bool)1);
		// var l = watchers.Count;
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_0 = __this->get_watchers_15();
		int32_t L_1 = List_1_get_Count_m966F5D00240543A4588B536F2B0CD388B4D69265(L_0);
		V_0 = L_1;
		// for (int i=0; i<l; i++) {
		V_2 = 0;
		goto IL_005c;
	}

IL_0018:
	{
		// if ( !watchers[i].OnUpdate(this) ) {
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_2 = __this->get_watchers_15();
		int32_t L_3 = V_2;
		RuntimeObject* L_4 = List_1_get_Item_mF56A569A0D4597115AC61EACC84B9419BA1FD0EB(L_2, L_3);
		bool L_5 = InterfaceFuncInvoker1< bool, WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356 * >::Invoke(0 /* System.Boolean Unity.Tiny.Watchers.IWatcherValueEntry::OnUpdate(Unity.Tiny.Watchers.WatchersSystem) */, LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 2516 : 5032), L_4, __this);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// watchers[i] = watchers[l - 1];
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_7 = __this->get_watchers_15();
		int32_t L_8 = V_2;
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_9 = __this->get_watchers_15();
		int32_t L_10 = V_0;
		RuntimeObject* L_11 = List_1_get_Item_mF56A569A0D4597115AC61EACC84B9419BA1FD0EB(L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		List_1_set_Item_m8C083826F266DF201BDF1EB9B5FBED522155B63B(L_7, L_8, L_11);
		// l--;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		// i--;
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_0057:
	{
		// for (int i=0; i<l; i++) {
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005c:
	{
		// for (int i=0; i<l; i++) {
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0018;
		}
	}
	{
		// int nremove = watchers.Count - l;
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_18 = __this->get_watchers_15();
		int32_t L_19 = List_1_get_Count_m966F5D00240543A4588B536F2B0CD388B4D69265(L_18);
		int32_t L_20 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
		// for (int i=0; i<nremove; i++)
		V_5 = 0;
		goto IL_0098;
	}

IL_0079:
	{
		// watchers.RemoveAt(watchers.Count-1); // no RemoveRange in tiny.
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_21 = __this->get_watchers_15();
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_22 = __this->get_watchers_15();
		int32_t L_23 = List_1_get_Count_m966F5D00240543A4588B536F2B0CD388B4D69265(L_22);
		List_1_RemoveAt_m21822AF21D438BBAABCED3CE7BF93BA3DA0539D6(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)));
		// for (int i=0; i<nremove; i++)
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0098:
	{
		// for (int i=0; i<nremove; i++)
		int32_t L_25 = V_5;
		int32_t L_26 = V_1;
		V_6 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (L_27)
		{
			goto IL_0079;
		}
	}
	{
		// inUpdate = false;
		__this->set_inUpdate_16((bool)0);
		// }
		return;
	}
}
// System.Void Unity.Tiny.Watchers.WatchersSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatchersSystem__ctor_mACAE56A63B94D016ADDF849C4F1075288DC70319 (WatchersSystem_t15AC6512283EE8EDCA17A4C86079582892A50356 * __this)
{
	{
		// private List<IWatcherValueEntry> watchers = new List<IWatcherValueEntry>();
		List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 * L_0 = (List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233 *)il2cpp_codegen_object_new(sizeof(List_1_tB07E9E1402A776FFCBBD9EF54B61F2E16273E233), LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 2524 : 5048));
		List_1__ctor_mE3088C83ABDC028896DA4DC79ECF1D61B6D8AC54(L_0);
		__this->set_watchers_15(L_0);
		ComponentSystem__ctor_mC248FF25EA55C4B49B251E08FBDE68FA01D98F1E(__this);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
