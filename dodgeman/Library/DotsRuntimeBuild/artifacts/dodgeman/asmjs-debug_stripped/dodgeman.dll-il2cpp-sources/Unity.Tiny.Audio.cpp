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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData)(obj);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData)(obj, p1);
	}
};

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
// Unity.Entities.Archetype
struct Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635;
// Unity.Entities.ComponentJobSafetyManager
struct ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500;
// Unity.Entities.ComponentSystem
struct ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1;
// Unity.Entities.EntityComponentStore
struct EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489;
// Unity.Entities.EntityGroupManager
struct EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56;
// Unity.Entities.EntityManager
struct EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14;
// Unity.Entities.EntityManager/EntityManagerDebug
struct EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028;
// Unity.Entities.EntityQuery
struct EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A;
// Unity.Entities.EntityQueryBuilder/F_ED`1<Unity.Tiny.Audio.AudioSource>
struct F_ED_1_tD8E2826E0B1A6CC6F3F5FB6068C10285268DEC92;
// Unity.Entities.EntityQueryBuilder/F_ED`1<Unity.Tiny.Audio.AudioSourceStart>
struct F_ED_1_t3D529324D802FC88F144E279B46A4E66E5921D16;
// Unity.Entities.EntityQueryBuilder/F_ED`1<Unity.Tiny.Audio.AudioSourceStop>
struct F_ED_1_tA435FA70B7FFFBD717BA934C20CD4908C8F6BE41;
// Unity.Entities.EntityQueryCache
struct EntityQueryCache_tBF03E27F1A0470B7FD294E76B1967D7DA5D54047;
// Unity.Entities.EntityQuery[]
struct EntityQueryU5BU5D_tC8EA495C49EAC71A9E1F2F75CA7B087CEABBA8B1;
// Unity.Entities.ManagedComponentStore
struct ManagedComponentStore_t16BE75C432C8CC59F3672EE6CBA589613C4CF9E4;
// Unity.Entities.World
struct World_tEEA075348FAEC96EE224554FCDED78254768804E;
// Unity.Tiny.Audio.AudioSystem
struct AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF;

IL2CPP_EXTERN_C const RuntimeMethod AudioSystem_U3COnUpdateU3Eb__7_0_m61A9A9026D6CCB5177E9A302F0A614ACBC23A2AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AudioSystem_U3COnUpdateU3Eb__7_1_m22679CA133E2A7C33A57BA8A7E3B179C520F5ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AudioSystem_U3COnUpdateU3Eb__7_2_mF48C826F8CC6C901FEDC5BF082A0794EF5238F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod ComponentSystem__ctor_mC248FF25EA55C4B49B251E08FBDE68FA01D98F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod ComponentSystem_get_Entities_m42D1E50856957781D7B9754EBDC8B324FA21CC95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityCommandBuffer_Dispose_mEAD0561873FC429DEC885758B3FF29D29A46A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityCommandBuffer_Playback_mE8B23D86CA95819D08B99AD7DB4BC438854BB9F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityCommandBuffer_RemoveComponent_TisAudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696_m67F936FE3FC78D46C302B07E9DE6AFD5E3509122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityCommandBuffer_RemoveComponent_TisAudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045_m7A15F8C6CA2E239EB9F9E3A45E0EB9D2A25456D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityCommandBuffer__ctor_m4A83B4BC57A1BA72A8F5B5D64899DE0FF1E5D56C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityQueryBuilder_ForEach_TisAudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696_m0C5BE70E85259B4981FEAF936F9E9E610DCD9AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityQueryBuilder_ForEach_TisAudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045_mA713C1F7EB7D5B272D9452ECC57AD0A89DEB396D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityQueryBuilder_ForEach_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mC81D9D149ABE7C51413CB2452E55E9B22D4DE333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod EntityQueryBuilder_WithAll_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mADB09B62662D278DC285DD28602FD72910AB2FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod F_ED_1__ctor_m14CBFAD19F6218CDED60F865E707477AD86C93AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod F_ED_1__ctor_mAA2A8DE334399169BC2C3A36232FB945130B2A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod F_ED_1__ctor_mD6B6B002D5EAA827269EAA7C9BA4B71F4D0E7CE1_RuntimeMethod_var;
struct Archetype_t9AABCD1D1DA809E18167625CB364DEA6D03F3635 ;
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 ;
struct EntityComponentStore_t4B402FF577DE7D13E6B8352C96FE1BBF6AF33489 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t937F8509717FA771CFC4241C46281D2AAD6256A4 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// Unity.Collections.ResizableArray64Byte`1_<m_Buffer>e__FixedBuffer<System.Int32>
struct  U3Cm_BufferU3Ee__FixedBuffer_t569F716244377B4EFDC53DFF46C45567418DFFB9 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Collections.ResizableArray64Byte`1_<m_Buffer>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3Cm_BufferU3Ee__FixedBuffer_t288B18FB5CFAB0BD09BE968161639506F1A1F697__padding[60];
	};

public:
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.ResizableArray64Byte`1/<m_Buffer>e__FixedBuffer
#ifndef U3Cm_BufferU3Ee__FixedBuffer_t288B18FB5CFAB0BD09BE968161639506F1A1F697_marshaled_pinvoke_define
#define U3Cm_BufferU3Ee__FixedBuffer_t288B18FB5CFAB0BD09BE968161639506F1A1F697_marshaled_pinvoke_define
struct U3Cm_BufferU3Ee__FixedBuffer_t288B18FB5CFAB0BD09BE968161639506F1A1F697_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField_0;
		};
		uint8_t U3Cm_BufferU3Ee__FixedBuffer_t288B18FB5CFAB0BD09BE968161639506F1A1F697__padding[60];
	};
};
#endif

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


