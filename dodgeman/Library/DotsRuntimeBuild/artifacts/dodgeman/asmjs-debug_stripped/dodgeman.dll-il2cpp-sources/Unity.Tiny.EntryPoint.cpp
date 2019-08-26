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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData)(obj, p1);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*);

	static inline void Invoke (Il2CppMethodSlot slot, TinyType* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData)(obj);
	}
};

// System.Collections.Generic.List`1<Unity.Entities.ComponentSystemBase>
struct List_1_t2D065A3BFD6DA8F09B9B362DD3AD42A14F4FA830;
// System.Collections.Generic.List`1<Unity.Entities.World>
struct List_1_t33F958E659BAABA707ACB62771DF4CDD99445298;
// System.Exception
struct Exception_t;
// System.IDisposable
struct IDisposable_t93063CA54BC5A29FBB6EB7B6D1B846996E084D01;
// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandlePool
struct AtomicSafetyHandlePool_tCD52B5F90B36FA2261F86B06B0C826B851871ECB;
// Unity.Collections.LowLevel.Unsafe.DisposeSentinel
struct DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79;
// Unity.Entities.Archetype
struct Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635;
// Unity.Entities.BufferHeader
struct BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6;
// Unity.Entities.ComponentJobSafetyManager
struct ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500;
// Unity.Entities.ComponentSystemBase
struct ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36;
// Unity.Entities.ComponentType[]
struct ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1;
// Unity.Entities.EntityComponentStore
struct EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489;
// Unity.Entities.EntityGroupData
struct EntityGroupData_t2328E1072C1A2A0A6B19CBEFE6D599933747B838;
// Unity.Entities.EntityGroupManager
struct EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56;
// Unity.Entities.EntityManager
struct EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14;
// Unity.Entities.EntityManager/EntityManagerDebug
struct EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028;
// Unity.Entities.EntityQuery
struct EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A;
// Unity.Entities.EntityQueryCache
struct EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047;
// Unity.Entities.EntityQuery[]
struct EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1;
// Unity.Entities.ManagedComponentStore
struct ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4;
// Unity.Entities.World
struct World_tEEA075348FAEC96EE224554FCDED78254768804E;
// Unity.Tiny.Core.TinyEnvironment
struct TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831;
// Unity.Tiny.Core.WindowSystem
struct WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB;
// Unity.Tiny.Core.WindowSystem/MainLoopDelegate
struct MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD;
// Unity.Tiny.Scenes.SceneStreamingSystem
struct SceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F;

IL2CPP_EXTERN_C const RuntimeMethod ComponentSystemBase_Update_m818CC03ED23DA43D53F99249A36B8A313AD725E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod ComponentType_op_Implicit_mAE1D5C74585497FC2656639CDCC79090C0D10A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Debug_Log_m16336BC0BB15472113DDA3EE3B79895A38950356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod DefaultTinyWorldInitialization_InitializeSystems_m32A11B62A9AC886A5F6012CB87333B54474319A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod DefaultTinyWorldInitialization_InitializeWorld_m9A28FEBC54AC016C799AE4122F1121121681B527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod DynamicBuffer_1_ToNativeArray_m7F9D4932C39F45F99FB9F7B2C57FC428147FF58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityManager_CreateEntityQuery_mFC0B1658B7FD6E4020AEA15022DADA809B883617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityManager_DestroyEntity_mD4595ADAF7D1D70193FF3451CA09C71492E13BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityManager_Exists_mE356B5060281CEB7693773EA3DA7514EB8263E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityQuery_CalculateLength_m088909B91E683BBFAB5C5FF51958FF344DC18207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityQuery_ToEntityArray_m01E2F243ACFA5144EF6E4BBE42BD362EBB915203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Entity_get_Null_m44C01B711EF4A9DC84D0EDDF2D65A97CA8655224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Exception__ctor_m94D491BE173A7638B8129AF00E590345D0321030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod MainLoopDelegate__ctor_m9202E2CEEBB9C2701EBEA6DE9D2F97D2B70DCFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeArray_1_CheckElementReadAccess_m2871C08A4C149D64F8D53EC1EEDBC8F90B9604CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeArray_1_CheckElementReadAccess_m552ABB85C4D11157966F3EEF33B296C61DC70F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeArray_1_Dispose_mA1B574D8F5D821FB1829AD2F4B3DF18066A589C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeArray_1_Dispose_mEED5489101BCCB2D04D1446849FF39EAAF281908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeArray_1_get_Item_m20D859F56D7A0E40166DD75547ACB8750817E77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeArray_1_get_Item_mF43E02320E230973984E02C5A0837B98AB0DEDB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod NativeLeakDetection_set_Mode_m8EECDD9E17D1013AE3B4BCDAE059E5CC34B26FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Program_LoadStartupScenes_m6928FD9C3F50E87F295557BC2EA5C55932860631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod SceneService_GetSceneStatus_m60DB5D8F7D678EB4866F22DB3F9C1707E84678EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod SceneService_LoadConfigAsync_m9EA1083D2389D48F1033902261C9E0BA8F2ED701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod SceneService_LoadSceneAsync_m2EC040BEC8760BA5B1C0483B750EBC87F69214CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod TinyEnvironment_GetConfigBufferData_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m03086352A88F53793DAD00CF3B8292DFD175A93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Type_GetTypeFromHandle_m2E0BF604BD00AD02BFCB4A8FB6B3DBDA96CABFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mA504EE0599765C9F36D4A54465D643022FFE2F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mD4058FECFB42EB3049E7CB85CA5488A3391ACB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m1AADB54AC79B018F1250F9A41DA690B805E41625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m3017CA12C8BAD1EC47195EE31BE0336FE3526BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod World_Dispose_mC2E7D0871CE15C08B05E6CCC69425890586AD96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod World_GetExistingSystem_TisWindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB_m0B16F0FCF4B9ADDBC36A734974DAEDA2F91F07E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod World_GetOrCreateSystem_TisSceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F_m385453ACDE9D04222FFC6F1EAF36EDD709BB704C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod World_GetOrCreateSystem_TisTinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831_mA0B7401F802ACC9F04890493238D80952FBD5014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod World_Update_m3C9D6917CC78A9F2EE69413F4B475AD3D17C2253_RuntimeMethod_var;
struct Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 ;
struct BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6 ;
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 ;
struct EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 ;

struct ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t0D158BC36DDC5FF794D1BD5916323BEF458338A2 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_0;
	// System.String System.Exception::<StackTrace>k__BackingField
	String_t* ___U3CStackTraceU3Ek__BackingField_1;

public:
	inline String_t* get_U3CMessageU3Ek__BackingField_0() const { return ___U3CMessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_0() { return &___U3CMessageU3Ek__BackingField_0; }
	inline void set_U3CMessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_0), (void*)value);
	}

	inline String_t* get_U3CStackTraceU3Ek__BackingField_1() const { return ___U3CStackTraceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStackTraceU3Ek__BackingField_1() { return &___U3CStackTraceU3Ek__BackingField_1; }
	inline void set_U3CStackTraceU3Ek__BackingField_1(String_t* value)
	{
		___U3CStackTraceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStackTraceU3Ek__BackingField_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::_length
	int32_t ____length_0;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_1;

public:
	inline int32_t get__length_0() const { return ____length_0; }
	inline int32_t* get_address_of__length_0() { return &____length_0; }
	inline void set__length_0(int32_t value)
	{
		____length_0 = value;
	}

	inline Il2CppChar get__firstChar_1() const { return ____firstChar_1; }
	inline Il2CppChar* get_address_of__firstChar_1() { return &____firstChar_1; }
	inline void set__firstChar_1(Il2CppChar value)
	{
		____firstChar_1 = value;
	}
};

extern void* String_t_StaticFields_Storage;
struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;

public:
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_2), (void*)value);
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

// Unity.Entities.World
struct  World_tEEA075348FAEC96EE224554FCDED78254768804E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.Entities.ComponentSystemBase> Unity.Entities.World::m_Systems
	List_1_t2D065A3BFD6DA8F09B9B362DD3AD42A14F4FA830 * ___m_Systems_2;
	// System.Boolean Unity.Entities.World::m_AllowGetSystem
	bool ___m_AllowGetSystem_3;
	// Unity.Entities.EntityManager Unity.Entities.World::m_EntityManager
	EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * ___m_EntityManager_4;
	// System.UInt64 Unity.Entities.World::m_SequenceNumber
	uint64_t ___m_SequenceNumber_5;
	// System.String Unity.Entities.World::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_8;
	// System.Int32 Unity.Entities.World::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_9;
	// System.Boolean Unity.Entities.World::<QuitUpdate>k__BackingField
	bool ___U3CQuitUpdateU3Ek__BackingField_10;

