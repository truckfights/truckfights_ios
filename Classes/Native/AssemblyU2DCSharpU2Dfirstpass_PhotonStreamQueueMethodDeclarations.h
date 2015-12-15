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

// PhotonStreamQueue
struct PhotonStreamQueue_t106;
// System.Object
struct Object_t;
// PhotonStream
struct PhotonStream_t85;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonStreamQueue::.ctor(System.Int32)
extern "C" void PhotonStreamQueue__ctor_m564 (PhotonStreamQueue_t106 * __this, int32_t ___sampleRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
extern "C" void PhotonStreamQueue_BeginWritePackage_m565 (PhotonStreamQueue_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
extern "C" void PhotonStreamQueue_Reset_m566 (PhotonStreamQueue_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
extern "C" void PhotonStreamQueue_SendNext_m567 (PhotonStreamQueue_t106 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
extern "C" bool PhotonStreamQueue_HasQueuedObjects_m568 (PhotonStreamQueue_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
extern "C" Object_t * PhotonStreamQueue_ReceiveNext_m569 (PhotonStreamQueue_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
extern "C" void PhotonStreamQueue_Serialize_m570 (PhotonStreamQueue_t106 * __this, PhotonStream_t85 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
extern "C" void PhotonStreamQueue_Deserialize_m571 (PhotonStreamQueue_t106 * __this, PhotonStream_t85 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
