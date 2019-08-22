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


// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;

IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_CloseImpl_mBDA71778BE786DAB2A5A3CA1D8FE6408123DC691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_Dispose_m11AB794E773330D0E23CFF19AFC6AEDE73448424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_GetDataImpl_m1AD382415E99A005D9E9A7A3C0204416A897CD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_GetData_m4912E754CD78C3D1277D42B3E706A7C428A38161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_GetStatusImpl_m7386C08582842426E7B7848A662F9209422ECDBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_GetStatus_m6DAA9887DCF4EB34FF0BA500EA79FB8F88FC833A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp_ToString_m1FDA39E16B2E5723FC8A3690F9740D0D55345471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod AsyncOp__ctor_m6BFCD801291EDAB1DB4CECEC0A05362675F1EB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod IOService_RequestAsyncReadImpl_m7453B1FEC46C8DADB7FEAFA1D3C5EB79155F7BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod String_Format_mA0ECE15446C48D0F3B656E51AF679410A30FE5FF_RuntimeMethod_var;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tDF3D022F9AF8CC18182AF55AA975E0FFE10DDDDA 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// Unity.Tiny.IO.IOService
struct  IOService_t0ABFE35FF321C4DED6471D5179AC7350F2D55C43  : public RuntimeObject
{
public:

public:
};


// System.Byte
struct  Byte_t890F19AC4C0E036E44480A958D52DA1FEBBCA282 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Byte_t890F19AC4C0E036E44480A958D52DA1FEBBCA282__padding[1];
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


