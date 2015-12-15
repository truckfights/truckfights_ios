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

// PhotonView[]
struct PhotonViewU5BU5D_t203;
// UnityEngine.GameObject
struct GameObject_t159;
// PhotonView
struct PhotonView_t83;
// System.Collections.IDictionary
struct IDictionary_t204;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// System.Int32[]
struct Int32U5BU5D_t56;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// PhotonView[] Extensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
extern "C" PhotonViewU5BU5D_t203* Extensions_GetPhotonViewsInChildren_m101 (Object_t * __this /* static, unused */, GameObject_t159 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Extensions::GetPhotonView(UnityEngine.GameObject)
extern "C" PhotonView_t83 * Extensions_GetPhotonView_m102 (Object_t * __this /* static, unused */, GameObject_t159 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" bool Extensions_AlmostEquals_m103 (Object_t * __this /* static, unused */, Vector3_t138  ___target, Vector3_t138  ___second, float ___sqrMagnitudePrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool Extensions_AlmostEquals_m104 (Object_t * __this /* static, unused */, Vector2_t162  ___target, Vector2_t162  ___second, float ___sqrMagnitudePrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" bool Extensions_AlmostEquals_m105 (Object_t * __this /* static, unused */, Quaternion_t154  ___target, Quaternion_t154  ___second, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(System.Single,System.Single,System.Single)
extern "C" bool Extensions_AlmostEquals_m106 (Object_t * __this /* static, unused */, float ___target, float ___second, float ___floatDiff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C" void Extensions_Merge_m107 (Object_t * __this /* static, unused */, Object_t * ___target, Object_t * ___addHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C" void Extensions_MergeStringKeys_m108 (Object_t * __this /* static, unused */, Object_t * ___target, Object_t * ___addHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
extern "C" String_t* Extensions_ToStringFull_m109 (Object_t * __this /* static, unused */, Object_t * ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable Extensions::StripToStringKeys(System.Collections.IDictionary)
extern "C" Hashtable_t40 * Extensions_StripToStringKeys_m110 (Object_t * __this /* static, unused */, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C" void Extensions_StripKeysWithNullValues_m111 (Object_t * __this /* static, unused */, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::Contains(System.Int32[],System.Int32)
extern "C" bool Extensions_Contains_m112 (Object_t * __this /* static, unused */, Int32U5BU5D_t56* ___target, int32_t ___nr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
