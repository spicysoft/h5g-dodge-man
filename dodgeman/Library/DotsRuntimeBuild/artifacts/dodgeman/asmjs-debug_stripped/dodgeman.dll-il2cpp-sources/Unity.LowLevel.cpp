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





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA1284E7F639CB31D37E6A0237EBB534ACF666A54 
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

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct  UnsafeUtility_tB2CC6D2E802FDB9D1514C5236887A18BA669E80C  : public RuntimeObject
{
public:

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


// System.Int64
struct  Int64_t21C1A5A735EE005C8AC4ED7460D0D9553C465E0D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Int64_t21C1A5A735EE005C8AC4ED7460D0D9553C465E0D__padding[1];
	};

public:
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL unsafeutility_malloc(int64_t, int32_t, int32_t);
#endif
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_mAD70200165BB5C26FFC21AC271FCB1BDE3242433 (int64_t ___totalSize0, int32_t ___alignOf1, int32_t ___allocator2)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int64_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_malloc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(unsafeutility_malloc)(___totalSize0, ___alignOf1, ___allocator2);
	#else
	void* returnValue = il2cppPInvokeFunc(___totalSize0, ___alignOf1, ___allocator2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unsafeutility_memcpy(void*, void*, int64_t);
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_mDD1176BEEDC9AB89BC08C8DFB9D5CC2FB921B5E9 (void* ___b0, void* ___b11, int64_t ___i2)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_memcpy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unsafeutility_memcpy)(___b0, ___b11, ___i2);
	#else
	il2cppPInvokeFunc(___b0, ___b11, ___i2);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unsafeutility_free(void*, int32_t);
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_m1AC96D27F0EB8F26BA8CE0621BF11DA8AFE2BEF2 (void* ___mBuffer0, int32_t ___mAllocatorLabel1)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_free", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unsafeutility_free)(___mBuffer0, ___mAllocatorLabel1);
	#else
	il2cppPInvokeFunc(___mBuffer0, ___mAllocatorLabel1);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unsafeutility_memclear(void*, int64_t);
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m48497A8C13D252BB05457690182D3A83900C4D86 (void* ___mBuffer0, int64_t ___lize1)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_memclear", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unsafeutility_memclear)(___mBuffer0, ___lize1);
	#else
	il2cppPInvokeFunc(___mBuffer0, ___lize1);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL unsafeutility_memcmp(void*, void*, int64_t);
#endif
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_MemCmp_m58D87689D3EEEA80F7ECBC89A6C72FA079E2261C (void* ___ptr10, void* ___ptr21, int64_t ___size2)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, void*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_memcmp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(unsafeutility_memcmp)(___ptr10, ___ptr21, ___size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr10, ___ptr21, ___size2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unsafeutility_memcpyreplicate(void*, void*, int32_t, int32_t);
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyReplicate_m6FF56595B795CD774D906D81C5FDF212C8316587 (void* ___destination0, void* ___source1, int32_t ___size2, int32_t ___count3)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_memcpyreplicate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unsafeutility_memcpyreplicate)(___destination0, ___source1, ___size2, ___count3);
	#else
	il2cppPInvokeFunc(___destination0, ___source1, ___size2, ___count3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL unsafeutility_freetemp();
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::FreeTempMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_FreeTempMemory_m3972E351A8A2BDF8FB4C9EED9DED58044061BC22 ()
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_lowlevel"), "unsafeutility_freetemp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(unsafeutility_freetemp)();
	#else
	il2cppPInvokeFunc();
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
