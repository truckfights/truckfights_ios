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

// UnityEngine.Collision2D
struct Collision2D_t317;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t140;
// UnityEngine.Collider2D
struct Collider2D_t316;
// UnityEngine.Transform
struct Transform_t160;
// UnityEngine.GameObject
struct GameObject_t159;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody2D UnityEngine.Collision2D::get_rigidbody()
extern "C" Rigidbody2D_t140 * Collision2D_get_rigidbody_m3925 (Collision2D_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
extern "C" Collider2D_t316 * Collision2D_get_collider_m3926 (Collision2D_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
extern "C" Transform_t160 * Collision2D_get_transform_m1422 (Collision2D_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" GameObject_t159 * Collision2D_get_gameObject_m1420 (Collision2D_t317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
