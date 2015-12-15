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

// UnityEngine.Rigidbody
struct Rigidbody_t142;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_ForceMode.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" Vector3_t138  Rigidbody_get_velocity_m1122 (Rigidbody_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m1115 (Rigidbody_t142 * __this, Vector3_t138  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m3907 (Rigidbody_t142 * __this, Vector3_t138 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m3908 (Rigidbody_t142 * __this, Vector3_t138 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" Vector3_t138  Rigidbody_get_angularVelocity_m1123 (Rigidbody_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m1116 (Rigidbody_t142 * __this, Vector3_t138  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_angularVelocity_m3909 (Rigidbody_t142 * __this, Vector3_t138 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m3910 (Rigidbody_t142 * __this, Vector3_t138 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m1232 (Rigidbody_t142 * __this, Vector3_t138  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m3911 (Object_t * __this /* static, unused */, Rigidbody_t142 * ___self, Vector3_t138 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
