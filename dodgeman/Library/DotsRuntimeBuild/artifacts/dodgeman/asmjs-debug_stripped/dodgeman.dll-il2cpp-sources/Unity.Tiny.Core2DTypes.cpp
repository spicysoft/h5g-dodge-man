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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData)(obj);
	}
};


IL2CPP_EXTERN_C const RuntimeMethod Color_Equals_m4C5A8EA7AC9A63CA2381356C373B7323B3063D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Color_Equals_m777EC098458C71F60C12A5C7EA2B33FAC1489FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Color_GetHashCode_m84C20CF5C0F25B2CFA63B3831683008378BFA7F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Color_op_Addition_mD88123BE86A1B08CBCDD7918F5FBC5D1B70FA033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Color_op_Equality_m9532341618AAA901210741BAD787915337B443A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod Color_op_Multiply_m79422E738E2364E927B05E034FB49882BDAB8B09_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t77AB3B108FD5CDF042C3F68ABE07F028FA680A90 
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


// System.Single
struct  Single_t721917D4A79F44210B3A1BFD48DC52627933C8EA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Single_t721917D4A79F44210B3A1BFD48DC52627933C8EA__padding[1];
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


// Unity.Mathematics.float2
struct  float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238 
{
public:
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;

public:
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

extern void* float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238_StaticFields_Storage;
struct float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238_StaticFields
{
public:
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238  ___zero_2;

public:
	inline float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238  get_zero_2() const { return ___zero_2; }
	inline float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238 * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238  value)
	{
		___zero_2 = value;
	}
};


// Unity.Tiny.Core2D.Color
struct  Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D 
{
public:
	// System.Single Unity.Tiny.Core2D.Color::r
	float ___r_1;
	// System.Single Unity.Tiny.Core2D.Color::g
	float ___g_2;
	// System.Single Unity.Tiny.Core2D.Color::b
	float ___b_3;
	// System.Single Unity.Tiny.Core2D.Color::a
	float ___a_4;

public:
	inline float get_r_1() const { return ___r_1; }
	inline float* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(float value)
	{
		___r_1 = value;
	}

	inline float get_g_2() const { return ___g_2; }
	inline float* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(float value)
	{
		___g_2 = value;
	}

	inline float get_b_3() const { return ___b_3; }
	inline float* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(float value)
	{
		___b_3 = value;
	}

	inline float get_a_4() const { return ___a_4; }
	inline float* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(float value)
	{
		___a_4 = value;
	}
};

extern void* Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D_StaticFields_Storage;
struct Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D_StaticFields
{
public:
	// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::<Default>k__BackingField
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___U3CDefaultU3Ek__BackingField_0;

public:
	inline Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  get_U3CDefaultU3Ek__BackingField_0() const { return ___U3CDefaultU3Ek__BackingField_0; }
	inline Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * get_address_of_U3CDefaultU3Ek__BackingField_0() { return &___U3CDefaultU3Ek__BackingField_0; }
	inline void set_U3CDefaultU3Ek__BackingField_0(Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  value)
	{
		___U3CDefaultU3Ek__BackingField_0 = value;
	}
};