// Unity.Tiny.Audio.AudioClipLoadFromFile
struct  AudioClipLoadFromFile_t0278C41A5B60D6324B9F7DEB192B3E32D8F94374 
{
public:
	// System.Int32 Unity.Tiny.Audio.AudioClipLoadFromFile::dummy
	int32_t ___dummy_0;

public:
	inline int32_t get_dummy_0() const { return ___dummy_0; }
	inline int32_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(int32_t value)
	{
		___dummy_0 = value;
	}
};


// Unity.Tiny.Audio.AudioClipLoadFromFileAudioFile
struct  AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0 
{
public:
	// System.Char Unity.Tiny.Audio.AudioClipLoadFromFileAudioFile::s
	Il2CppChar ___s_0;

public:
	inline Il2CppChar get_s_0() const { return ___s_0; }
	inline Il2CppChar* get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(Il2CppChar value)
	{
		___s_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Tiny.Audio.AudioClipLoadFromFileAudioFile
struct AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshaled_pinvoke
{
	uint8_t ___s_0;
};

// Unity.Tiny.Audio.AudioConfig
struct  AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198 
{
public:
	// System.Boolean Unity.Tiny.Audio.AudioConfig::initialized
	bool ___initialized_0;
	// System.Boolean Unity.Tiny.Audio.AudioConfig::paused
	bool ___paused_1;
	// System.Boolean Unity.Tiny.Audio.AudioConfig::unlocked
	bool ___unlocked_2;

public:
	inline bool get_initialized_0() const { return ___initialized_0; }
	inline bool* get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(bool value)
	{
		___initialized_0 = value;
	}

	inline bool get_paused_1() const { return ___paused_1; }
	inline bool* get_address_of_paused_1() { return &___paused_1; }
	inline void set_paused_1(bool value)
	{
		___paused_1 = value;
	}

	inline bool get_unlocked_2() const { return ___unlocked_2; }
	inline bool* get_address_of_unlocked_2() { return &___unlocked_2; }
	inline void set_unlocked_2(bool value)
	{
		___unlocked_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Tiny.Audio.AudioConfig
struct AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshaled_pinvoke
{
	int32_t ___initialized_0;
	int32_t ___paused_1;
	int32_t ___unlocked_2;
};

// Unity.Tiny.Audio.AudioSourceStart
struct  AudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696 
{
public:
	// System.Int32 Unity.Tiny.Audio.AudioSourceStart::dummy
	int32_t ___dummy_0;

public:
	inline int32_t get_dummy_0() const { return ___dummy_0; }
	inline int32_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(int32_t value)
	{
		___dummy_0 = value;
	}
};


// Unity.Tiny.Audio.AudioSourceStop
struct  AudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045 
{
public:
	// System.Int32 Unity.Tiny.Audio.AudioSourceStop::dummy
	int32_t ___dummy_0;

public:
	inline int32_t get_dummy_0() const { return ___dummy_0; }
	inline int32_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(int32_t value)
	{
		___dummy_0 = value;
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


// Unity.Collections.ResizableArray64Byte`1<System.Int32>
struct  ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E 
{
public:
	// System.Int32 Unity.Collections.ResizableArray64Byte`1::m_Length
	int32_t ___m_Length_0;
	// Unity.Collections.ResizableArray64Byte`1_<m_Buffer>e__FixedBuffer<T> Unity.Collections.ResizableArray64Byte`1::m_Buffer
	U3Cm_BufferU3Ee__FixedBuffer_t569F716244377B4EFDC53DFF46C45567418DFFB9  ___m_Buffer_1;

public:
	inline int32_t get_m_Length_0() const { return ___m_Length_0; }
	inline int32_t* get_address_of_m_Length_0() { return &___m_Length_0; }
	inline void set_m_Length_0(int32_t value)
	{
		___m_Length_0 = value;
	}

	inline U3Cm_BufferU3Ee__FixedBuffer_t569F716244377B4EFDC53DFF46C45567418DFFB9  get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline U3Cm_BufferU3Ee__FixedBuffer_t569F716244377B4EFDC53DFF46C45567418DFFB9 * get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(U3Cm_BufferU3Ee__FixedBuffer_t569F716244377B4EFDC53DFF46C45567418DFFB9  value)
	{
		___m_Buffer_1 = value;
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


// Unity.Entities.EntityQueryOptions
struct  EntityQueryOptions_t2D379A7B2B5807E6590784DB518814948E59E3FC 
{
public:
	// System.Int32 Unity.Entities.EntityQueryOptions::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Tiny.Audio.AudioClipStatus
struct  AudioClipStatus_tBEE3DD213B434A3E29A938CA3B68661015531C34 
{
public:
	// System.Int32 Unity.Tiny.Audio.AudioClipStatus::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Tiny.Audio.AudioSource
struct  AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF 
{
public:
	// Unity.Entities.Entity Unity.Tiny.Audio.AudioSource::clip
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___clip_0;
	// System.Single Unity.Tiny.Audio.AudioSource::volume
	float ___volume_1;
	// System.Boolean Unity.Tiny.Audio.AudioSource::loop
	bool ___loop_2;
	// System.Boolean Unity.Tiny.Audio.AudioSource::<isPlaying>k__BackingField
	bool ___U3CisPlayingU3Ek__BackingField_3;

public:
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_clip_0() const { return ___clip_0; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___clip_0 = value;
	}

	inline float get_volume_1() const { return ___volume_1; }
	inline float* get_address_of_volume_1() { return &___volume_1; }
	inline void set_volume_1(float value)
	{
		___volume_1 = value;
	}

	inline bool get_loop_2() const { return ___loop_2; }
	inline bool* get_address_of_loop_2() { return &___loop_2; }
	inline void set_loop_2(bool value)
	{
		___loop_2 = value;
	}

	inline bool get_U3CisPlayingU3Ek__BackingField_3() const { return ___U3CisPlayingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisPlayingU3Ek__BackingField_3() { return &___U3CisPlayingU3Ek__BackingField_3; }
	inline void set_U3CisPlayingU3Ek__BackingField_3(bool value)
	{
		___U3CisPlayingU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Tiny.Audio.AudioSource
struct AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshaled_pinvoke
{
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___clip_0;
	float ___volume_1;
	int32_t ___loop_2;
	int32_t ___U3CisPlayingU3Ek__BackingField_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:

public:
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

// Unity.Entities.EntityQueryBuilder
struct  EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB 
{
public:
	// Unity.Entities.ComponentSystem Unity.Entities.EntityQueryBuilder::m_System
	ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * ___m_System_0;
	// System.UInt32 Unity.Entities.EntityQueryBuilder::m_AnyWritableBitField
	uint32_t ___m_AnyWritableBitField_1;
	// System.UInt32 Unity.Entities.EntityQueryBuilder::m_AllWritableBitField
	uint32_t ___m_AllWritableBitField_2;
	// Unity.Collections.ResizableArray64Byte`1<System.Int32> Unity.Entities.EntityQueryBuilder::m_Any
	ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  ___m_Any_3;
	// Unity.Collections.ResizableArray64Byte`1<System.Int32> Unity.Entities.EntityQueryBuilder::m_None
	ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  ___m_None_4;
	// Unity.Collections.ResizableArray64Byte`1<System.Int32> Unity.Entities.EntityQueryBuilder::m_All
	ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  ___m_All_5;
	// Unity.Entities.EntityQueryOptions Unity.Entities.EntityQueryBuilder::m_Options
	int32_t ___m_Options_6;
	// Unity.Entities.EntityQuery Unity.Entities.EntityQueryBuilder::m_Query
	EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * ___m_Query_7;

public:
	inline ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * get_m_System_0() const { return ___m_System_0; }
	inline ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B ** get_address_of_m_System_0() { return &___m_System_0; }
	inline void set_m_System_0(ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * value)
	{
		___m_System_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_System_0), (void*)value);
	}

	inline uint32_t get_m_AnyWritableBitField_1() const { return ___m_AnyWritableBitField_1; }
	inline uint32_t* get_address_of_m_AnyWritableBitField_1() { return &___m_AnyWritableBitField_1; }
	inline void set_m_AnyWritableBitField_1(uint32_t value)
	{
		___m_AnyWritableBitField_1 = value;
	}

	inline uint32_t get_m_AllWritableBitField_2() const { return ___m_AllWritableBitField_2; }
	inline uint32_t* get_address_of_m_AllWritableBitField_2() { return &___m_AllWritableBitField_2; }
	inline void set_m_AllWritableBitField_2(uint32_t value)
	{
		___m_AllWritableBitField_2 = value;
	}

	inline ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  get_m_Any_3() const { return ___m_Any_3; }
	inline ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E * get_address_of_m_Any_3() { return &___m_Any_3; }
	inline void set_m_Any_3(ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  value)
	{
		___m_Any_3 = value;
	}

	inline ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  get_m_None_4() const { return ___m_None_4; }
	inline ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E * get_address_of_m_None_4() { return &___m_None_4; }
	inline void set_m_None_4(ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  value)
	{
		___m_None_4 = value;
	}

	inline ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  get_m_All_5() const { return ___m_All_5; }
	inline ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E * get_address_of_m_All_5() { return &___m_All_5; }
	inline void set_m_All_5(ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  value)
	{
		___m_All_5 = value;
	}

	inline int32_t get_m_Options_6() const { return ___m_Options_6; }
	inline int32_t* get_address_of_m_Options_6() { return &___m_Options_6; }
	inline void set_m_Options_6(int32_t value)
	{
		___m_Options_6 = value;
	}

	inline EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * get_m_Query_7() const { return ___m_Query_7; }
	inline EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A ** get_address_of_m_Query_7() { return &___m_Query_7; }
	inline void set_m_Query_7(EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * value)
	{
		___m_Query_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Query_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityQueryBuilder
struct EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB_marshaled_pinvoke
{
	ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * ___m_System_0;
	uint32_t ___m_AnyWritableBitField_1;
	uint32_t ___m_AllWritableBitField_2;
	ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  ___m_Any_3;
	ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  ___m_None_4;
	ResizableArray64Byte_1_t08594A140E6162A658A720F5F6F26FD0E45BCA6E  ___m_All_5;
	int32_t ___m_Options_6;
	EntityQuery_t76BED15925C813EF17FA4A29A4D9262AB62AD76A * ___m_Query_7;
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

// Unity.Tiny.Audio.AudioClip
struct  AudioClip_t48F14DCC4C897CB30E21E336B2CDB01B8DD004B9 
{
public:
	// Unity.Tiny.Audio.AudioClipStatus Unity.Tiny.Audio.AudioClip::status
	int32_t ___status_0;

public:
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
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


// Unity.Entities.EntityQueryBuilder_F_ED`1<Unity.Tiny.Audio.AudioSource>
struct  F_ED_1_tD8E2826E0B1A6CC6F3F5FB6068C10285268DEC92  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Entities.EntityQueryBuilder_F_ED`1<Unity.Tiny.Audio.AudioSourceStart>
struct  F_ED_1_t3D529324D802FC88F144E279B46A4E66E5921D16  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Entities.EntityQueryBuilder_F_ED`1<Unity.Tiny.Audio.AudioSourceStop>
struct  F_ED_1_tA435FA70B7FFFBD717BA934C20CD4908C8F6BE41  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Tiny.Audio.AudioSystem
struct  AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF  : public ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Unity.Entities.EntityCommandBuffer::.ctor(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityCommandBuffer__ctor_m4A83B4BC57A1BA72A8F5B5D64899DE0FF1E5D56C (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * __this, int32_t ___label0);
// Unity.Entities.EntityQueryBuilder Unity.Entities.ComponentSystem::get_Entities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  ComponentSystem_get_Entities_m42D1E50856957781D7B9754EBDC8B324FA21CC95 (ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * __this);
// Unity.Entities.EntityQueryBuilder Unity.Entities.EntityQueryBuilder::WithAll<Unity.Tiny.Audio.AudioSource>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  EntityQueryBuilder_WithAll_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mADB09B62662D278DC285DD28602FD72910AB2FF6 (EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB * __this);
// System.Void Unity.Tiny.Audio.AudioSystem::<OnUpdate>b__7_0(Unity.Entities.Entity,Unity.Tiny.Audio.AudioSourceStop&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_U3COnUpdateU3Eb__7_0_m61A9A9026D6CCB5177E9A302F0A614ACBC23A2AA (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0, AudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045 * ___tag1);
// System.Void Unity.Entities.EntityQueryBuilder/F_ED`1<Unity.Tiny.Audio.AudioSourceStop>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F_ED_1__ctor_mAA2A8DE334399169BC2C3A36232FB945130B2A84 (F_ED_1_tA435FA70B7FFFBD717BA934C20CD4908C8F6BE41 * __this, RuntimeObject * ___object0, intptr_t ___method1);
// System.Void Unity.Entities.EntityQueryBuilder::ForEach<Unity.Tiny.Audio.AudioSourceStop>(Unity.Entities.EntityQueryBuilder/F_ED`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityQueryBuilder_ForEach_TisAudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045_mA713C1F7EB7D5B272D9452ECC57AD0A89DEB396D (EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB * __this, F_ED_1_tA435FA70B7FFFBD717BA934C20CD4908C8F6BE41 * ___action0);
// System.Void Unity.Entities.EntityCommandBuffer::Playback(Unity.Entities.EntityManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityCommandBuffer_Playback_mE8B23D86CA95819D08B99AD7DB4BC438854BB9F0 (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * __this, EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * ___mgr0);
// System.Void Unity.Entities.EntityCommandBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityCommandBuffer_Dispose_mEAD0561873FC429DEC885758B3FF29D29A46A586 (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * __this);
// System.Void Unity.Tiny.Audio.AudioSystem::<OnUpdate>b__7_1(Unity.Entities.Entity,Unity.Tiny.Audio.AudioSourceStart&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_U3COnUpdateU3Eb__7_1_m22679CA133E2A7C33A57BA8A7E3B179C520F5ECA (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0, AudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696 * ___tag1);
// System.Void Unity.Entities.EntityQueryBuilder/F_ED`1<Unity.Tiny.Audio.AudioSourceStart>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F_ED_1__ctor_mD6B6B002D5EAA827269EAA7C9BA4B71F4D0E7CE1 (F_ED_1_t3D529324D802FC88F144E279B46A4E66E5921D16 * __this, RuntimeObject * ___object0, intptr_t ___method1);
// System.Void Unity.Entities.EntityQueryBuilder::ForEach<Unity.Tiny.Audio.AudioSourceStart>(Unity.Entities.EntityQueryBuilder/F_ED`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityQueryBuilder_ForEach_TisAudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696_m0C5BE70E85259B4981FEAF936F9E9E610DCD9AF9 (EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB * __this, F_ED_1_t3D529324D802FC88F144E279B46A4E66E5921D16 * ___action0);
// System.Void Unity.Tiny.Audio.AudioSystem::<OnUpdate>b__7_2(Unity.Entities.Entity,Unity.Tiny.Audio.AudioSource&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_U3COnUpdateU3Eb__7_2_mF48C826F8CC6C901FEDC5BF082A0794EF5238F72 (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0, AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF * ___tag1);
// System.Void Unity.Entities.EntityQueryBuilder/F_ED`1<Unity.Tiny.Audio.AudioSource>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F_ED_1__ctor_m14CBFAD19F6218CDED60F865E707477AD86C93AB (F_ED_1_tD8E2826E0B1A6CC6F3F5FB6068C10285268DEC92 * __this, RuntimeObject * ___object0, intptr_t ___method1);
// System.Void Unity.Entities.EntityQueryBuilder::ForEach<Unity.Tiny.Audio.AudioSource>(Unity.Entities.EntityQueryBuilder/F_ED`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityQueryBuilder_ForEach_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mC81D9D149ABE7C51413CB2452E55E9B22D4DE333 (EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB * __this, F_ED_1_tD8E2826E0B1A6CC6F3F5FB6068C10285268DEC92 * ___action0);
// System.Void Unity.Entities.ComponentSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSystem__ctor_mC248FF25EA55C4B49B251E08FBDE68FA01D98F1E (ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B * __this);
// System.Void Unity.Entities.EntityCommandBuffer::RemoveComponent<Unity.Tiny.Audio.AudioSourceStop>(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityCommandBuffer_RemoveComponent_TisAudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045_m7A15F8C6CA2E239EB9F9E3A45E0EB9D2A25456D7 (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0);
// System.Void Unity.Entities.EntityCommandBuffer::RemoveComponent<Unity.Tiny.Audio.AudioSourceStart>(Unity.Entities.Entity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityCommandBuffer_RemoveComponent_TisAudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696_m67F936FE3FC78D46C302B07E9DE6AFD5E3509122 (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Tiny.Audio.AudioClipLoadFromFileAudioFile
IL2CPP_EXTERN_C void AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshal_pinvoke(const AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0& unmarshaled, AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshaled_pinvoke& marshaled)
{
	marshaled.___s_0 = static_cast<uint8_t>(unmarshaled.get_s_0());
}
IL2CPP_EXTERN_C void AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshal_pinvoke_back(const AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshaled_pinvoke& marshaled, AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0& unmarshaled)
{
	Il2CppChar unmarshaled_s_temp_0 = 0x0;
	unmarshaled_s_temp_0 = static_cast<Il2CppChar>(marshaled.___s_0);
	unmarshaled.set_s_0(unmarshaled_s_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.Tiny.Audio.AudioClipLoadFromFileAudioFile
IL2CPP_EXTERN_C void AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshal_pinvoke_cleanup(AudioClipLoadFromFileAudioFile_tB5E7E832B0DCFF00A089D8B7D96E2CE8FCDD6CD0_marshaled_pinvoke& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Tiny.Audio.AudioConfig
IL2CPP_EXTERN_C void AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshal_pinvoke(const AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198& unmarshaled, AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshaled_pinvoke& marshaled)
{
	marshaled.___initialized_0 = static_cast<int32_t>(unmarshaled.get_initialized_0());
	marshaled.___paused_1 = static_cast<int32_t>(unmarshaled.get_paused_1());
	marshaled.___unlocked_2 = static_cast<int32_t>(unmarshaled.get_unlocked_2());
}
IL2CPP_EXTERN_C void AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshal_pinvoke_back(const AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshaled_pinvoke& marshaled, AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198& unmarshaled)
{
	bool unmarshaled_initialized_temp_0 = false;
	unmarshaled_initialized_temp_0 = static_cast<bool>(marshaled.___initialized_0);
	unmarshaled.set_initialized_0(unmarshaled_initialized_temp_0);
	bool unmarshaled_paused_temp_1 = false;
	unmarshaled_paused_temp_1 = static_cast<bool>(marshaled.___paused_1);
	unmarshaled.set_paused_1(unmarshaled_paused_temp_1);
	bool unmarshaled_unlocked_temp_2 = false;
	unmarshaled_unlocked_temp_2 = static_cast<bool>(marshaled.___unlocked_2);
	unmarshaled.set_unlocked_2(unmarshaled_unlocked_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.Tiny.Audio.AudioConfig
IL2CPP_EXTERN_C void AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshal_pinvoke_cleanup(AudioConfig_t3AEE0751C7B7EF5E0492C1AD9831D2B06010A198_marshaled_pinvoke& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Tiny.Audio.AudioSource
IL2CPP_EXTERN_C void AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshal_pinvoke(const AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF& unmarshaled, AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshaled_pinvoke& marshaled)
{
	marshaled.___clip_0 = unmarshaled.get_clip_0();
	marshaled.___volume_1 = unmarshaled.get_volume_1();
	marshaled.___loop_2 = static_cast<int32_t>(unmarshaled.get_loop_2());
	marshaled.___U3CisPlayingU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CisPlayingU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshal_pinvoke_back(const AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshaled_pinvoke& marshaled, AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF& unmarshaled)
{
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  unmarshaled_clip_temp_0;
	il2cpp::utils::MemoryUtils::MemorySet((&unmarshaled_clip_temp_0), 0, sizeof(unmarshaled_clip_temp_0));
	unmarshaled_clip_temp_0 = marshaled.___clip_0;
	unmarshaled.set_clip_0(unmarshaled_clip_temp_0);
	float unmarshaled_volume_temp_1 = 0.0f;
	unmarshaled_volume_temp_1 = marshaled.___volume_1;
	unmarshaled.set_volume_1(unmarshaled_volume_temp_1);
	bool unmarshaled_loop_temp_2 = false;
	unmarshaled_loop_temp_2 = static_cast<bool>(marshaled.___loop_2);
	unmarshaled.set_loop_2(unmarshaled_loop_temp_2);
	bool unmarshaled_U3CisPlayingU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CisPlayingU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CisPlayingU3Ek__BackingField_3);
	unmarshaled.set_U3CisPlayingU3Ek__BackingField_3(unmarshaled_U3CisPlayingU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Tiny.Audio.AudioSource
IL2CPP_EXTERN_C void AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshal_pinvoke_cleanup(AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_marshaled_pinvoke& marshaled)
{
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
// System.Void Unity.Tiny.Audio.AudioSystem::OnCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_OnCreate_m74D41B6BB68B05ACC21A5D5047AC07DA6BAFEF96 (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this)
{
	{
		// InitAudioSystem();
		VirtActionInvoker0::Invoke(10 /* System.Void Unity.Tiny.Audio.AudioSystem::InitAudioSystem() */, __this);
		// }
		return;
	}
}
// System.Void Unity.Tiny.Audio.AudioSystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_OnDestroy_m6AA7005FF261B26A6A7D4769F2FF0FD7BC2200D7 (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this)
{
	{
		return;
	}
}
// System.Void Unity.Tiny.Audio.AudioSystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_OnUpdate_mE5252FC963FC9E6EE39B6B75ECDA9A1F2341AA25 (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this)
{
	EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  V_1;
	il2cpp::utils::MemoryUtils::MemorySet((&V_1), 0, sizeof(V_1));
	EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  V_2;
	il2cpp::utils::MemoryUtils::MemorySet((&V_2), 0, sizeof(V_2));
	EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  V_3;
	il2cpp::utils::MemoryUtils::MemorySet((&V_3), 0, sizeof(V_3));
	{
		EntityCommandBuffer__ctor_m4A83B4BC57A1BA72A8F5B5D64899DE0FF1E5D56C((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_0), 2);
		EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  L_0 = ComponentSystem_get_Entities_m42D1E50856957781D7B9754EBDC8B324FA21CC95(__this);
		V_1 = L_0;
		EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  L_1 = EntityQueryBuilder_WithAll_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mADB09B62662D278DC285DD28602FD72910AB2FF6((EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB *)(&V_1));
		V_1 = L_1;
		intptr_t L_2 = (intptr_t)AudioSystem_U3COnUpdateU3Eb__7_0_m61A9A9026D6CCB5177E9A302F0A614ACBC23A2AA;
		F_ED_1_tA435FA70B7FFFBD717BA934C20CD4908C8F6BE41 L_4;
		il2cpp::utils::MemoryUtils::MemorySet((&L_4), 0, sizeof(L_4));
		F_ED_1_tA435FA70B7FFFBD717BA934C20CD4908C8F6BE41 * L_3 = (&L_4);
		F_ED_1__ctor_mAA2A8DE334399169BC2C3A36232FB945130B2A84(L_3, __this, (intptr_t)L_2);
		L_3->set_m_ReversePInvokeWrapperPtr_2(reinterpret_cast<void*>(NULL));
		L_3->set_m_IsDelegateOpen_3(false);
		EntityQueryBuilder_ForEach_TisAudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045_mA713C1F7EB7D5B272D9452ECC57AD0A89DEB396D((EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB *)(&V_1), L_3);
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_5 = ((ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 *)__this)->get_m_EntityManager_6();
		EntityCommandBuffer_Playback_mE8B23D86CA95819D08B99AD7DB4BC438854BB9F0((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_0), L_5);
		EntityCommandBuffer_Dispose_mEAD0561873FC429DEC885758B3FF29D29A46A586((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_0));
		EntityCommandBuffer__ctor_m4A83B4BC57A1BA72A8F5B5D64899DE0FF1E5D56C((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_2), 2);
		EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  L_6 = ComponentSystem_get_Entities_m42D1E50856957781D7B9754EBDC8B324FA21CC95(__this);
		V_1 = L_6;
		EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  L_7 = EntityQueryBuilder_WithAll_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mADB09B62662D278DC285DD28602FD72910AB2FF6((EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB *)(&V_1));
		V_1 = L_7;
		intptr_t L_8 = (intptr_t)AudioSystem_U3COnUpdateU3Eb__7_1_m22679CA133E2A7C33A57BA8A7E3B179C520F5ECA;
		F_ED_1_t3D529324D802FC88F144E279B46A4E66E5921D16 L_10;
		il2cpp::utils::MemoryUtils::MemorySet((&L_10), 0, sizeof(L_10));
		F_ED_1_t3D529324D802FC88F144E279B46A4E66E5921D16 * L_9 = (&L_10);
		F_ED_1__ctor_mD6B6B002D5EAA827269EAA7C9BA4B71F4D0E7CE1(L_9, __this, (intptr_t)L_8);
		L_9->set_m_ReversePInvokeWrapperPtr_2(reinterpret_cast<void*>(NULL));
		L_9->set_m_IsDelegateOpen_3(false);
		EntityQueryBuilder_ForEach_TisAudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696_m0C5BE70E85259B4981FEAF936F9E9E610DCD9AF9((EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB *)(&V_1), L_9);
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_11 = ((ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 *)__this)->get_m_EntityManager_6();
		EntityCommandBuffer_Playback_mE8B23D86CA95819D08B99AD7DB4BC438854BB9F0((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_2), L_11);
		EntityCommandBuffer_Dispose_mEAD0561873FC429DEC885758B3FF29D29A46A586((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_2));
		EntityCommandBuffer__ctor_m4A83B4BC57A1BA72A8F5B5D64899DE0FF1E5D56C((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_3), 2);
		EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB  L_12 = ComponentSystem_get_Entities_m42D1E50856957781D7B9754EBDC8B324FA21CC95(__this);
		V_1 = L_12;
		intptr_t L_13 = (intptr_t)AudioSystem_U3COnUpdateU3Eb__7_2_mF48C826F8CC6C901FEDC5BF082A0794EF5238F72;
		F_ED_1_tD8E2826E0B1A6CC6F3F5FB6068C10285268DEC92 L_15;
		il2cpp::utils::MemoryUtils::MemorySet((&L_15), 0, sizeof(L_15));
		F_ED_1_tD8E2826E0B1A6CC6F3F5FB6068C10285268DEC92 * L_14 = (&L_15);
		F_ED_1__ctor_m14CBFAD19F6218CDED60F865E707477AD86C93AB(L_14, __this, (intptr_t)L_13);
		L_14->set_m_ReversePInvokeWrapperPtr_2(reinterpret_cast<void*>(NULL));
		L_14->set_m_IsDelegateOpen_3(false);
		EntityQueryBuilder_ForEach_TisAudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF_mC81D9D149ABE7C51413CB2452E55E9B22D4DE333((EntityQueryBuilder_t8418C02336C149405228182382728F358B04D6EB *)(&V_1), L_14);
		EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 * L_16 = ((ComponentSystemBase_tCD8DDB624FDEBD851B68CF1AA8E38A1ADF583E36 *)__this)->get_m_EntityManager_6();
		EntityCommandBuffer_Playback_mE8B23D86CA95819D08B99AD7DB4BC438854BB9F0((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_3), L_16);
		EntityCommandBuffer_Dispose_mEAD0561873FC429DEC885758B3FF29D29A46A586((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_3));
		return;
	}
}
// System.Void Unity.Tiny.Audio.AudioSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem__ctor_m7D6A73F6E87FC0DAFA41E55E5EE269777F784B72 (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this)
{
	{
		ComponentSystem__ctor_mC248FF25EA55C4B49B251E08FBDE68FA01D98F1E(__this);
		return;
	}
}
// System.Void Unity.Tiny.Audio.AudioSystem::<OnUpdate>b__7_0(Unity.Entities.Entity,Unity.Tiny.Audio.AudioSourceStop&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_U3COnUpdateU3Eb__7_0_m61A9A9026D6CCB5177E9A302F0A614ACBC23A2AA (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0, AudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045 * ___tag1)
{
	EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_0 = ___e0;
		VirtActionInvoker1< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(12 /* System.Void Unity.Tiny.Audio.AudioSystem::StopSource(Unity.Entities.Entity) */, __this, L_0);
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_1 = ((ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B *)__this)->get_m_DeferredEntities_13();
		V_0 = L_1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_2 = ___e0;
		EntityCommandBuffer_RemoveComponent_TisAudioSourceStop_tF0B908A6419FCF93A7D3F507FB12AACDE47C5045_m7A15F8C6CA2E239EB9F9E3A45E0EB9D2A25456D7((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_0), L_2);
		return;
	}
}
// System.Void Unity.Tiny.Audio.AudioSystem::<OnUpdate>b__7_1(Unity.Entities.Entity,Unity.Tiny.Audio.AudioSourceStart&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_U3COnUpdateU3Eb__7_1_m22679CA133E2A7C33A57BA8A7E3B179C520F5ECA (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0, AudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696 * ___tag1)
{
	bool V_0 = false;
	EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  V_1;
	il2cpp::utils::MemoryUtils::MemorySet((&V_1), 0, sizeof(V_1));
	{
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_0 = ___e0;
		bool L_1 = VirtFuncInvoker1< bool, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(11 /* System.Boolean Unity.Tiny.Audio.AudioSystem::PlaySource(Unity.Entities.Entity) */, __this, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_3 = ((ComponentSystem_t11926B8B0CA6228AF04CA706B051BDEC3B81E68B *)__this)->get_m_DeferredEntities_13();
		V_1 = L_3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_4 = ___e0;
		EntityCommandBuffer_RemoveComponent_TisAudioSourceStart_tC48480187A87E2B9A609724135A5FA642137E696_m67F936FE3FC78D46C302B07E9DE6AFD5E3509122((EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(&V_1), L_4);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Unity.Tiny.Audio.AudioSystem::<OnUpdate>b__7_2(Unity.Entities.Entity,Unity.Tiny.Audio.AudioSource&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSystem_U3COnUpdateU3Eb__7_2_mF48C826F8CC6C901FEDC5BF082A0794EF5238F72 (AudioSystem_tB0B8276156F593F8B65B690DAD201287425D55FF * __this, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___e0, AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF * ___tag1)
{
	{
		AudioSource_t87FEBCC9AB0457AFADFDB51D43E26DA1523C7EAF * L_0 = ___tag1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_1 = ___e0;
		bool L_2 = VirtFuncInvoker1< bool, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Boolean Unity.Tiny.Audio.AudioSystem::IsPlaying(Unity.Entities.Entity) */, __this, L_1);
		L_0->set_U3CisPlayingU3Ek__BackingField_3(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
