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



IL2CPP_EXTERN_C const RuntimeMethod MinMaxAABB_Equals_m1822F4E49985039D74314920E02902397FD7D2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod float3_Equals_mEF30A0802E511E7E3FED72575B0FF28E76A75884_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC6C38364FD80623B1CFE7B1593B7097BA8B90AAE 
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


// Unity.Mathematics.float3
struct  float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

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

	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

extern void* float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7_StaticFields_Storage;
struct float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7_StaticFields
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___zero_3;

public:
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  get_zero_3() const { return ___zero_3; }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.MinMaxAABB
struct  MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE 
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.MinMaxAABB::Min
	float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___Min_0;
	// Unity.Mathematics.float3 Unity.Mathematics.MinMaxAABB::Max
	float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___Max_1;

public:
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  get_Min_0() const { return ___Min_0; }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * get_address_of_Min_0() { return &___Min_0; }
	inline void set_Min_0(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  value)
	{
		___Min_0 = value;
	}

	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  get_Max_1() const { return ___Max_1; }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * get_address_of_Max_1() { return &___Max_1; }
	inline void set_Max_1(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  value)
	{
		___Max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean Unity.Mathematics.float3::Equals(Unity.Mathematics.float3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool float3_Equals_mEF30A0802E511E7E3FED72575B0FF28E76A75884_inline (float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * __this, float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___rhs0);
// System.Boolean Unity.Mathematics.MinMaxAABB::Equals(Unity.Mathematics.MinMaxAABB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MinMaxAABB_Equals_m1822F4E49985039D74314920E02902397FD7D2E9 (MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE * __this, MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  ___other0);
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
// System.Boolean Unity.Mathematics.MinMaxAABB::Equals(Unity.Mathematics.MinMaxAABB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MinMaxAABB_Equals_m1822F4E49985039D74314920E02902397FD7D2E9 (MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE * __this, MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  ___other0)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * L_0 = __this->get_address_of_Min_0();
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_1 = __this->get_Min_0();
		bool L_2 = float3_Equals_mEF30A0802E511E7E3FED72575B0FF28E76A75884_inline((float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 *)L_0, L_1);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * L_3 = __this->get_address_of_Max_1();
		MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  L_4 = ___other0;
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_5 = L_4.get_Max_1();
		bool L_6 = float3_Equals_mEF30A0802E511E7E3FED72575B0FF28E76A75884_inline((float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 *)L_3, L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool MinMaxAABB_Equals_m1822F4E49985039D74314920E02902397FD7D2E9_AdjustorThunk (RuntimeObject * __this, MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  ___other0)
{
	MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE * _thisAdjusted = reinterpret_cast<MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE *>(__this + 1);
	return MinMaxAABB_Equals_m1822F4E49985039D74314920E02902397FD7D2E9(_thisAdjusted, ___other0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool float3_Equals_mEF30A0802E511E7E3FED72575B0FF28E76A75884_inline (float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * __this, float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___rhs0)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->get_x_0();
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_1 = ___rhs0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->get_y_1();
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_4 = ___rhs0;
		float L_5 = L_4.get_y_1();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->get_z_2();
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_7 = ___rhs0;
		float L_8 = L_7.get_z_2();
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_9 = V_0;
		return L_9;
	}
}