public:
	inline List_1_t2D065A3BFD6DA8F09B9B362DD3AD42A14F4FA830 * get_m_Systems_2() const { return ___m_Systems_2; }
	inline List_1_t2D065A3BFD6DA8F09B9B362DD3AD42A14F4FA830 ** get_address_of_m_Systems_2() { return &___m_Systems_2; }
	inline void set_m_Systems_2(List_1_t2D065A3BFD6DA8F09B9B362DD3AD42A14F4FA830 * value)
	{
		___m_Systems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Systems_2), (void*)value);
	}

	inline bool get_m_AllowGetSystem_3() const { return ___m_AllowGetSystem_3; }
	inline bool* get_address_of_m_AllowGetSystem_3() { return &___m_AllowGetSystem_3; }
	inline void set_m_AllowGetSystem_3(bool value)
	{
		___m_AllowGetSystem_3 = value;
	}

	inline EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * get_m_EntityManager_4() const { return ___m_EntityManager_4; }
	inline EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 ** get_address_of_m_EntityManager_4() { return &___m_EntityManager_4; }
	inline void set_m_EntityManager_4(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * value)
	{
		___m_EntityManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntityManager_4), (void*)value);
	}

	inline uint64_t get_m_SequenceNumber_5() const { return ___m_SequenceNumber_5; }
	inline uint64_t* get_address_of_m_SequenceNumber_5() { return &___m_SequenceNumber_5; }
	inline void set_m_SequenceNumber_5(uint64_t value)
	{
		___m_SequenceNumber_5 = value;
	}

	inline String_t* get_U3CNameU3Ek__BackingField_8() const { return ___U3CNameU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_8() { return &___U3CNameU3Ek__BackingField_8; }
	inline void set_U3CNameU3Ek__BackingField_8(String_t* value)
	{
		___U3CNameU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_8), (void*)value);
	}

	inline int32_t get_U3CVersionU3Ek__BackingField_9() const { return ___U3CVersionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_9() { return &___U3CVersionU3Ek__BackingField_9; }
	inline void set_U3CVersionU3Ek__BackingField_9(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_9 = value;
	}

	inline bool get_U3CQuitUpdateU3Ek__BackingField_10() const { return ___U3CQuitUpdateU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CQuitUpdateU3Ek__BackingField_10() { return &___U3CQuitUpdateU3Ek__BackingField_10; }
	inline void set_U3CQuitUpdateU3Ek__BackingField_10(bool value)
	{
		___U3CQuitUpdateU3Ek__BackingField_10 = value;
	}
};

extern void* World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields_Storage;
struct World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields
{
public:
	// Unity.Entities.World Unity.Entities.World::<Active>k__BackingField
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___U3CActiveU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.Entities.World> Unity.Entities.World::allWorlds
	List_1_t33F958E659BAABA707ACB62771DF4CDD99445298 * ___allWorlds_1;
	// System.Int32 Unity.Entities.World::ms_SystemIDAllocator
	int32_t ___ms_SystemIDAllocator_6;
	// System.UInt64 Unity.Entities.World::ms_NextSequenceNumber
	uint64_t ___ms_NextSequenceNumber_7;

public:
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_U3CActiveU3Ek__BackingField_0() const { return ___U3CActiveU3Ek__BackingField_0; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_U3CActiveU3Ek__BackingField_0() { return &___U3CActiveU3Ek__BackingField_0; }
	inline void set_U3CActiveU3Ek__BackingField_0(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___U3CActiveU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveU3Ek__BackingField_0), (void*)value);
	}

	inline List_1_t33F958E659BAABA707ACB62771DF4CDD99445298 * get_allWorlds_1() const { return ___allWorlds_1; }
	inline List_1_t33F958E659BAABA707ACB62771DF4CDD99445298 ** get_address_of_allWorlds_1() { return &___allWorlds_1; }
	inline void set_allWorlds_1(List_1_t33F958E659BAABA707ACB62771DF4CDD99445298 * value)
	{
		___allWorlds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allWorlds_1), (void*)value);
	}

	inline int32_t get_ms_SystemIDAllocator_6() const { return ___ms_SystemIDAllocator_6; }
	inline int32_t* get_address_of_ms_SystemIDAllocator_6() { return &___ms_SystemIDAllocator_6; }
	inline void set_ms_SystemIDAllocator_6(int32_t value)
	{
		___ms_SystemIDAllocator_6 = value;
	}

	inline uint64_t get_ms_NextSequenceNumber_7() const { return ___ms_NextSequenceNumber_7; }
	inline uint64_t* get_address_of_ms_NextSequenceNumber_7() { return &___ms_NextSequenceNumber_7; }
	inline void set_ms_NextSequenceNumber_7(uint64_t value)
	{
		___ms_NextSequenceNumber_7 = value;
	}
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


// System.Enum
struct  Enum_tB7F86F1F9E78CB0C85D22C1802ADB7E32CB8D13B  : public ValueType_t64F15EF9CF2A81C067DEFA394EE6E92316BC80B5
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_tB7F86F1F9E78CB0C85D22C1802ADB7E32CB8D13B_marshaled_pinvoke
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

extern void* Guid_t_StaticFields_Storage;
struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;

public:
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}
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


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.Type System.Type::<BaseType>k__BackingField
	Type_t * ___U3CBaseTypeU3Ek__BackingField_0;

public:
	inline Type_t * get_U3CBaseTypeU3Ek__BackingField_0() const { return ___U3CBaseTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CBaseTypeU3Ek__BackingField_0() { return &___U3CBaseTypeU3Ek__BackingField_0; }
	inline void set_U3CBaseTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CBaseTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseTypeU3Ek__BackingField_0), (void*)value);
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


// Unity.Entities.Entity
struct  Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 
{
public:
	// System.Int32 Unity.Entities.Entity::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Entities.Entity::Version
	int32_t ___Version_1;

public:
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline int32_t get_Version_1() const { return ___Version_1; }
	inline int32_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(int32_t value)
	{
		___Version_1 = value;
	}
};


// Unity.Entities.EntityArchetype
struct  EntityArchetype_tD0625DD0EFB8FEE98A09D6E2D4E69C6C4CDC6A6A 
{
public:
	// Unity.Entities.Archetype* Unity.Entities.EntityArchetype::Archetype
	Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 * ___Archetype_0;

public:
	inline Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 * get_Archetype_0() const { return ___Archetype_0; }
	inline Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 ** get_address_of_Archetype_0() { return &___Archetype_0; }
	inline void set_Archetype_0(Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 * value)
	{
		___Archetype_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityArchetype
struct EntityArchetype_tD0625DD0EFB8FEE98A09D6E2D4E69C6C4CDC6A6A_marshaled_pinvoke
{
	Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 * ___Archetype_0;
};

// Unity.Entities.EntityQueryFilter_ChangedFilter_<IndexInEntityQuery>e__FixedBuffer
struct  U3CIndexInEntityQueryU3Ee__FixedBuffer_tBFC507E5B250390DFC423A0B10F31EC22A942337 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Entities.EntityQueryFilter_ChangedFilter_<IndexInEntityQuery>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CIndexInEntityQueryU3Ee__FixedBuffer_tBFC507E5B250390DFC423A0B10F31EC22A942337__padding[8];
	};

public:
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Entities.EntityQueryFilter_SharedComponentData_<IndexInEntityQuery>e__FixedBuffer
struct  U3CIndexInEntityQueryU3Ee__FixedBuffer_t1D3565FF84912197693830AFF692B2FD1F6FCA7A 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Entities.EntityQueryFilter_SharedComponentData_<IndexInEntityQuery>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CIndexInEntityQueryU3Ee__FixedBuffer_t1D3565FF84912197693830AFF692B2FD1F6FCA7A__padding[8];
	};

public:
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Entities.EntityQueryFilter_SharedComponentData_<SharedComponentIndex>e__FixedBuffer
struct  U3CSharedComponentIndexU3Ee__FixedBuffer_t4369E3410156DD9D2657FCAB77347112E8C3591D 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Entities.EntityQueryFilter_SharedComponentData_<SharedComponentIndex>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CSharedComponentIndexU3Ee__FixedBuffer_t4369E3410156DD9D2657FCAB77347112E8C3591D__padding[8];
	};

public:
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_1;
	// System.Void* System.Delegate::m_ReversePInvokeWrapperPtr
	void* ___m_ReversePInvokeWrapperPtr_2;
	// System.Boolean System.Delegate::m_IsDelegateOpen
	bool ___m_IsDelegateOpen_3;

