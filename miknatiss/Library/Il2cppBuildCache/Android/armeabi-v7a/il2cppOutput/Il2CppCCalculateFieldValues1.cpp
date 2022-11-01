#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Collections.Generic.List`1<AutoLetterbox.CameraRatio>
struct List_1_tF1B7DDB42FFFEEC5AF6DBB1ECB9AC58CEFB15A91;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// AutoLetterbox.Util
struct Util_t455413C288DBCB384D0FC46BA2C0E38F5A9B4ACB  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// AutoLetterbox.CameraRatio/CameraAnchor
struct CameraAnchor_tC94C4AF6C70A669E42D95161CFCC1E7FBDAADE44 
{
public:
	// System.Int32 AutoLetterbox.CameraRatio/CameraAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraAnchor_tC94C4AF6C70A669E42D95161CFCC1E7FBDAADE44, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AutoLetterbox.CameraRatio
struct CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E  : public RuntimeObject
{
public:
	// UnityEngine.Camera AutoLetterbox.CameraRatio::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_0;
	// AutoLetterbox.CameraRatio/CameraAnchor AutoLetterbox.CameraRatio::anchor
	int32_t ___anchor_1;
	// UnityEngine.Vector2 AutoLetterbox.CameraRatio::vectorAnchor
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vectorAnchor_2;
	// UnityEngine.Rect AutoLetterbox.CameraRatio::originViewPort
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___originViewPort_3;

public:
	inline static int32_t get_offset_of_camera_0() { return static_cast<int32_t>(offsetof(CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E, ___camera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_0() const { return ___camera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_0() { return &___camera_0; }
	inline void set_camera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_0), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_1() { return static_cast<int32_t>(offsetof(CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E, ___anchor_1)); }
	inline int32_t get_anchor_1() const { return ___anchor_1; }
	inline int32_t* get_address_of_anchor_1() { return &___anchor_1; }
	inline void set_anchor_1(int32_t value)
	{
		___anchor_1 = value;
	}

	inline static int32_t get_offset_of_vectorAnchor_2() { return static_cast<int32_t>(offsetof(CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E, ___vectorAnchor_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vectorAnchor_2() const { return ___vectorAnchor_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vectorAnchor_2() { return &___vectorAnchor_2; }
	inline void set_vectorAnchor_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vectorAnchor_2 = value;
	}

	inline static int32_t get_offset_of_originViewPort_3() { return static_cast<int32_t>(offsetof(CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E, ___originViewPort_3)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_originViewPort_3() const { return ___originViewPort_3; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_originViewPort_3() { return &___originViewPort_3; }
	inline void set_originViewPort_3(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___originViewPort_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AutoLetterbox.ForceCameraRatio
struct ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 AutoLetterbox.ForceCameraRatio::ratio
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ratio_4;
	// System.Boolean AutoLetterbox.ForceCameraRatio::forceRatioOnAwake
	bool ___forceRatioOnAwake_5;
	// System.Boolean AutoLetterbox.ForceCameraRatio::listenForWindowChanges
	bool ___listenForWindowChanges_6;
	// System.Boolean AutoLetterbox.ForceCameraRatio::createCameraForLetterBoxRendering
	bool ___createCameraForLetterBoxRendering_7;
	// System.Boolean AutoLetterbox.ForceCameraRatio::findCamerasAutomatically
	bool ___findCamerasAutomatically_8;
	// UnityEngine.Color AutoLetterbox.ForceCameraRatio::letterBoxCameraColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___letterBoxCameraColor_9;
	// System.Collections.Generic.List`1<AutoLetterbox.CameraRatio> AutoLetterbox.ForceCameraRatio::cameras
	List_1_tF1B7DDB42FFFEEC5AF6DBB1ECB9AC58CEFB15A91 * ___cameras_10;
	// UnityEngine.Camera AutoLetterbox.ForceCameraRatio::letterBoxCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___letterBoxCamera_11;

public:
	inline static int32_t get_offset_of_ratio_4() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___ratio_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ratio_4() const { return ___ratio_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ratio_4() { return &___ratio_4; }
	inline void set_ratio_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ratio_4 = value;
	}

	inline static int32_t get_offset_of_forceRatioOnAwake_5() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___forceRatioOnAwake_5)); }
	inline bool get_forceRatioOnAwake_5() const { return ___forceRatioOnAwake_5; }
	inline bool* get_address_of_forceRatioOnAwake_5() { return &___forceRatioOnAwake_5; }
	inline void set_forceRatioOnAwake_5(bool value)
	{
		___forceRatioOnAwake_5 = value;
	}

	inline static int32_t get_offset_of_listenForWindowChanges_6() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___listenForWindowChanges_6)); }
	inline bool get_listenForWindowChanges_6() const { return ___listenForWindowChanges_6; }
	inline bool* get_address_of_listenForWindowChanges_6() { return &___listenForWindowChanges_6; }
	inline void set_listenForWindowChanges_6(bool value)
	{
		___listenForWindowChanges_6 = value;
	}

	inline static int32_t get_offset_of_createCameraForLetterBoxRendering_7() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___createCameraForLetterBoxRendering_7)); }
	inline bool get_createCameraForLetterBoxRendering_7() const { return ___createCameraForLetterBoxRendering_7; }
	inline bool* get_address_of_createCameraForLetterBoxRendering_7() { return &___createCameraForLetterBoxRendering_7; }
	inline void set_createCameraForLetterBoxRendering_7(bool value)
	{
		___createCameraForLetterBoxRendering_7 = value;
	}

	inline static int32_t get_offset_of_findCamerasAutomatically_8() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___findCamerasAutomatically_8)); }
	inline bool get_findCamerasAutomatically_8() const { return ___findCamerasAutomatically_8; }
	inline bool* get_address_of_findCamerasAutomatically_8() { return &___findCamerasAutomatically_8; }
	inline void set_findCamerasAutomatically_8(bool value)
	{
		___findCamerasAutomatically_8 = value;
	}

	inline static int32_t get_offset_of_letterBoxCameraColor_9() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___letterBoxCameraColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_letterBoxCameraColor_9() const { return ___letterBoxCameraColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_letterBoxCameraColor_9() { return &___letterBoxCameraColor_9; }
	inline void set_letterBoxCameraColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___letterBoxCameraColor_9 = value;
	}

	inline static int32_t get_offset_of_cameras_10() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___cameras_10)); }
	inline List_1_tF1B7DDB42FFFEEC5AF6DBB1ECB9AC58CEFB15A91 * get_cameras_10() const { return ___cameras_10; }
	inline List_1_tF1B7DDB42FFFEEC5AF6DBB1ECB9AC58CEFB15A91 ** get_address_of_cameras_10() { return &___cameras_10; }
	inline void set_cameras_10(List_1_tF1B7DDB42FFFEEC5AF6DBB1ECB9AC58CEFB15A91 * value)
	{
		___cameras_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameras_10), (void*)value);
	}

	inline static int32_t get_offset_of_letterBoxCamera_11() { return static_cast<int32_t>(offsetof(ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83, ___letterBoxCamera_11)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_letterBoxCamera_11() const { return ___letterBoxCamera_11; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_letterBoxCamera_11() { return &___letterBoxCamera_11; }
	inline void set_letterBoxCamera_11(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___letterBoxCamera_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___letterBoxCamera_11), (void*)value);
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
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3310[10] = 
{
	CameraAnchor_tC94C4AF6C70A669E42D95161CFCC1E7FBDAADE44::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3311[4] = 
{
	CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E::get_offset_of_camera_0(),
	CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E::get_offset_of_anchor_1(),
	CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E::get_offset_of_vectorAnchor_2(),
	CameraRatio_tCBBE79CD32A085007885739AC49565FCF4F4808E::get_offset_of_originViewPort_3(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3312[8] = 
{
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_ratio_4(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_forceRatioOnAwake_5(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_listenForWindowChanges_6(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_createCameraForLetterBoxRendering_7(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_findCamerasAutomatically_8(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_letterBoxCameraColor_9(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_cameras_10(),
	ForceCameraRatio_t66536BCEE55F331464A7E4EF394F0B7E516DCD83::get_offset_of_letterBoxCamera_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
