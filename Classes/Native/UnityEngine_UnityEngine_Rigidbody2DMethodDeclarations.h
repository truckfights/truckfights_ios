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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t140;
// UnityEngine.Collider2D
struct Collider2D_t316;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_ForceMode2D.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" Vector2_t162  Rigidbody2D_get_position_m1450 (Rigidbody2D_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_position_m3918 (Rigidbody2D_t140 * __this, Vector2_t162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_rotation()
extern "C" float Rigidbody2D_get_rotation_m1451 (Rigidbody2D_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t162  Rigidbody2D_get_velocity_m1124 (Rigidbody2D_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m1117 (Rigidbody2D_t140 * __this, Vector2_t162  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m3919 (Rigidbody2D_t140 * __this, Vector2_t162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m3920 (Rigidbody2D_t140 * __this, Vector2_t162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C" float Rigidbody2D_get_angularVelocity_m1125 (Rigidbody2D_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C" void Rigidbody2D_set_angularVelocity_m1118 (Rigidbody2D_t140 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody2D::IsTouching(UnityEngine.Collider2D)
extern "C" bool Rigidbody2D_IsTouching_m1439 (Rigidbody2D_t140 * __this, Collider2D_t316 * ___collider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m1231 (Rigidbody2D_t140 * __this, Vector2_t162  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m3921 (Object_t * __this /* static, unused */, Rigidbody2D_t140 * ___self, Vector2_t162 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForceAtPosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForceAtPosition_m1460 (Rigidbody2D_t140 * __this, Vector2_t162  ___force, Vector2_t162  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForceAtPosition_m3922 (Object_t * __this /* static, unused */, Rigidbody2D_t140 * ___self, Vector2_t162 * ___force, Vector2_t162 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::GetPointVelocity(UnityEngine.Vector2)
extern "C" Vector2_t162  Rigidbody2D_GetPointVelocity_m1435 (Rigidbody2D_t140 * __this, Vector2_t162  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::Rigidbody2D_CUSTOM_INTERNAL_GetPointVelocity(UnityEngine.Rigidbody2D,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C" void Rigidbody2D_Rigidbody2D_CUSTOM_INTERNAL_GetPointVelocity_m3923 (Object_t * __this /* static, unused */, Rigidbody2D_t140 * ___rigidbody, Vector2_t162  ___point, Vector2_t162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_Rigidbody2D_CUSTOM_INTERNAL_GetPointVelocity(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_CALL_Rigidbody2D_CUSTOM_INTERNAL_GetPointVelocity_m3924 (Object_t * __this /* static, unused */, Rigidbody2D_t140 * ___rigidbody, Vector2_t162 * ___point, Vector2_t162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