public:
	inline intptr_t get_method_ptr_0() const { return ___method_ptr_0; }
	inline intptr_t* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(intptr_t value)
	{
		___method_ptr_0 = value;
	}

	inline RuntimeObject * get_m_target_1() const { return ___m_target_1; }
	inline RuntimeObject ** get_address_of_m_target_1() { return &___m_target_1; }
	inline void set_m_target_1(RuntimeObject * value)
	{
		___m_target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_1), (void*)value);
	}

	inline void* get_m_ReversePInvokeWrapperPtr_2() const { return ___m_ReversePInvokeWrapperPtr_2; }
	inline void** get_address_of_m_ReversePInvokeWrapperPtr_2() { return &___m_ReversePInvokeWrapperPtr_2; }
	inline void set_m_ReversePInvokeWrapperPtr_2(void* value)
	{
		___m_ReversePInvokeWrapperPtr_2 = value;
	}

	inline bool get_m_IsDelegateOpen_3() const { return ___m_IsDelegateOpen_3; }
	inline bool* get_address_of_m_IsDelegateOpen_3() { return &___m_IsDelegateOpen_3; }
	inline void set_m_IsDelegateOpen_3(bool value)
	{
		___m_IsDelegateOpen_3 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t4AEFB4045F601C7B50F59B5483EEE787CC4D967A 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::m_Value
	intptr_t ___m_Value_0;

public:
	inline intptr_t get_m_Value_0() const { return ___m_Value_0; }
	inline intptr_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(intptr_t value)
	{
		___m_Value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t8B38F130D87CF2D88815742621F67CB1FC06CFD6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
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


// Unity.Collections.NativeLeakDetectionMode
struct  NativeLeakDetectionMode_t211DD5558F1D6EE4A01A7BB016D67F09005BA1F0 
{
public:
	// System.Int32 Unity.Collections.NativeLeakDetectionMode::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
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


// Unity.Entities.ComponentType_AccessMode
struct  AccessMode_tAA3516EF21DFABF12DF467F939D16A9785FEB5DB 
{
public:
	// System.Int32 Unity.Entities.ComponentType_AccessMode::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Entities.EntityQueryFilter_ChangedFilter
struct  ChangedFilter_tDB52E96FEF6496C7F292E82BBA5477E0E9AFD1F9 
{
public:
	// System.Int32 Unity.Entities.EntityQueryFilter_ChangedFilter::Count
	int32_t ___Count_0;
	// Unity.Entities.EntityQueryFilter_ChangedFilter_<IndexInEntityQuery>e__FixedBuffer Unity.Entities.EntityQueryFilter_ChangedFilter::IndexInEntityQuery
	U3CIndexInEntityQueryU3Ee__FixedBuffer_tBFC507E5B250390DFC423A0B10F31EC22A942337  ___IndexInEntityQuery_1;

public:
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline U3CIndexInEntityQueryU3Ee__FixedBuffer_tBFC507E5B250390DFC423A0B10F31EC22A942337  get_IndexInEntityQuery_1() const { return ___IndexInEntityQuery_1; }
	inline U3CIndexInEntityQueryU3Ee__FixedBuffer_tBFC507E5B250390DFC423A0B10F31EC22A942337 * get_address_of_IndexInEntityQuery_1() { return &___IndexInEntityQuery_1; }
	inline void set_IndexInEntityQuery_1(U3CIndexInEntityQueryU3Ee__FixedBuffer_tBFC507E5B250390DFC423A0B10F31EC22A942337  value)
	{
		___IndexInEntityQuery_1 = value;
	}
};


// Unity.Entities.EntityQueryFilter_SharedComponentData
struct  SharedComponentData_tF9B06ECF04096244322B0F93550023F496892E69 
{
public:
	// System.Int32 Unity.Entities.EntityQueryFilter_SharedComponentData::Count
	int32_t ___Count_0;
	// Unity.Entities.EntityQueryFilter_SharedComponentData_<IndexInEntityQuery>e__FixedBuffer Unity.Entities.EntityQueryFilter_SharedComponentData::IndexInEntityQuery
	U3CIndexInEntityQueryU3Ee__FixedBuffer_t1D3565FF84912197693830AFF692B2FD1F6FCA7A  ___IndexInEntityQuery_1;
	// Unity.Entities.EntityQueryFilter_SharedComponentData_<SharedComponentIndex>e__FixedBuffer Unity.Entities.EntityQueryFilter_SharedComponentData::SharedComponentIndex
	U3CSharedComponentIndexU3Ee__FixedBuffer_t4369E3410156DD9D2657FCAB77347112E8C3591D  ___SharedComponentIndex_2;

public:
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline U3CIndexInEntityQueryU3Ee__FixedBuffer_t1D3565FF84912197693830AFF692B2FD1F6FCA7A  get_IndexInEntityQuery_1() const { return ___IndexInEntityQuery_1; }
	inline U3CIndexInEntityQueryU3Ee__FixedBuffer_t1D3565FF84912197693830AFF692B2FD1F6FCA7A * get_address_of_IndexInEntityQuery_1() { return &___IndexInEntityQuery_1; }
	inline void set_IndexInEntityQuery_1(U3CIndexInEntityQueryU3Ee__FixedBuffer_t1D3565FF84912197693830AFF692B2FD1F6FCA7A  value)
	{
		___IndexInEntityQuery_1 = value;
	}

	inline U3CSharedComponentIndexU3Ee__FixedBuffer_t4369E3410156DD9D2657FCAB77347112E8C3591D  get_SharedComponentIndex_2() const { return ___SharedComponentIndex_2; }
	inline U3CSharedComponentIndexU3Ee__FixedBuffer_t4369E3410156DD9D2657FCAB77347112E8C3591D * get_address_of_SharedComponentIndex_2() { return &___SharedComponentIndex_2; }
	inline void set_SharedComponentIndex_2(U3CSharedComponentIndexU3Ee__FixedBuffer_t4369E3410156DD9D2657FCAB77347112E8C3591D  value)
	{
		___SharedComponentIndex_2 = value;
	}
};


// Unity.Entities.FilterType
struct  FilterType_t10D04D9216AECE404ECF4AA0742CA828F524F70F 
{
public:
	// System.Int32 Unity.Entities.FilterType::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Tiny.EntryPoint.Program_BootPhase
struct  BootPhase_t695EAF33E00F85514977943A8115EF258243FD67 
{
public:
	// System.Int32 Unity.Tiny.EntryPoint.Program_BootPhase::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Tiny.Scenes.SceneReference
struct  SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8 
{
public:
	// System.Guid Unity.Tiny.Scenes.SceneReference::SceneGuid
	Guid_t  ___SceneGuid_1;

public:
	inline Guid_t  get_SceneGuid_1() const { return ___SceneGuid_1; }
	inline Guid_t * get_address_of_SceneGuid_1() { return &___SceneGuid_1; }
	inline void set_SceneGuid_1(Guid_t  value)
	{
		___SceneGuid_1 = value;
	}
};

extern void* SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8_StaticFields_Storage;
struct SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8_StaticFields
{
public:
	// Unity.Tiny.Scenes.SceneReference Unity.Tiny.Scenes.SceneReference::Null
	SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  ___Null_0;

public:
	inline SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  get_Null_0() const { return ___Null_0; }
	inline SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8 * get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  value)
	{
		___Null_0 = value;
	}
};


// Unity.Tiny.Scenes.SceneStatus
struct  SceneStatus_t107C0055BF0E240040BB693A99F21D8F56CD1388 
{
public:
	// System.Int32 Unity.Tiny.Scenes.SceneStatus::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1<Unity.Entities.Entity>
struct  NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// System.Int32 Unity.Collections.NativeArray`1::m_MinIndex
	int32_t ___m_MinIndex_2;
	// System.Int32 Unity.Collections.NativeArray`1::m_MaxIndex
	int32_t ___m_MaxIndex_3;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Collections.NativeArray`1::m_Safety
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety_4;
	// Unity.Collections.LowLevel.Unsafe.DisposeSentinel Unity.Collections.NativeArray`1::m_DisposeSentinel
	DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * ___m_DisposeSentinel_5;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_6;

public:
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline int32_t get_m_MinIndex_2() const { return ___m_MinIndex_2; }
	inline int32_t* get_address_of_m_MinIndex_2() { return &___m_MinIndex_2; }
	inline void set_m_MinIndex_2(int32_t value)
	{
		___m_MinIndex_2 = value;
	}

	inline int32_t get_m_MaxIndex_3() const { return ___m_MaxIndex_3; }
	inline int32_t* get_address_of_m_MaxIndex_3() { return &___m_MaxIndex_3; }
	inline void set_m_MaxIndex_3(int32_t value)
	{
		___m_MaxIndex_3 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_Safety_4() const { return ___m_Safety_4; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_Safety_4() { return &___m_Safety_4; }
	inline void set_m_Safety_4(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_Safety_4 = value;
	}

	inline DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * get_m_DisposeSentinel_5() const { return ___m_DisposeSentinel_5; }
	inline DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 ** get_address_of_m_DisposeSentinel_5() { return &___m_DisposeSentinel_5; }
	inline void set_m_DisposeSentinel_5(DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * value)
	{
		___m_DisposeSentinel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisposeSentinel_5), (void*)value);
	}

	inline int32_t get_m_AllocatorLabel_6() const { return ___m_AllocatorLabel_6; }
	inline int32_t* get_address_of_m_AllocatorLabel_6() { return &___m_AllocatorLabel_6; }
	inline void set_m_AllocatorLabel_6(int32_t value)
	{
		___m_AllocatorLabel_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t438A9D56CD2CC732CAB94C23E9EA91E7DCB12B15_marshaled_pinvoke_define
#define NativeArray_1_t438A9D56CD2CC732CAB94C23E9EA91E7DCB12B15_marshaled_pinvoke_define
struct NativeArray_1_t438A9D56CD2CC732CAB94C23E9EA91E7DCB12B15_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_MinIndex_2;
	int32_t ___m_MaxIndex_3;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety_4;
	DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79_marshaled_pinvoke ___m_DisposeSentinel_5;
	int32_t ___m_AllocatorLabel_6;
};
#endif

// Unity.Collections.NativeArray`1<Unity.Tiny.Scenes.StartupScenes>
struct  NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// System.Int32 Unity.Collections.NativeArray`1::m_MinIndex
	int32_t ___m_MinIndex_2;
	// System.Int32 Unity.Collections.NativeArray`1::m_MaxIndex
	int32_t ___m_MaxIndex_3;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Collections.NativeArray`1::m_Safety
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety_4;
	// Unity.Collections.LowLevel.Unsafe.DisposeSentinel Unity.Collections.NativeArray`1::m_DisposeSentinel
	DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * ___m_DisposeSentinel_5;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_6;

public:
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline int32_t get_m_MinIndex_2() const { return ___m_MinIndex_2; }
	inline int32_t* get_address_of_m_MinIndex_2() { return &___m_MinIndex_2; }
	inline void set_m_MinIndex_2(int32_t value)
	{
		___m_MinIndex_2 = value;
	}

	inline int32_t get_m_MaxIndex_3() const { return ___m_MaxIndex_3; }
	inline int32_t* get_address_of_m_MaxIndex_3() { return &___m_MaxIndex_3; }
	inline void set_m_MaxIndex_3(int32_t value)
	{
		___m_MaxIndex_3 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_Safety_4() const { return ___m_Safety_4; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_Safety_4() { return &___m_Safety_4; }
	inline void set_m_Safety_4(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_Safety_4 = value;
	}

	inline DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * get_m_DisposeSentinel_5() const { return ___m_DisposeSentinel_5; }
	inline DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 ** get_address_of_m_DisposeSentinel_5() { return &___m_DisposeSentinel_5; }
	inline void set_m_DisposeSentinel_5(DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79 * value)
	{
		___m_DisposeSentinel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisposeSentinel_5), (void*)value);
	}

	inline int32_t get_m_AllocatorLabel_6() const { return ___m_AllocatorLabel_6; }
	inline int32_t* get_address_of_m_AllocatorLabel_6() { return &___m_AllocatorLabel_6; }
	inline void set_m_AllocatorLabel_6(int32_t value)
	{
		___m_AllocatorLabel_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t438A9D56CD2CC732CAB94C23E9EA91E7DCB12B15_marshaled_pinvoke_define
#define NativeArray_1_t438A9D56CD2CC732CAB94C23E9EA91E7DCB12B15_marshaled_pinvoke_define
struct NativeArray_1_t438A9D56CD2CC732CAB94C23E9EA91E7DCB12B15_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_MinIndex_2;
	int32_t ___m_MaxIndex_3;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety_4;
	DisposeSentinel_tA880A3DD0AACAF386B4C143C853504C57BEE2F79_marshaled_pinvoke ___m_DisposeSentinel_5;
	int32_t ___m_AllocatorLabel_6;
};
#endif

// Unity.Entities.ComponentType
struct  ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1 
{
public:
	// System.Int32 Unity.Entities.ComponentType::TypeIndex
	int32_t ___TypeIndex_0;
	// Unity.Entities.ComponentType_AccessMode Unity.Entities.ComponentType::AccessModeType
	int32_t ___AccessModeType_1;

public:
	inline int32_t get_TypeIndex_0() const { return ___TypeIndex_0; }
	inline int32_t* get_address_of_TypeIndex_0() { return &___TypeIndex_0; }
	inline void set_TypeIndex_0(int32_t value)
	{
		___TypeIndex_0 = value;
	}

	inline int32_t get_AccessModeType_1() const { return ___AccessModeType_1; }
	inline int32_t* get_address_of_AccessModeType_1() { return &___AccessModeType_1; }
	inline void set_AccessModeType_1(int32_t value)
	{
		___AccessModeType_1 = value;
	}
};


// Unity.Entities.DynamicBuffer`1<Unity.Tiny.Scenes.StartupScenes>
struct  DynamicBuffer_1_tA406D10AF6E5D2DC36F96DAF0F53758115F1DE54 
{
public:
	// Unity.Entities.BufferHeader* Unity.Entities.DynamicBuffer`1::m_Buffer
	BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6 * ___m_Buffer_0;
	// System.Int32 Unity.Entities.DynamicBuffer`1::m_InternalCapacity
	int32_t ___m_InternalCapacity_1;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Entities.DynamicBuffer`1::m_Safety0
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety0_2;
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Entities.DynamicBuffer`1::m_Safety1
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety1_3;
	// System.Int32 Unity.Entities.DynamicBuffer`1::m_SafetyReadOnlyCount
	int32_t ___m_SafetyReadOnlyCount_4;
	// System.Int32 Unity.Entities.DynamicBuffer`1::m_SafetyReadWriteCount
	int32_t ___m_SafetyReadWriteCount_5;
	// System.Boolean Unity.Entities.DynamicBuffer`1::m_IsReadOnly
	bool ___m_IsReadOnly_6;

public:
	inline BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6 * value)
	{
		___m_Buffer_0 = value;
	}

	inline int32_t get_m_InternalCapacity_1() const { return ___m_InternalCapacity_1; }
	inline int32_t* get_address_of_m_InternalCapacity_1() { return &___m_InternalCapacity_1; }
	inline void set_m_InternalCapacity_1(int32_t value)
	{
		___m_InternalCapacity_1 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_Safety0_2() const { return ___m_Safety0_2; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_Safety0_2() { return &___m_Safety0_2; }
	inline void set_m_Safety0_2(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_Safety0_2 = value;
	}

	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_Safety1_3() const { return ___m_Safety1_3; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_Safety1_3() { return &___m_Safety1_3; }
	inline void set_m_Safety1_3(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_Safety1_3 = value;
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

	inline bool get_m_IsReadOnly_6() const { return ___m_IsReadOnly_6; }
	inline bool* get_address_of_m_IsReadOnly_6() { return &___m_IsReadOnly_6; }
	inline void set_m_IsReadOnly_6(bool value)
	{
		___m_IsReadOnly_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.DynamicBuffer`1
#ifndef DynamicBuffer_1_t3391371CA8C37B8CE612E07275AE99528E05062B_marshaled_pinvoke_define
#define DynamicBuffer_1_t3391371CA8C37B8CE612E07275AE99528E05062B_marshaled_pinvoke_define
struct DynamicBuffer_1_t3391371CA8C37B8CE612E07275AE99528E05062B_marshaled_pinvoke
{
	BufferHeader_t8441D3E87B9CE1878552103473A8EF3F8BCAC5A6 * ___m_Buffer_0;
	int32_t ___m_InternalCapacity_1;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety0_2;
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety1_3;
	int32_t ___m_SafetyReadOnlyCount_4;
	int32_t ___m_SafetyReadWriteCount_5;
	int32_t ___m_IsReadOnly_6;
};
#endif

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

// Unity.Entities.EntityQueryFilter
struct  EntityQueryFilter_t8094C471CFB0EB9B8AEAA945A46E183CEDEC79AB 
{
public:
	// Unity.Entities.FilterType Unity.Entities.EntityQueryFilter::Type
	int32_t ___Type_0;
	// System.UInt32 Unity.Entities.EntityQueryFilter::RequiredChangeVersion
	uint32_t ___RequiredChangeVersion_1;
	// Unity.Entities.EntityQueryFilter_SharedComponentData Unity.Entities.EntityQueryFilter::Shared
	SharedComponentData_tF9B06ECF04096244322B0F93550023F496892E69  ___Shared_2;
	// Unity.Entities.EntityQueryFilter_ChangedFilter Unity.Entities.EntityQueryFilter::Changed
	ChangedFilter_tDB52E96FEF6496C7F292E82BBA5477E0E9AFD1F9  ___Changed_3;

public:
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline uint32_t get_RequiredChangeVersion_1() const { return ___RequiredChangeVersion_1; }
	inline uint32_t* get_address_of_RequiredChangeVersion_1() { return &___RequiredChangeVersion_1; }
	inline void set_RequiredChangeVersion_1(uint32_t value)
	{
		___RequiredChangeVersion_1 = value;
	}

	inline SharedComponentData_tF9B06ECF04096244322B0F93550023F496892E69  get_Shared_2() const { return ___Shared_2; }
	inline SharedComponentData_tF9B06ECF04096244322B0F93550023F496892E69 * get_address_of_Shared_2() { return &___Shared_2; }
	inline void set_Shared_2(SharedComponentData_tF9B06ECF04096244322B0F93550023F496892E69  value)
	{
		___Shared_2 = value;
	}

	inline ChangedFilter_tDB52E96FEF6496C7F292E82BBA5477E0E9AFD1F9  get_Changed_3() const { return ___Changed_3; }
	inline ChangedFilter_tDB52E96FEF6496C7F292E82BBA5477E0E9AFD1F9 * get_address_of_Changed_3() { return &___Changed_3; }
	inline void set_Changed_3(ChangedFilter_tDB52E96FEF6496C7F292E82BBA5477E0E9AFD1F9  value)
	{
		___Changed_3 = value;
	}
};


// Unity.Entities.ExclusiveEntityTransaction
struct  ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E 
{
public:
	// Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle Unity.Entities.ExclusiveEntityTransaction::m_Safety
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety_0;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.ExclusiveEntityTransaction::m_EntityGroupManager
	GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  ___m_EntityGroupManager_1;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.ExclusiveEntityTransaction::m_ManagedComponentStore
	GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  ___m_ManagedComponentStore_2;
	// Unity.Entities.EntityComponentStore* Unity.Entities.ExclusiveEntityTransaction::m_EntityComponentStore
	EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * ___m_EntityComponentStore_3;

public:
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  get_m_Safety_0() const { return ___m_Safety_0; }
	inline AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A * get_address_of_m_Safety_0() { return &___m_Safety_0; }
	inline void set_m_Safety_0(AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  value)
	{
		___m_Safety_0 = value;
	}

	inline GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  get_m_EntityGroupManager_1() const { return ___m_EntityGroupManager_1; }
	inline GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA * get_address_of_m_EntityGroupManager_1() { return &___m_EntityGroupManager_1; }
	inline void set_m_EntityGroupManager_1(GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  value)
	{
		___m_EntityGroupManager_1 = value;
	}

	inline GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  get_m_ManagedComponentStore_2() const { return ___m_ManagedComponentStore_2; }
	inline GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA * get_address_of_m_ManagedComponentStore_2() { return &___m_ManagedComponentStore_2; }
	inline void set_m_ManagedComponentStore_2(GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  value)
	{
		___m_ManagedComponentStore_2 = value;
	}

	inline EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * get_m_EntityComponentStore_3() const { return ___m_EntityComponentStore_3; }
	inline EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 ** get_address_of_m_EntityComponentStore_3() { return &___m_EntityComponentStore_3; }
	inline void set_m_EntityComponentStore_3(EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * value)
	{
		___m_EntityComponentStore_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.ExclusiveEntityTransaction
struct ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E_marshaled_pinvoke
{
	AtomicSafetyHandle_tD39DC3984DE03DFCE30427589DF27C90F3E0818A  ___m_Safety_0;
	GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  ___m_EntityGroupManager_1;
	GCHandle_t27DA03687D5AFA3D0104199175BB382378DF4EAA  ___m_ManagedComponentStore_2;
	EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * ___m_EntityComponentStore_3;
};

// Unity.Tiny.EntryPoint.Program
struct  Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD  : public RuntimeObject
{
public:

public:
};

extern void* Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage;
struct Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields
{
public:
	// Unity.Entities.World Unity.Tiny.EntryPoint.Program::m_World
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___m_World_0;
	// Unity.Tiny.Core.TinyEnvironment Unity.Tiny.EntryPoint.Program::m_Environment
	TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * ___m_Environment_1;
	// Unity.Tiny.EntryPoint.Program_BootPhase Unity.Tiny.EntryPoint.Program::m_BootPhase
	int32_t ___m_BootPhase_2;
	// Unity.Entities.Entity Unity.Tiny.EntryPoint.Program::m_ConfigScene
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___m_ConfigScene_3;

public:
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_m_World_0() const { return ___m_World_0; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_m_World_0() { return &___m_World_0; }
	inline void set_m_World_0(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___m_World_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_World_0), (void*)value);
	}

	inline TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * get_m_Environment_1() const { return ___m_Environment_1; }
	inline TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 ** get_address_of_m_Environment_1() { return &___m_Environment_1; }
	inline void set_m_Environment_1(TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * value)
	{
		___m_Environment_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Environment_1), (void*)value);
	}

	inline int32_t get_m_BootPhase_2() const { return ___m_BootPhase_2; }
	inline int32_t* get_address_of_m_BootPhase_2() { return &___m_BootPhase_2; }
	inline void set_m_BootPhase_2(int32_t value)
	{
		___m_BootPhase_2 = value;
	}

	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_m_ConfigScene_3() const { return ___m_ConfigScene_3; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_m_ConfigScene_3() { return &___m_ConfigScene_3; }
	inline void set_m_ConfigScene_3(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___m_ConfigScene_3 = value;
	}
};


// Unity.Tiny.Scenes.StartupScenes
struct  StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F 
{
public:
	// Unity.Tiny.Scenes.SceneReference Unity.Tiny.Scenes.StartupScenes::SceneReference
	SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  ___SceneReference_0;

public:
	inline SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  get_SceneReference_0() const { return ___SceneReference_0; }
	inline SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8 * get_address_of_SceneReference_0() { return &___SceneReference_0; }
	inline void set_SceneReference_0(SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  value)
	{
		___SceneReference_0 = value;
	}
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


// Unity.Entities.EntityManager
struct  EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14  : public RuntimeObject
{
public:
	// Unity.Entities.ComponentJobSafetyManager* Unity.Entities.EntityManager::m_ComponentJobSafetyManager
	ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * ___m_ComponentJobSafetyManager_0;
	// Unity.Entities.EntityComponentStore* Unity.Entities.EntityManager::m_EntityComponentStore
	EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * ___m_EntityComponentStore_1;
	// Unity.Entities.ManagedComponentStore Unity.Entities.EntityManager::m_ManagedComponentStore
	ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 * ___m_ManagedComponentStore_2;
	// Unity.Entities.EntityGroupManager Unity.Entities.EntityManager::m_EntityGroupManager
	EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 * ___m_EntityGroupManager_3;
	// Unity.Entities.ExclusiveEntityTransaction Unity.Entities.EntityManager::m_ExclusiveEntityTransaction
	ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E  ___m_ExclusiveEntityTransaction_4;
	// Unity.Entities.World Unity.Entities.EntityManager::m_World
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___m_World_5;
	// Unity.Entities.EntityArchetype Unity.Entities.EntityManager::m_EntityOnlyArchetype
	EntityArchetype_tD0625DD0EFB8FEE98A09D6E2D4E69C6C4CDC6A6A  ___m_EntityOnlyArchetype_6;
	// Unity.Entities.EntityQuery Unity.Entities.EntityManager::m_UniversalQuery
	EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * ___m_UniversalQuery_7;
	// Unity.Entities.EntityManager_EntityManagerDebug Unity.Entities.EntityManager::m_Debug
	EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 * ___m_Debug_8;
	// System.Int32 Unity.Entities.EntityManager::m_InsideForEach
	int32_t ___m_InsideForEach_9;

public:
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * get_m_ComponentJobSafetyManager_0() const { return ___m_ComponentJobSafetyManager_0; }
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 ** get_address_of_m_ComponentJobSafetyManager_0() { return &___m_ComponentJobSafetyManager_0; }
	inline void set_m_ComponentJobSafetyManager_0(ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * value)
	{
		___m_ComponentJobSafetyManager_0 = value;
	}

	inline EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * get_m_EntityComponentStore_1() const { return ___m_EntityComponentStore_1; }
	inline EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 ** get_address_of_m_EntityComponentStore_1() { return &___m_EntityComponentStore_1; }
	inline void set_m_EntityComponentStore_1(EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * value)
	{
		___m_EntityComponentStore_1 = value;
	}

	inline ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 * get_m_ManagedComponentStore_2() const { return ___m_ManagedComponentStore_2; }
	inline ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 ** get_address_of_m_ManagedComponentStore_2() { return &___m_ManagedComponentStore_2; }
	inline void set_m_ManagedComponentStore_2(ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 * value)
	{
		___m_ManagedComponentStore_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedComponentStore_2), (void*)value);
	}

	inline EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 * get_m_EntityGroupManager_3() const { return ___m_EntityGroupManager_3; }
	inline EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 ** get_address_of_m_EntityGroupManager_3() { return &___m_EntityGroupManager_3; }
	inline void set_m_EntityGroupManager_3(EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 * value)
	{
		___m_EntityGroupManager_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntityGroupManager_3), (void*)value);
	}

	inline ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E  get_m_ExclusiveEntityTransaction_4() const { return ___m_ExclusiveEntityTransaction_4; }
	inline ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E * get_address_of_m_ExclusiveEntityTransaction_4() { return &___m_ExclusiveEntityTransaction_4; }
	inline void set_m_ExclusiveEntityTransaction_4(ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E  value)
	{
		___m_ExclusiveEntityTransaction_4 = value;
	}

	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_m_World_5() const { return ___m_World_5; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_m_World_5() { return &___m_World_5; }
	inline void set_m_World_5(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___m_World_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_World_5), (void*)value);
	}

	inline EntityArchetype_tD0625DD0EFB8FEE98A09D6E2D4E69C6C4CDC6A6A  get_m_EntityOnlyArchetype_6() const { return ___m_EntityOnlyArchetype_6; }
	inline EntityArchetype_tD0625DD0EFB8FEE98A09D6E2D4E69C6C4CDC6A6A * get_address_of_m_EntityOnlyArchetype_6() { return &___m_EntityOnlyArchetype_6; }
	inline void set_m_EntityOnlyArchetype_6(EntityArchetype_tD0625DD0EFB8FEE98A09D6E2D4E69C6C4CDC6A6A  value)
	{
		___m_EntityOnlyArchetype_6 = value;
	}

	inline EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * get_m_UniversalQuery_7() const { return ___m_UniversalQuery_7; }
	inline EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A ** get_address_of_m_UniversalQuery_7() { return &___m_UniversalQuery_7; }
	inline void set_m_UniversalQuery_7(EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * value)
	{
		___m_UniversalQuery_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UniversalQuery_7), (void*)value);
	}

	inline EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 * get_m_Debug_8() const { return ___m_Debug_8; }
	inline EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 ** get_address_of_m_Debug_8() { return &___m_Debug_8; }
	inline void set_m_Debug_8(EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 * value)
	{
		___m_Debug_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Debug_8), (void*)value);
	}

	inline int32_t get_m_InsideForEach_9() const { return ___m_InsideForEach_9; }
	inline int32_t* get_address_of_m_InsideForEach_9() { return &___m_InsideForEach_9; }
	inline void set_m_InsideForEach_9(int32_t value)
	{
		___m_InsideForEach_9 = value;
	}
};


// Unity.Entities.EntityQuery
struct  EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A  : public RuntimeObject
{
public:
	// Unity.Entities.ComponentJobSafetyManager* Unity.Entities.EntityQuery::m_SafetyManager
	ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * ___m_SafetyManager_0;
	// Unity.Entities.EntityGroupData* Unity.Entities.EntityQuery::m_GroupData
	EntityGroupData_t2328E1072C1A2A0A6B19CBEFE6D599933747B838 * ___m_GroupData_1;
	// Unity.Entities.EntityComponentStore* Unity.Entities.EntityQuery::m_EntityComponentStore
	EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * ___m_EntityComponentStore_2;
	// Unity.Entities.EntityQueryFilter Unity.Entities.EntityQuery::m_Filter
	EntityQueryFilter_t8094C471CFB0EB9B8AEAA945A46E183CEDEC79AB  ___m_Filter_3;
	// Unity.Entities.ManagedComponentStore Unity.Entities.EntityQuery::m_ManagedComponentStore
	ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 * ___m_ManagedComponentStore_4;
	// System.String Unity.Entities.EntityQuery::DisallowDisposing
	String_t* ___DisallowDisposing_5;
	// System.IDisposable Unity.Entities.EntityQuery::m_CachedState
	RuntimeObject* ___m_CachedState_6;

public:
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * get_m_SafetyManager_0() const { return ___m_SafetyManager_0; }
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 ** get_address_of_m_SafetyManager_0() { return &___m_SafetyManager_0; }
	inline void set_m_SafetyManager_0(ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * value)
	{
		___m_SafetyManager_0 = value;
	}

	inline EntityGroupData_t2328E1072C1A2A0A6B19CBEFE6D599933747B838 * get_m_GroupData_1() const { return ___m_GroupData_1; }
	inline EntityGroupData_t2328E1072C1A2A0A6B19CBEFE6D599933747B838 ** get_address_of_m_GroupData_1() { return &___m_GroupData_1; }
	inline void set_m_GroupData_1(EntityGroupData_t2328E1072C1A2A0A6B19CBEFE6D599933747B838 * value)
	{
		___m_GroupData_1 = value;
	}

	inline EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * get_m_EntityComponentStore_2() const { return ___m_EntityComponentStore_2; }
	inline EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 ** get_address_of_m_EntityComponentStore_2() { return &___m_EntityComponentStore_2; }
	inline void set_m_EntityComponentStore_2(EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 * value)
	{
		___m_EntityComponentStore_2 = value;
	}

	inline EntityQueryFilter_t8094C471CFB0EB9B8AEAA945A46E183CEDEC79AB  get_m_Filter_3() const { return ___m_Filter_3; }
	inline EntityQueryFilter_t8094C471CFB0EB9B8AEAA945A46E183CEDEC79AB * get_address_of_m_Filter_3() { return &___m_Filter_3; }
	inline void set_m_Filter_3(EntityQueryFilter_t8094C471CFB0EB9B8AEAA945A46E183CEDEC79AB  value)
	{
		___m_Filter_3 = value;
	}

	inline ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 * get_m_ManagedComponentStore_4() const { return ___m_ManagedComponentStore_4; }
	inline ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 ** get_address_of_m_ManagedComponentStore_4() { return &___m_ManagedComponentStore_4; }
	inline void set_m_ManagedComponentStore_4(ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4 * value)
	{
		___m_ManagedComponentStore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedComponentStore_4), (void*)value);
	}

	inline String_t* get_DisallowDisposing_5() const { return ___DisallowDisposing_5; }
	inline String_t** get_address_of_DisallowDisposing_5() { return &___DisallowDisposing_5; }
	inline void set_DisallowDisposing_5(String_t* value)
	{
		___DisallowDisposing_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisallowDisposing_5), (void*)value);
	}

	inline RuntimeObject* get_m_CachedState_6() const { return ___m_CachedState_6; }
	inline RuntimeObject** get_address_of_m_CachedState_6() { return &___m_CachedState_6; }
	inline void set_m_CachedState_6(RuntimeObject* value)
	{
		___m_CachedState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedState_6), (void*)value);
	}
};


// Unity.Tiny.Core.WindowSystem_MainLoopDelegate
struct  MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Tiny.Core.TinyEnvironment
struct  TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831  : public ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B
{
public:
	// Unity.Entities.Entity Unity.Tiny.Core.TinyEnvironment::configEntity
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___configEntity_15;
	// Unity.Entities.Entity Unity.Tiny.Core.TinyEnvironment::whiteSpriteEntity
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___whiteSpriteEntity_16;
	// System.Boolean Unity.Tiny.Core.TinyEnvironment::fixedFrameRateEnabled
	bool ___fixedFrameRateEnabled_17;
	// System.Single Unity.Tiny.Core.TinyEnvironment::fixedFrameDeltaTime
	float ___fixedFrameDeltaTime_18;
	// System.Double Unity.Tiny.Core.TinyEnvironment::<frameTime>k__BackingField
	double ___U3CframeTimeU3Ek__BackingField_19;
	// System.Single Unity.Tiny.Core.TinyEnvironment::<frameDeltaTime>k__BackingField
	float ___U3CframeDeltaTimeU3Ek__BackingField_20;
	// System.Int32 Unity.Tiny.Core.TinyEnvironment::<frameNum>k__BackingField
	int32_t ___U3CframeNumU3Ek__BackingField_21;

public:
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_configEntity_15() const { return ___configEntity_15; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_configEntity_15() { return &___configEntity_15; }
	inline void set_configEntity_15(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___configEntity_15 = value;
	}

	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_whiteSpriteEntity_16() const { return ___whiteSpriteEntity_16; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_whiteSpriteEntity_16() { return &___whiteSpriteEntity_16; }
	inline void set_whiteSpriteEntity_16(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___whiteSpriteEntity_16 = value;
	}

	inline bool get_fixedFrameRateEnabled_17() const { return ___fixedFrameRateEnabled_17; }
	inline bool* get_address_of_fixedFrameRateEnabled_17() { return &___fixedFrameRateEnabled_17; }
	inline void set_fixedFrameRateEnabled_17(bool value)
	{
		___fixedFrameRateEnabled_17 = value;
	}

	inline float get_fixedFrameDeltaTime_18() const { return ___fixedFrameDeltaTime_18; }
	inline float* get_address_of_fixedFrameDeltaTime_18() { return &___fixedFrameDeltaTime_18; }
	inline void set_fixedFrameDeltaTime_18(float value)
	{
		___fixedFrameDeltaTime_18 = value;
	}

	inline double get_U3CframeTimeU3Ek__BackingField_19() const { return ___U3CframeTimeU3Ek__BackingField_19; }
	inline double* get_address_of_U3CframeTimeU3Ek__BackingField_19() { return &___U3CframeTimeU3Ek__BackingField_19; }
	inline void set_U3CframeTimeU3Ek__BackingField_19(double value)
	{
		___U3CframeTimeU3Ek__BackingField_19 = value;
	}

	inline float get_U3CframeDeltaTimeU3Ek__BackingField_20() const { return ___U3CframeDeltaTimeU3Ek__BackingField_20; }
	inline float* get_address_of_U3CframeDeltaTimeU3Ek__BackingField_20() { return &___U3CframeDeltaTimeU3Ek__BackingField_20; }
	inline void set_U3CframeDeltaTimeU3Ek__BackingField_20(float value)
	{
		___U3CframeDeltaTimeU3Ek__BackingField_20 = value;
	}

	inline int32_t get_U3CframeNumU3Ek__BackingField_21() const { return ___U3CframeNumU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CframeNumU3Ek__BackingField_21() { return &___U3CframeNumU3Ek__BackingField_21; }
	inline void set_U3CframeNumU3Ek__BackingField_21(int32_t value)
	{
		___U3CframeNumU3Ek__BackingField_21 = value;
	}
};


// Unity.Tiny.Core.WindowSystem
struct  WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB  : public ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B
{
public:

public:
};


// Unity.Tiny.Scenes.SceneStreamingSystem
struct  SceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F  : public ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B
{
public:
	// System.Int32 Unity.Tiny.Scenes.SceneStreamingSystem::m_currentRequestTotal
	int32_t ___m_currentRequestTotal_15;
	// Unity.Entities.World Unity.Tiny.Scenes.SceneStreamingSystem::m_LoadingWorld
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___m_LoadingWorld_16;
	// Unity.Entities.EntityQuery Unity.Tiny.Scenes.SceneStreamingSystem::m_PendingRequestsQuery
	EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * ___m_PendingRequestsQuery_17;

public:
	inline int32_t get_m_currentRequestTotal_15() const { return ___m_currentRequestTotal_15; }
	inline int32_t* get_address_of_m_currentRequestTotal_15() { return &___m_currentRequestTotal_15; }
	inline void set_m_currentRequestTotal_15(int32_t value)
	{
		___m_currentRequestTotal_15 = value;
	}

	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_m_LoadingWorld_16() const { return ___m_LoadingWorld_16; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_m_LoadingWorld_16() { return &___m_LoadingWorld_16; }
	inline void set_m_LoadingWorld_16(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___m_LoadingWorld_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoadingWorld_16), (void*)value);
	}

	inline EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * get_m_PendingRequestsQuery_17() const { return ___m_PendingRequestsQuery_17; }
	inline EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A ** get_address_of_m_PendingRequestsQuery_17() { return &___m_PendingRequestsQuery_17; }
	inline void set_m_PendingRequestsQuery_17(EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * value)
	{
		___m_PendingRequestsQuery_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingRequestsQuery_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Entities.ComponentType[]
struct ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  m_Items[1];

public:
	inline ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  value)
	{
		m_Items[index] = value;
	}
};



// Unity.Entities.World Unity.Entities.DefaultTinyWorldInitialization::InitializeWorld(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_tEEA075348FAEC96EE224554FCDED78254768804E * DefaultTinyWorldInitialization_InitializeWorld_m9A28FEBC54AC016C799AE4122F1121121681B527 (String_t* ___worldName0);
// !!0 Unity.Entities.World::GetOrCreateSystem<Unity.Tiny.Core.TinyEnvironment>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * World_GetOrCreateSystem_TisTinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831_mA0B7401F802ACC9F04890493238D80952FBD5014 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this);
// System.Void Unity.Entities.DefaultTinyWorldInitialization::InitializeSystems(Unity.Entities.World)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTinyWorldInitialization_InitializeSystems_m32A11B62A9AC886A5F6012CB87333B54474319A9 (World_tEEA075348FAEC96EE224554FCDED78254768804E * ___world0);
// System.Void Unity.Collections.NativeLeakDetection::set_Mode(Unity.Collections.NativeLeakDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLeakDetection_set_Mode_m8EECDD9E17D1013AE3B4BCDAE059E5CC34B26FA3 (int32_t ___value0);
// !!0 Unity.Entities.World::GetExistingSystem<Unity.Tiny.Core.WindowSystem>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB * World_GetExistingSystem_TisWindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB_m0B16F0FCF4B9ADDBC36A734974DAEDA2F91F07E7 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this);
// System.Boolean Unity.Tiny.EntryPoint.Program::MainLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46 ();
// System.Void Unity.Tiny.Core.WindowSystem/MainLoopDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainLoopDelegate__ctor_m9202E2CEEBB9C2701EBEA6DE9D2F97D2B70DCFB8 (MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD * __this, RuntimeObject * ___object0, intptr_t ___method1);
// System.Void Unity.Tiny.Debugging.Debug::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m16336BC0BB15472113DDA3EE3B79895A38950356 (String_t* ___log0);
// System.Void Unity.Entities.World::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Dispose_mC2E7D0871CE15C08B05E6CCC69425890586AD96D (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this);
// System.Void Unity.Entities.World::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Update_m3C9D6917CC78A9F2EE69413F4B475AD3D17C2253 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this);
// System.Boolean Unity.Entities.EntityManager::Exists(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityManager_Exists_mE356B5060281CEB7693773EA3DA7514EB8263E28 (EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___entity0);
// System.Void Unity.Entities.EntityManager::DestroyEntity(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityManager_DestroyEntity_mD4595ADAF7D1D70193FF3451CA09C71492E13BFF (EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___entity0);
// Unity.Entities.Entity Unity.Entities.Entity::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  Entity_get_Null_m44C01B711EF4A9DC84D0EDDF2D65A97CA8655224 ();
// Unity.Entities.Entity Unity.Tiny.Scenes.SceneService::LoadConfigAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  SceneService_LoadConfigAsync_m9EA1083D2389D48F1033902261C9E0BA8F2ED701 ();
// !!0 Unity.Entities.World::GetOrCreateSystem<Unity.Tiny.Scenes.SceneStreamingSystem>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F * World_GetOrCreateSystem_TisSceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F_m385453ACDE9D04222FFC6F1EAF36EDD709BB704C (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this);
// System.Void Unity.Entities.ComponentSystemBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSystemBase_Update_m818CC03ED23DA43D53F99249A36B8A313AD725E8 (ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 * __this);
// Unity.Tiny.Scenes.SceneStatus Unity.Tiny.Scenes.SceneService::GetSceneStatus(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneService_GetSceneStatus_m60DB5D8F7D678EB4866F22DB3F9C1707E84678EB (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___scene0);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m2E0BF604BD00AD02BFCB4A8FB6B3DBDA96CABFB6 (RuntimeTypeHandle_t4AEFB4045F601C7B50F59B5483EEE787CC4D967A  ___handle0);
// Unity.Entities.ComponentType Unity.Entities.ComponentType::op_Implicit(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  ComponentType_op_Implicit_mAE1D5C74585497FC2656639CDCC79090C0D10A30 (Type_t * ___type0);
// Unity.Entities.EntityQuery Unity.Entities.EntityManager::CreateEntityQuery(Unity.Entities.ComponentType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * EntityManager_CreateEntityQuery_mFC0B1658B7FD6E4020AEA15022DADA809B883617 (EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * __this, ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528* ___requiredComponents0);
// System.Int32 Unity.Entities.EntityQuery::CalculateLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityQuery_CalculateLength_m088909B91E683BBFAB5C5FF51958FF344DC18207 (EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * __this);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m94D491BE173A7638B8129AF00E590345D0321030 (Exception_t * __this, String_t* ___message0);
// Unity.Collections.NativeArray`1<Unity.Entities.Entity> Unity.Entities.EntityQuery::ToEntityArray(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194  EntityQuery_ToEntityArray_m01E2F243ACFA5144EF6E4BBE42BD362EBB915203 (EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * __this, int32_t ___allocator0);
// !0 Unity.Collections.NativeArray`1<Unity.Entities.Entity>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  NativeArray_1_get_Item_mF43E02320E230973984E02C5A0837B98AB0DEDB5_inline (NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 * __this, int32_t ___index0);
// System.Void Unity.Collections.NativeArray`1<Unity.Entities.Entity>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA1B574D8F5D821FB1829AD2F4B3DF18066A589C5 (NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 * __this);
// System.Void Unity.Tiny.EntryPoint.Program::LoadStartupScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_LoadStartupScenes_m6928FD9C3F50E87F295557BC2EA5C55932860631 ();
// Unity.Entities.DynamicBuffer`1<!!0> Unity.Tiny.Core.TinyEnvironment::GetConfigBufferData<Unity.Tiny.Scenes.StartupScenes>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicBuffer_1_tA406D10AF6E5D2DC36F96DAF0F53758115F1DE54  TinyEnvironment_GetConfigBufferData_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m03086352A88F53793DAD00CF3B8292DFD175A93C (TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * __this);
// Unity.Collections.NativeArray`1<!0> Unity.Entities.DynamicBuffer`1<Unity.Tiny.Scenes.StartupScenes>::ToNativeArray(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E  DynamicBuffer_1_ToNativeArray_m7F9D4932C39F45F99FB9F7B2C57FC428147FF58C (DynamicBuffer_1_tA406D10AF6E5D2DC36F96DAF0F53758115F1DE54 * __this, int32_t ___allocator0);
// !0 Unity.Collections.NativeArray`1<Unity.Tiny.Scenes.StartupScenes>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  NativeArray_1_get_Item_m20D859F56D7A0E40166DD75547ACB8750817E77F_inline (NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E * __this, int32_t ___index0);
// Unity.Entities.Entity Unity.Tiny.Scenes.SceneService::LoadSceneAsync(Unity.Tiny.Scenes.SceneReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  SceneService_LoadSceneAsync_m2EC040BEC8760BA5B1C0483B750EBC87F69214CD (SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  ___sceneReference0);
// System.Void Unity.Collections.NativeArray`1<Unity.Tiny.Scenes.StartupScenes>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mEED5489101BCCB2D04D1446849FF39EAAF281908 (NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E * __this);
// System.Void Unity.Collections.NativeArray`1<Unity.Entities.Entity>::CheckElementReadAccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CheckElementReadAccess_m2871C08A4C149D64F8D53EC1EEDBC8F90B9604CE (NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 * __this, int32_t ___index0);
// !!0 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Entities.Entity>(System.Void*,System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mD4058FECFB42EB3049E7CB85CA5488A3391ACB33_inline (void* ___source0, int32_t ___index1);
// System.Void Unity.Collections.NativeArray`1<Unity.Tiny.Scenes.StartupScenes>::CheckElementReadAccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CheckElementReadAccess_m552ABB85C4D11157966F3EEF33B296C61DC70F1C (NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E * __this, int32_t ___index0);
// !!0 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Tiny.Scenes.StartupScenes>(System.Void*,System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m1AADB54AC79B018F1250F9A41DA690B805E41625_inline (void* ___source0, int32_t ___index1);
// !!0 ForPatching.UnsafeUtility::ReadArrayElement<Unity.Entities.Entity>(System.Void*,System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mA504EE0599765C9F36D4A54465D643022FFE2F00_inline (void* ___source0, int32_t ___index1);
// !!0 ForPatching.UnsafeUtility::ReadArrayElement<Unity.Tiny.Scenes.StartupScenes>(System.Void*,System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m3017CA12C8BAD1EC47195EE31BE0336FE3526BA8_inline (void* ___source0, int32_t ___index1);
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
void* Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage = (void*)sizeof(Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields);
// System.Void Unity.Tiny.EntryPoint.Program::Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_Main_mBD5DDCE6FFAE5457EAAA6239EFB2248027F15935 ()
{
	WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB * V_0 = NULL;
	bool V_1 = false;
	{
		// m_World = DefaultTinyWorldInitialization.InitializeWorld("main");
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_0 = DefaultTinyWorldInitialization_InitializeWorld_m9A28FEBC54AC016C799AE4122F1121121681B527(LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 54628 : 57800));
		((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->set_m_World_0(L_0);
		// m_Environment = m_World.GetOrCreateSystem<TinyEnvironment>();
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_1 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * L_2 = World_GetOrCreateSystem_TisTinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831_mA0B7401F802ACC9F04890493238D80952FBD5014(L_1);
		((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->set_m_Environment_1(L_2);
		// m_BootPhase = BootPhase.Booting;
		((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->set_m_BootPhase_2(0);
		// DefaultTinyWorldInitialization.InitializeSystems(m_World);
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_3 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		DefaultTinyWorldInitialization_InitializeSystems_m32A11B62A9AC886A5F6012CB87333B54474319A9(L_3);
		// NativeLeakDetection.Mode = NativeLeakDetectionMode.Enabled;
		NativeLeakDetection_set_Mode_m8EECDD9E17D1013AE3B4BCDAE059E5CC34B26FA3(0);
		// var windowSystem = m_World.GetExistingSystem<WindowSystem>();
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_4 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB * L_5 = World_GetExistingSystem_TisWindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB_m0B16F0FCF4B9ADDBC36A734974DAEDA2F91F07E7(L_4);
		V_0 = L_5;
		// if (windowSystem != null)
		WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB * L_6 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// windowSystem.InfiniteMainLoop(MainLoop);
		WindowSystem_tF884DB7AB9F209F7CE0A75B5DD0F1CB5EEE024EB * L_8 = V_0;
		intptr_t L_9 = (intptr_t)Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46;
		MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD * L_10 = (MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD *)il2cpp_codegen_object_new(sizeof(MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD), LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 34180 : 68344));
		MainLoopDelegate__ctor_m9202E2CEEBB9C2701EBEA6DE9D2F97D2B70DCFB8(L_10, NULL, (intptr_t)L_9);
		L_10->set_m_ReversePInvokeWrapperPtr_2(reinterpret_cast<void*>(NULL));
		L_10->set_m_IsDelegateOpen_3(true);
		VirtActionInvoker1< MainLoopDelegate_t65672A7855ABA267C6990E10DAF25368580A57BD * >::Invoke(10 /* System.Void Unity.Tiny.Core.WindowSystem::InfiniteMainLoop(Unity.Tiny.Core.WindowSystem/MainLoopDelegate) */, L_8, L_10);
		goto IL_006e;
	}

IL_0061:
	{
		// Debug.Log("No window system found.");
		Debug_Log_m16336BC0BB15472113DDA3EE3B79895A38950356(LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 54648 : 57824));
	}

IL_006e:
	{
		// m_World.Dispose();
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_11 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		World_Dispose_mC2E7D0871CE15C08B05E6CCC69425890586AD96D(L_11);
		// }
		return;
	}
}
// System.Boolean Unity.Tiny.EntryPoint.Program::MainLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46 ()
{
	bool V_0 = false;
	bool V_1 = false;
	EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * V_5 = NULL;
	SceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F * V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * V_9 = NULL;
	bool V_10 = false;
	NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194  V_11;
	il2cpp::utils::MemoryUtils::MemorySet((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_BootPhase_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_2 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		World_Update_m3C9D6917CC78A9F2EE69413F4B475AD3D17C2253(L_2);
		goto IL_01a2;
	}

IL_001f:
	{
		int32_t L_3 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_BootPhase_2();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0083;
		}
	}
	{
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_5 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_6 = L_5->get_m_EntityManager_4();
		V_2 = L_6;
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_7 = V_2;
		TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * L_8 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_Environment_1();
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_9 = L_8->get_configEntity_15();
		bool L_10 = EntityManager_Exists_mE356B5060281CEB7693773EA3DA7514EB8263E28(L_7, L_9);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_12 = V_2;
		TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * L_13 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_Environment_1();
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_14 = L_13->get_configEntity_15();
		EntityManager_DestroyEntity_mD4595ADAF7D1D70193FF3451CA09C71492E13BFF(L_12, L_14);
		TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * L_15 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_Environment_1();
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_16 = Entity_get_Null_m44C01B711EF4A9DC84D0EDDF2D65A97CA8655224();
		L_15->set_configEntity_15(L_16);
	}

IL_006d:
	{
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_17 = SceneService_LoadConfigAsync_m9EA1083D2389D48F1033902261C9E0BA8F2ED701();
		((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->set_m_ConfigScene_3(L_17);
		((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->set_m_BootPhase_2(1);
		goto IL_01a2;
	}

IL_0083:
	{
		int32_t L_18 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_BootPhase_2();
		V_4 = (bool)((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0196;
		}
	}
	{
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_20 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_21 = L_20->get_m_EntityManager_4();
		V_5 = L_21;
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_22 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		SceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F * L_23 = World_GetOrCreateSystem_TisSceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F_m385453ACDE9D04222FFC6F1EAF36EDD709BB704C(L_22);
		V_6 = L_23;
		SceneStreamingSystem_t52ED55FA071881B2261AB91F726389F5BB80788F * L_24 = V_6;
		ComponentSystemBase_Update_m818CC03ED23DA43D53F99249A36B8A313AD725E8(L_24);
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_25 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_ConfigScene_3();
		int32_t L_26 = SceneService_GetSceneStatus_m60DB5D8F7D678EB4866F22DB3F9C1707E84678EB(L_25);
		V_7 = L_26;
		int32_t L_27 = V_7;
		V_8 = (bool)((((int32_t)L_27) == ((int32_t)2))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_017c;
		}
	}
	{
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_29 = V_5;
		ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528* L_30 = (ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528*)(ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528*)SZArrayNew<ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528*>(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 1076 : 2152), sizeof(ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1 ), (uint32_t)1);
		ComponentTypeU5BU5D_t445DBC066E7736B422DBFBBEF7231A59C6E5E528* L_31 = L_30;
		RuntimeTypeHandle_t4AEFB4045F601C7B50F59B5483EEE787CC4D967A  L_32 = { reinterpret_cast<intptr_t> (LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 3348 : 6680)) };
		Type_t * L_33 = Type_GetTypeFromHandle_m2E0BF604BD00AD02BFCB4A8FB6B3DBDA96CABFB6(L_32);
		ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1  L_34 = ComponentType_op_Implicit_mAE1D5C74585497FC2656639CDCC79090C0D10A30(L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (ComponentType_tC4D03CEDBA5BCBA47001797965E7CF939CFBDAF1 )L_34);
		EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * L_35 = EntityManager_CreateEntityQuery_mFC0B1658B7FD6E4020AEA15022DADA809B883617(L_29, L_31);
		V_9 = L_35;
	}

IL_00f5:
	//try - Try blocks are not supported with the DOPS profile
	{ // begin try (depth: 1)
		{
			EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * L_36 = V_9;
			int32_t L_37 = EntityQuery_CalculateLength_m088909B91E683BBFAB5C5FF51958FF344DC18207(L_36);
			V_10 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
			bool L_38 = V_10;
			if (!L_38)
			{
				goto IL_0112;
			}
		}

IL_0106:
		{
			Exception_t * L_39 = (Exception_t *)il2cpp_codegen_object_new(sizeof(Exception_t), LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 96 : 192));
			Exception__ctor_m94D491BE173A7638B8129AF00E590345D0321030(L_39, LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 54704 : 57888));
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, &Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46_RuntimeMethod_var);
		}

IL_0112:
		{
			EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * L_40 = V_9;
			NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194  L_41 = EntityQuery_ToEntityArray_m01E2F243ACFA5144EF6E4BBE42BD362EBB915203(L_40, 2);
			V_11 = L_41;
		}

IL_011c:
		//try - Try blocks are not supported with the DOPS profile
		{ // begin try (depth: 2)
			{
				int32_t L_42 = (&V_11)->get_m_Length_1();
				V_12 = (bool)((((int32_t)L_42) > ((int32_t)1))? 1 : 0);
				bool L_43 = V_12;
				if (!L_43)
				{
					goto IL_0139;
				}
			}

IL_012d:
			{
				Exception_t * L_44 = (Exception_t *)il2cpp_codegen_object_new(sizeof(Exception_t), LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 96 : 192));
				Exception__ctor_m94D491BE173A7638B8129AF00E590345D0321030(L_44, LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 54796 : 57984));
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, &Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46_RuntimeMethod_var);
			}

IL_0139:
			{
				TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * L_45 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_Environment_1();
				Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_46 = NativeArray_1_get_Item_mF43E02320E230973984E02C5A0837B98AB0DEDB5_inline((NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 *)(&V_11), 0);
				L_45->set_configEntity_15(L_46);
				IL2CPP_LEAVE(0x15D, FINALLY_014e);
			}
		} // end try (depth: 2)
		/* Catch blocks are not supported with the Tiny profile
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_014e;
		}
		*/

FINALLY_014e:
		{ // begin finally (depth: 2)
			NativeArray_1_Dispose_mA1B574D8F5D821FB1829AD2F4B3DF18066A589C5((NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 *)(&V_11));
			IL2CPP_END_FINALLY(334)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(334)
		{
			IL2CPP_JUMP_TBL(0x15D, IL_015d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_015d:
		{
			IL2CPP_LEAVE(0x16D, FINALLY_0160);
		}
	} // end try (depth: 1)
	/* Catch blocks are not supported with the Tiny profile
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0160;
	}
	*/

FINALLY_0160:
	{ // begin finally (depth: 1)
		{
			EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * L_47 = V_9;
			if (!L_47)
			{
				goto IL_016c;
			}
		}

IL_0164:
		{
			EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * L_48 = V_9;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 1236 : 2472), L_48);
		}

IL_016c:
		{
			IL2CPP_END_FINALLY(352)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(352)
	{
		IL2CPP_JUMP_TBL(0x16D, IL_016d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016d:
	{
		Program_LoadStartupScenes_m6928FD9C3F50E87F295557BC2EA5C55932860631();
		((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->set_m_BootPhase_2(2);
		goto IL_0193;
	}

IL_017c:
	{
		int32_t L_49 = V_7;
		V_13 = (bool)((((int32_t)L_49) == ((int32_t)3))? 1 : 0);
		bool L_50 = V_13;
		if (!L_50)
		{
			goto IL_0193;
		}
	}
	{
		Exception_t * L_51 = (Exception_t *)il2cpp_codegen_object_new(sizeof(Exception_t), LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 96 : 192));
		Exception__ctor_m94D491BE173A7638B8129AF00E590345D0321030(L_51, LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 54944 : 58136));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, &Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46_RuntimeMethod_var);
	}

IL_0193:
	{
		goto IL_01a2;
	}

IL_0196:
	{
		Exception_t * L_52 = (Exception_t *)il2cpp_codegen_object_new(sizeof(Exception_t), LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 96 : 192));
		Exception__ctor_m94D491BE173A7638B8129AF00E590345D0321030(L_52, LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 55044 : 58240));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, &Program_MainLoop_m282954213F14E9D3B47DF71802757BBFC4DDBB46_RuntimeMethod_var);
	}

IL_01a2:
	{
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_53 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_World_0();
		bool L_54 = L_53->get_U3CQuitUpdateU3Ek__BackingField_10();
		V_14 = (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_14;
		return L_55;
	}
}
// System.Void Unity.Tiny.EntryPoint.Program::LoadStartupScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_LoadStartupScenes_m6928FD9C3F50E87F295557BC2EA5C55932860631 ()
{
	NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	DynamicBuffer_1_tA406D10AF6E5D2DC36F96DAF0F53758115F1DE54  V_1;
	il2cpp::utils::MemoryUtils::MemorySet((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		TinyEnvironment_t0AB7559CB6D244555C15EC151D5739A14423F831 * L_0 = ((Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields*)Program_t3CC9DBD0C454A0AD538CF83B54032E38A1B3A2FD_StaticFields_Storage)->get_m_Environment_1();
		DynamicBuffer_1_tA406D10AF6E5D2DC36F96DAF0F53758115F1DE54  L_1 = TinyEnvironment_GetConfigBufferData_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m03086352A88F53793DAD00CF3B8292DFD175A93C(L_0);
		V_1 = L_1;
		NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E  L_2 = DynamicBuffer_1_ToNativeArray_m7F9D4932C39F45F99FB9F7B2C57FC428147FF58C((DynamicBuffer_1_tA406D10AF6E5D2DC36F96DAF0F53758115F1DE54 *)(&V_1), 2);
		V_0 = L_2;
	}

IL_0015:
	//try - Try blocks are not supported with the DOPS profile
	{ // begin try (depth: 1)
		{
			V_2 = 0;
			goto IL_0033;
		}

IL_001a:
		{
			int32_t L_3 = V_2;
			StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  L_4 = NativeArray_1_get_Item_m20D859F56D7A0E40166DD75547ACB8750817E77F_inline((NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E *)(&V_0), L_3);
			SceneReference_t0B4C9E0797D70A367BBE9339DFD0D054570B09A8  L_5 = L_4.get_SceneReference_0();
			SceneService_LoadSceneAsync_m2EC040BEC8760BA5B1C0483B750EBC87F69214CD(L_5);
			int32_t L_6 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_0033:
		{
			int32_t L_7 = V_2;
			int32_t L_8 = (&V_0)->get_m_Length_1();
			V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
			bool L_9 = V_3;
			if (L_9)
			{
				goto IL_001a;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0044);
		}
	} // end try (depth: 1)
	/* Catch blocks are not supported with the Tiny profile
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}
	*/

FINALLY_0044:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_mEED5489101BCCB2D04D1446849FF39EAAF281908((NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E *)(&V_0));
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  NativeArray_1_get_Item_mF43E02320E230973984E02C5A0837B98AB0DEDB5_inline (NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 * __this, int32_t ___index0)
{
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NativeArray_1_CheckElementReadAccess_m2871C08A4C149D64F8D53EC1EEDBC8F90B9604CE((NativeArray_1_tD7FD06B0F58E3DDD09164CDBAB18B25C85137194 *)__this, L_0);
		void* L_1 = __this->get_m_Buffer_0();
		int32_t L_2 = ___index0;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_3 = UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mD4058FECFB42EB3049E7CB85CA5488A3391ACB33_inline((void*)(void*)L_1, L_2);
		V_0 = L_3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  NativeArray_1_get_Item_m20D859F56D7A0E40166DD75547ACB8750817E77F_inline (NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E * __this, int32_t ___index0)
{
	StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NativeArray_1_CheckElementReadAccess_m552ABB85C4D11157966F3EEF33B296C61DC70F1C((NativeArray_1_t411B92943F27C328E0CBB289F9EB3B6842649E8E *)__this, L_0);
		void* L_1 = __this->get_m_Buffer_0();
		int32_t L_2 = ___index0;
		StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  L_3 = UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m1AADB54AC79B018F1250F9A41DA690B805E41625_inline((void*)(void*)L_1, L_2);
		V_0 = L_3;
		StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mD4058FECFB42EB3049E7CB85CA5488A3391ACB33_inline (void* ___source0, int32_t ___index1)
{
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_2 = UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mA504EE0599765C9F36D4A54465D643022FFE2F00_inline((void*)(void*)L_0, L_1);
		V_0 = L_2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m1AADB54AC79B018F1250F9A41DA690B805E41625_inline (void* ___source0, int32_t ___index1)
{
	StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  L_2 = UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m3017CA12C8BAD1EC47195EE31BE0336FE3526BA8_inline((void*)(void*)L_0, L_1);
		V_0 = L_2;
		StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  UnsafeUtility_ReadArrayElement_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_mA504EE0599765C9F36D4A54465D643022FFE2F00_inline (void* ___source0, int32_t ___index1)
{
	{
		// throw new NotImplementedException("Patching this method failed");
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 );
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_3 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  UnsafeUtility_ReadArrayElement_TisStartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F_m3017CA12C8BAD1EC47195EE31BE0336FE3526BA8_inline (void* ___source0, int32_t ___index1)
{
	{
		// throw new NotImplementedException("Patching this method failed");
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F );
		StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F  L_3 = (*(StartupScenes_t47691003BC180D1BE9FF1ADD8BAEBF6F86FA010F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