// Unity.Tiny.Core2D.BlendOp
struct  BlendOp_t25597FAEB9F42AEB4D64F28AB5CB0F89F772DA54 
{
public:
	// System.Int32 Unity.Tiny.Core2D.BlendOp::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Tiny.Core2D.LoopMode
struct  LoopMode_t74D4EBA3BCAAF9F1DE7D69B67DDBD9F217D11627 
{
public:
	// System.Int32 Unity.Tiny.Core2D.LoopMode::value__
	int32_t ___value___0;

public:
	inline int32_t get_value___0() const { return ___value___0; }
	inline int32_t* get_address_of_value___0() { return &___value___0; }
	inline void set_value___0(int32_t value)
	{
		___value___0 = value;
	}
};


// Unity.Tiny.Core2D.RectTransformFinalSize
struct  RectTransformFinalSize_tFD38064BC55149D8E4A6F941070371887DF2BF76 
{
public:
	// Unity.Mathematics.float2 Unity.Tiny.Core2D.RectTransformFinalSize::size
	float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238  ___size_0;

public:
	inline float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238  get_size_0() const { return ___size_0; }
	inline float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238 * get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(float2_tEAD50D98574B8D43E5AAF3EF71FF9DB2FCCB1238  value)
	{
		___size_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Unity.Tiny.Core2D.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this, float ___red0, float ___green1, float ___blue2, float ___alpha3);
// System.Boolean Unity.Tiny.Core2D.Color::op_Equality(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m9532341618AAA901210741BAD787915337B443A3 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cr1);
// System.Boolean Unity.Tiny.Core2D.Color::Equals(Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_Equals_m777EC098458C71F60C12A5C7EA2B33FAC1489FDA (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___c0);
// System.Boolean Unity.Tiny.Core2D.Color::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_Equals_m4C5A8EA7AC9A63CA2381356C373B7323B3063D58 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this, RuntimeObject * ___obj0);
// System.Int32 Unity.Tiny.Core2D.Color::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m84C20CF5C0F25B2CFA63B3831683008378BFA7F3 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this);
// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::op_Multiply(Unity.Tiny.Core2D.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  Color_op_Multiply_m79422E738E2364E927B05E034FB49882BDAB8B09 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, float ___v1);
// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::op_Addition(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  Color_op_Addition_mD88123BE86A1B08CBCDD7918F5FBC5D1B70FA033 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cr1);
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
void* Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D_StaticFields_Storage = (void*)sizeof(Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D_StaticFields);
// System.Void Unity.Tiny.Core2D.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this, float ___red0, float ___green1, float ___blue2, float ___alpha3)
{
	{
		// r = red;
		float L_0 = ___red0;
		__this->set_r_1(L_0);
		// g = green;
		float L_1 = ___green1;
		__this->set_g_2(L_1);
		// b = blue;
		float L_2 = ___blue2;
		__this->set_b_3(L_2);
		// a = alpha;
		float L_3 = ___alpha3;
		__this->set_a_4(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41_AdjustorThunk (RuntimeObject * __this, float ___red0, float ___green1, float ___blue2, float ___alpha3)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * _thisAdjusted = reinterpret_cast<Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *>(__this + 1);
	Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41(_thisAdjusted, ___red0, ___green1, ___blue2, ___alpha3);
}
// System.Boolean Unity.Tiny.Core2D.Color::op_Equality(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m9532341618AAA901210741BAD787915337B443A3 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cr1)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = ___cl0;
		float L_1 = L_0.get_r_1();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_2 = ___cr1;
		float L_3 = L_2.get_r_1();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_003b;
		}
	}
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_4 = ___cl0;
		float L_5 = L_4.get_g_2();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_6 = ___cr1;
		float L_7 = L_6.get_g_2();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_003b;
		}
	}
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_8 = ___cl0;
		float L_9 = L_8.get_b_3();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_10 = ___cr1;
		float L_11 = L_10.get_b_3();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_003b;
		}
	}
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_12 = ___cl0;
		float L_13 = L_12.get_a_4();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_14 = ___cr1;
		float L_15 = L_14.get_a_4();
		G_B5_0 = ((((float)L_13) == ((float)L_15))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		bool L_16 = V_0;
		return L_16;
	}
}
// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::op_Addition(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  Color_op_Addition_mD88123BE86A1B08CBCDD7918F5FBC5D1B70FA033 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cr1)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = ___cl0;
		float L_1 = L_0.get_r_1();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_2 = ___cr1;
		float L_3 = L_2.get_r_1();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_4 = ___cl0;
		float L_5 = L_4.get_g_2();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_6 = ___cr1;
		float L_7 = L_6.get_g_2();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_8 = ___cl0;
		float L_9 = L_8.get_b_3();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_10 = ___cr1;
		float L_11 = L_10.get_b_3();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_12 = ___cl0;
		float L_13 = L_12.get_a_4();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_14 = ___cr1;
		float L_15 = L_14.get_a_4();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_16;
		il2cpp::utils::MemoryUtils::MemorySet((&L_16), 0, sizeof(L_16));
		Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41((&L_16), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), ((float)il2cpp_codegen_add((float)L_13, (float)L_15)));
		V_0 = L_16;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_17 = V_0;
		return L_17;
	}
}
// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::op_Multiply(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  Color_op_Multiply_m964A4532E7AB71A7334186056E9455993D6FE42C (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cr1)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = ___cl0;
		float L_1 = L_0.get_r_1();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_2 = ___cr1;
		float L_3 = L_2.get_r_1();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_4 = ___cl0;
		float L_5 = L_4.get_g_2();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_6 = ___cr1;
		float L_7 = L_6.get_g_2();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_8 = ___cl0;
		float L_9 = L_8.get_b_3();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_10 = ___cr1;
		float L_11 = L_10.get_b_3();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_12 = ___cl0;
		float L_13 = L_12.get_a_4();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_14 = ___cr1;
		float L_15 = L_14.get_a_4();
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_16;
		il2cpp::utils::MemoryUtils::MemorySet((&L_16), 0, sizeof(L_16));
		Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41((&L_16), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_15)));
		V_0 = L_16;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_17 = V_0;
		return L_17;
	}
}
// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::op_Multiply(Unity.Tiny.Core2D.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  Color_op_Multiply_m79422E738E2364E927B05E034FB49882BDAB8B09 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, float ___v1)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = ___cl0;
		float L_1 = L_0.get_r_1();
		float L_2 = ___v1;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_3 = ___cl0;
		float L_4 = L_3.get_g_2();
		float L_5 = ___v1;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_6 = ___cl0;
		float L_7 = L_6.get_b_3();
		float L_8 = ___v1;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_9 = ___cl0;
		float L_10 = L_9.get_a_4();
		float L_11 = ___v1;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_12;
		il2cpp::utils::MemoryUtils::MemorySet((&L_12), 0, sizeof(L_12));
		Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		V_0 = L_12;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_13 = V_0;
		return L_13;
	}
}
// System.Boolean Unity.Tiny.Core2D.Color::op_Inequality(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Inequality_mCDB2B0C10C1A4DCF58DB87C624215A8EBAEB73D3 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cl0, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___cr1)
{
	bool V_0 = false;
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = ___cl0;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_1 = ___cr1;
		bool L_2 = Color_op_Equality_m9532341618AAA901210741BAD787915337B443A3(L_0, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.Tiny.Core2D.Color::Equals(Unity.Tiny.Core2D.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_Equals_m777EC098458C71F60C12A5C7EA2B33FAC1489FDA (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___c0)
{
	bool V_0 = false;
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = (*(Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *)__this);
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_1 = ___c0;
		bool L_2 = Color_op_Equality_m9532341618AAA901210741BAD787915337B443A3(L_0, L_1);
		V_0 = L_2;
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Color_Equals_m777EC098458C71F60C12A5C7EA2B33FAC1489FDA_AdjustorThunk (RuntimeObject * __this, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___c0)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * _thisAdjusted = reinterpret_cast<Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *>(__this + 1);
	return Color_Equals_m777EC098458C71F60C12A5C7EA2B33FAC1489FDA(_thisAdjusted, ___c0);
}
// System.Boolean Unity.Tiny.Core2D.Color::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_Equals_m4C5A8EA7AC9A63CA2381356C373B7323B3063D58 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this, RuntimeObject * ___obj0)
{
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Color_Equals_m777EC098458C71F60C12A5C7EA2B33FAC1489FDA((Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *)__this, ((*(Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *)((Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *)UnBox<Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D >(L_0, LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 34928 : 69840))))));
		V_0 = L_1;
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Color_Equals_m4C5A8EA7AC9A63CA2381356C373B7323B3063D58_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * _thisAdjusted = reinterpret_cast<Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *>(__this + 1);
	return Color_Equals_m4C5A8EA7AC9A63CA2381356C373B7323B3063D58(_thisAdjusted, ___obj0);
}
// System.Int32 Unity.Tiny.Core2D.Color::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m84C20CF5C0F25B2CFA63B3831683008378BFA7F3 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * __this)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		float* L_0 = __this->get_address_of_r_1();
		RuntimeObject * L_1 = Box(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 480 : 960), L_0);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Object::GetHashCode() */, L_1);
		*L_0 = *(float*)UnBox(L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		float* L_4 = __this->get_address_of_g_2();
		RuntimeObject * L_5 = Box(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 480 : 960), L_4);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Object::GetHashCode() */, L_5);
		*L_4 = *(float*)UnBox(L_5);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)397)))^(int32_t)L_6));
		int32_t L_7 = V_0;
		float* L_8 = __this->get_address_of_b_3();
		RuntimeObject * L_9 = Box(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 480 : 960), L_8);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Object::GetHashCode() */, L_9);
		*L_8 = *(float*)UnBox(L_9);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)397)))^(int32_t)L_10));
		int32_t L_11 = V_0;
		float* L_12 = __this->get_address_of_a_4();
		RuntimeObject * L_13 = Box(LookupTypeInfoFromCursor(IL2CPP_SIZEOF_VOID_P == 4 ? 480 : 960), L_12);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Object::GetHashCode() */, L_13);
		*L_12 = *(float*)UnBox(L_13);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)((int32_t)397)))^(int32_t)L_14));
		int32_t L_15 = V_0;
		V_1 = L_15;
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t Color_GetHashCode_m84C20CF5C0F25B2CFA63B3831683008378BFA7F3_AdjustorThunk (RuntimeObject * __this)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D * _thisAdjusted = reinterpret_cast<Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D *>(__this + 1);
	return Color_GetHashCode_m84C20CF5C0F25B2CFA63B3831683008378BFA7F3(_thisAdjusted);
}
// Unity.Tiny.Core2D.Color Unity.Tiny.Core2D.Color::Lerp(Unity.Tiny.Core2D.Color,Unity.Tiny.Core2D.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  Color_Lerp_mBFA82072F7693481F2FF13B131BC078EA94744B5 (Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___c10, Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  ___c21, float ___time2)
{
	Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  V_0;
	il2cpp::utils::MemoryUtils::MemorySet((&V_0), 0, sizeof(V_0));
	{
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0 = ___c10;
		float L_1 = ___time2;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_2 = Color_op_Multiply_m79422E738E2364E927B05E034FB49882BDAB8B09(L_0, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_1)));
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_3 = ___c21;
		float L_4 = ___time2;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_5 = Color_op_Multiply_m79422E738E2364E927B05E034FB49882BDAB8B09(L_3, L_4);
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_6 = Color_op_Addition_mD88123BE86A1B08CBCDD7918F5FBC5D1B70FA033(L_2, L_5);
		V_0 = L_6;
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_7 = V_0;
		return L_7;
	}
}
// System.Void Unity.Tiny.Core2D.Color::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__cctor_m5AFC54B648AD4C5C019341A852A258A3B9D79079 ()
{
	{
		// public static Color Default { get; } = new Color(1f, 1f, 1f, 1f);
		Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D  L_0;
		il2cpp::utils::MemoryUtils::MemorySet((&L_0), 0, sizeof(L_0));
		Color__ctor_m789EF0D009EA43B324294BAA3FD66DCAF5D06B41((&L_0), (1.0f), (1.0f), (1.0f), (1.0f));
		((Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D_StaticFields*)Color_tE0CE20120833182D4A9FF157A2D149C3C2DD4E0D_StaticFields_Storage)->set_U3CDefaultU3Ek__BackingField_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
