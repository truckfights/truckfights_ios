#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m3558 (Quaternion_t154 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t154  Quaternion_get_identity_m996 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m3559 (Object_t * __this /* static, unused */, Quaternion_t154  ___a, Quaternion_t154  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t154  Quaternion_AngleAxis_m1452 (Object_t * __this /* static, unused */, float ___angle, Vector3_t138  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t154  Quaternion_INTERNAL_CALL_AngleAxis_m3560 (Object_t * __this /* static, unused */, float ___angle, Vector3_t138 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t154  Quaternion_SlerpUnclamped_m3561 (Object_t * __this /* static, unused */, Quaternion_t154  ___a, Quaternion_t154  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_SlerpUnclamped(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t154  Quaternion_INTERNAL_CALL_SlerpUnclamped_m3562 (Object_t * __this /* static, unused */, Quaternion_t154 * ___a, Quaternion_t154 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t154  Quaternion_Lerp_m1182 (Object_t * __this /* static, unused */, Quaternion_t154  ___a, Quaternion_t154  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t154  Quaternion_INTERNAL_CALL_Lerp_m3563 (Object_t * __this /* static, unused */, Quaternion_t154 * ___a, Quaternion_t154 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t154  Quaternion_RotateTowards_m1181 (Object_t * __this /* static, unused */, Quaternion_t154  ___from, Quaternion_t154  ___to, float ___maxDegreesDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t154  Quaternion_Inverse_m1431 (Object_t * __this /* static, unused */, Quaternion_t154  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t154  Quaternion_INTERNAL_CALL_Inverse_m3564 (Object_t * __this /* static, unused */, Quaternion_t154 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m3565 (Quaternion_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Angle_m923 (Object_t * __this /* static, unused */, Quaternion_t154  ___a, Quaternion_t154  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t138  Quaternion_get_eulerAngles_m1401 (Quaternion_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
extern "C" void Quaternion_set_eulerAngles_m1403 (Quaternion_t154 * __this, Vector3_t138  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t154  Quaternion_Euler_m1174 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t154  Quaternion_Euler_m1427 (Object_t * __this /* static, unused */, Vector3_t138  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t138  Quaternion_Internal_ToEulerRad_m3566 (Object_t * __this /* static, unused */, Quaternion_t154  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t138  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3567 (Object_t * __this /* static, unused */, Quaternion_t154 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t154  Quaternion_Internal_FromEulerRad_m3568 (Object_t * __this /* static, unused */, Vector3_t138  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t154  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3569 (Object_t * __this /* static, unused */, Vector3_t138 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::EulerAngles(System.Single,System.Single,System.Single)
extern "C" Quaternion_t154  Quaternion_EulerAngles_m1414 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m3570 (Quaternion_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m3571 (Quaternion_t154 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t154  Quaternion_op_Multiply_m1465 (Object_t * __this /* static, unused */, Quaternion_t154  ___lhs, Quaternion_t154  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t138  Quaternion_op_Multiply_m1175 (Object_t * __this /* static, unused */, Quaternion_t154  ___rotation, Vector3_t138  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m997 (Object_t * __this /* static, unused */, Quaternion_t154  ___lhs, Quaternion_t154  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
