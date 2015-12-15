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

// PhotonStream
struct PhotonStream_t85;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t76;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
extern "C" void PhotonStream__ctor_m347 (PhotonStream_t85 * __this, bool ___write, ObjectU5BU5D_t111* ___incomingData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C" bool PhotonStream_get_isWriting_m348 (PhotonStream_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
extern "C" bool PhotonStream_get_isReading_m349 (PhotonStream_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
extern "C" int32_t PhotonStream_get_Count_m350 (PhotonStream_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C" Object_t * PhotonStream_ReceiveNext_m351 (PhotonStream_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
extern "C" Object_t * PhotonStream_PeekNext_m352 (PhotonStream_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C" void PhotonStream_SendNext_m353 (PhotonStream_t85 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
extern "C" ObjectU5BU5D_t111* PhotonStream_ToArray_m354 (PhotonStream_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
extern "C" void PhotonStream_Serialize_m355 (PhotonStream_t85 * __this, bool* ___myBool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
extern "C" void PhotonStream_Serialize_m356 (PhotonStream_t85 * __this, int32_t* ___myInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
extern "C" void PhotonStream_Serialize_m357 (PhotonStream_t85 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
extern "C" void PhotonStream_Serialize_m358 (PhotonStream_t85 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
extern "C" void PhotonStream_Serialize_m359 (PhotonStream_t85 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
extern "C" void PhotonStream_Serialize_m360 (PhotonStream_t85 * __this, float* ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
extern "C" void PhotonStream_Serialize_m361 (PhotonStream_t85 * __this, PhotonPlayer_t76 ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
extern "C" void PhotonStream_Serialize_m362 (PhotonStream_t85 * __this, Vector3_t138 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
extern "C" void PhotonStream_Serialize_m363 (PhotonStream_t85 * __this, Vector2_t162 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
extern "C" void PhotonStream_Serialize_m364 (PhotonStream_t85 * __this, Quaternion_t154 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