// Unity.Tiny.IO.AsyncOp
struct  AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E 
{
public:
	// System.Int32 Unity.Tiny.IO.AsyncOp::m_Handle
	int32_t ___m_Handle_0;

public:
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// Unity.Tiny.IO.AsyncOp_Status
struct  Status_tA561109D62637792B52C0215FD438F792E6A93A2 
{
public:
	// System.Int32 Unity.Tiny.IO.AsyncOp_Status::value__
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void Unity.Tiny.IO.AsyncOp::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp__ctor_m6BFCD801291EDAB1DB4CECEC0A05362675F1EB3A (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this, int32_t ___sysHandle0);
// System.Int32 Unity.Tiny.IO.AsyncOp::GetStatusImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOp_GetStatusImpl_m7386C08582842426E7B7848A662F9209422ECDBC (int32_t ___handle0);
// Unity.Tiny.IO.AsyncOp/Status Unity.Tiny.IO.AsyncOp::GetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOp_GetStatus_m6DAA9887DCF4EB34FF0BA500EA79FB8F88FC833A (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this);
// System.Int32 Unity.Tiny.IO.AsyncOp::CloseImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOp_CloseImpl_mBDA71778BE786DAB2A5A3CA1D8FE6408123DC691 (int32_t ___handle0);
// System.Void Unity.Tiny.IO.AsyncOp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp_Dispose_m11AB794E773330D0E23CFF19AFC6AEDE73448424 (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this);
// System.Void Unity.Tiny.IO.AsyncOp::GetDataImpl(System.Int32,System.Byte*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp_GetDataImpl_m1AD382415E99A005D9E9A7A3C0204416A897CD90 (int32_t ___handle0, uint8_t** ___data1, int32_t* ___sizeInBytes2);
// System.Void Unity.Tiny.IO.AsyncOp::GetData(System.Byte*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp_GetData_m4912E754CD78C3D1277D42B3E706A7C428A38161 (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this, uint8_t** ___data0, int32_t* ___sizeInBytes1);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0ECE15446C48D0F3B656E51AF679410A30FE5FF (String_t* ___formatString0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___objects1);
// System.String Unity.Tiny.IO.AsyncOp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOp_ToString_m1FDA39E16B2E5723FC8A3690F9740D0D55345471 (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this);
// System.Int32 Unity.Tiny.IO.IOService::RequestAsyncReadImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOService_RequestAsyncReadImpl_m7453B1FEC46C8DADB7FEAFA1D3C5EB79155F7BEE (String_t* ___path0);
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
// System.Void Unity.Tiny.IO.AsyncOp::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp__ctor_m6BFCD801291EDAB1DB4CECEC0A05362675F1EB3A (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this, int32_t ___sysHandle0)
{
	{
		// m_Handle = sysHandle;
		int32_t L_0 = ___sysHandle0;
		__this->set_m_Handle_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOp__ctor_m6BFCD801291EDAB1DB4CECEC0A05362675F1EB3A_AdjustorThunk (RuntimeObject * __this, int32_t ___sysHandle0)
{
	AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * _thisAdjusted = reinterpret_cast<AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E *>(__this + 1);
	AsyncOp__ctor_m6BFCD801291EDAB1DB4CECEC0A05362675F1EB3A(_thisAdjusted, ___sysHandle0);
}
// Unity.Tiny.IO.AsyncOp_Status Unity.Tiny.IO.AsyncOp::GetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOp_GetStatus_m6DAA9887DCF4EB34FF0BA500EA79FB8F88FC833A (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		int32_t L_1 = AsyncOp_GetStatusImpl_m7386C08582842426E7B7848A662F9209422ECDBC(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOp_GetStatus_m6DAA9887DCF4EB34FF0BA500EA79FB8F88FC833A_AdjustorThunk (RuntimeObject * __this)
{
	AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * _thisAdjusted = reinterpret_cast<AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E *>(__this + 1);
	return AsyncOp_GetStatus_m6DAA9887DCF4EB34FF0BA500EA79FB8F88FC833A(_thisAdjusted);
}
// System.Void Unity.Tiny.IO.AsyncOp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp_Dispose_m11AB794E773330D0E23CFF19AFC6AEDE73448424 (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this)
{
	{
		// CloseImpl(m_Handle);
		int32_t L_0 = __this->get_m_Handle_0();
		AsyncOp_CloseImpl_mBDA71778BE786DAB2A5A3CA1D8FE6408123DC691(L_0);
		// m_Handle = 0;
		__this->set_m_Handle_0(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOp_Dispose_m11AB794E773330D0E23CFF19AFC6AEDE73448424_AdjustorThunk (RuntimeObject * __this)
{
	AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * _thisAdjusted = reinterpret_cast<AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E *>(__this + 1);
	AsyncOp_Dispose_m11AB794E773330D0E23CFF19AFC6AEDE73448424(_thisAdjusted);
}
// System.Void Unity.Tiny.IO.AsyncOp::GetData(System.Byte*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp_GetData_m4912E754CD78C3D1277D42B3E706A7C428A38161 (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this, uint8_t** ___data0, int32_t* ___sizeInBytes1)
{
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// byte* inData = null;
		V_0 = (uint8_t*)(((uintptr_t)0));
		// int inSize = 0;
		V_1 = 0;
		// GetDataImpl(m_Handle, ref inData, ref inSize);
		int32_t L_0 = __this->get_m_Handle_0();
		AsyncOp_GetDataImpl_m1AD382415E99A005D9E9A7A3C0204416A897CD90(L_0, (uint8_t**)(&V_0), (int32_t*)(&V_1));
		// data = inData;
		uint8_t** L_1 = ___data0;
		uint8_t* L_2 = V_0;
		*((intptr_t*)L_1) = (intptr_t)L_2;
		// sizeInBytes = inSize;
		int32_t* L_3 = ___sizeInBytes1;
		int32_t L_4 = V_1;
		*((int32_t*)L_3) = (int32_t)L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOp_GetData_m4912E754CD78C3D1277D42B3E706A7C428A38161_AdjustorThunk (RuntimeObject * __this, uint8_t** ___data0, int32_t* ___sizeInBytes1)
{
	AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * _thisAdjusted = reinterpret_cast<AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E *>(__this + 1);
	AsyncOp_GetData_m4912E754CD78C3D1277D42B3E706A7C428A38161(_thisAdjusted, ___data0, ___sizeInBytes1);
}
// System.String Unity.Tiny.IO.AsyncOp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOp_ToString_m1FDA39E16B2E5723FC8A3690F9740D0D55345471 (AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * __this)
{
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew<ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*>(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 464 : 928), sizeof(RuntimeObject *), (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = __this->get_m_Handle_0();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 700 : 1400), &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		String_t* L_5 = String_Format_mA0ECE15446C48D0F3B656E51AF679410A30FE5FF(LookupStringFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 2792 : 2984), L_1);
		V_0 = L_5;
		String_t* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* AsyncOp_ToString_m1FDA39E16B2E5723FC8A3690F9740D0D55345471_AdjustorThunk (RuntimeObject * __this)
{
	AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E * _thisAdjusted = reinterpret_cast<AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E *>(__this + 1);
	return AsyncOp_ToString_m1FDA39E16B2E5723FC8A3690F9740D0D55345471(_thisAdjusted);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetStatus(int32_t);
#endif
// System.Int32 Unity.Tiny.IO.AsyncOp::GetStatusImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOp_GetStatusImpl_m7386C08582842426E7B7848A662F9209422ECDBC (int32_t ___handle0)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_tiny_io"), "GetStatus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetStatus)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Close(int32_t);
#endif
// System.Int32 Unity.Tiny.IO.AsyncOp::CloseImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOp_CloseImpl_mBDA71778BE786DAB2A5A3CA1D8FE6408123DC691 (int32_t ___handle0)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_tiny_io"), "Close", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Close)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetData(int32_t, uint8_t**, int32_t*);
#endif
// System.Void Unity.Tiny.IO.AsyncOp::GetDataImpl(System.Int32,System.Byte*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOp_GetDataImpl_m1AD382415E99A005D9E9A7A3C0204416A897CD90 (int32_t ___handle0, uint8_t** ___data1, int32_t* ___sizeInBytes2)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t**, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint8_t**) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_tiny_io"), "GetData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___data1' to native representation
	uint8_t** ____data1_marshaled = NULL;
	uint8_t* ____data1_marshaled_dereferenced = NULL;
	____data1_marshaled_dereferenced = *___data1;
	____data1_marshaled = &____data1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetData)(___handle0, ____data1_marshaled, ___sizeInBytes2);
	#else
	il2cppPInvokeFunc(___handle0, ____data1_marshaled, ___sizeInBytes2);
	#endif

	// Marshaling of parameter '___data1' back from native representation
	uint8_t* _____data1_marshaled_unmarshaled_dereferenced = NULL;
	_____data1_marshaled_unmarshaled_dereferenced = *____data1_marshaled;
	*___data1 = _____data1_marshaled_unmarshaled_dereferenced;

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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RequestAsyncRead(char*);
#endif
// System.Int32 Unity.Tiny.IO.IOService::RequestAsyncReadImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOService_RequestAsyncReadImpl_m7453B1FEC46C8DADB7FEAFA1D3C5EB79155F7BEE (String_t* ___path0)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lib_unity_tiny_io"), "RequestAsyncRead", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RequestAsyncRead)(____path0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____path0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return returnValue;
}
// Unity.Tiny.IO.AsyncOp Unity.Tiny.IO.IOService::RequestAsyncRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E  IOService_RequestAsyncRead_m19FC4FC89F0AC825255ECEB75778412DAE3EC55D (String_t* ___path0)
{
	AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = IOService_RequestAsyncReadImpl_m7453B1FEC46C8DADB7FEAFA1D3C5EB79155F7BEE(L_0);
		AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E  L_2;
		il2cpp::utils::MemoryUtils::MemorySet((&L_2), 0, sizeof(L_2));
		AsyncOp__ctor_m6BFCD801291EDAB1DB4CECEC0A05362675F1EB3A((&L_2), L_1);
		V_0 = L_2;
		AsyncOp_t2EB10334711DF9A78EBD7CA004D960324AF3FD0E  L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
