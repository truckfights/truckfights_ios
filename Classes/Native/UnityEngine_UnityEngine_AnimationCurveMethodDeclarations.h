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

// UnityEngine.AnimationCurve
struct AnimationCurve_t153;
struct AnimationCurve_t153_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t274;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m1180 (AnimationCurve_t153 * __this, KeyframeU5BU5D_t274* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3967 (AnimationCurve_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3968 (AnimationCurve_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3969 (AnimationCurve_t153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3970 (AnimationCurve_t153 * __this, KeyframeU5BU5D_t274* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t153_marshal(const AnimationCurve_t153& unmarshaled, AnimationCurve_t153_marshaled& marshaled);
extern "C" void AnimationCurve_t153_marshal_back(const AnimationCurve_t153_marshaled& marshaled, AnimationCurve_t153& unmarshaled);
extern "C" void AnimationCurve_t153_marshal_cleanup(AnimationCurve_t153_marshaled& marshaled);
