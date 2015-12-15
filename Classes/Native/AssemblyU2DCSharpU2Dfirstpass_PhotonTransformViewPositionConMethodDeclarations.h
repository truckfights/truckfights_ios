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

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t147;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t144;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
extern "C" void PhotonTransformViewPositionControl__ctor_m712 (PhotonTransformViewPositionControl_t147 * __this, PhotonTransformViewPositionModel_t144 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
extern "C" Vector3_t138  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m713 (PhotonTransformViewPositionControl_t147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C" void PhotonTransformViewPositionControl_SetSynchronizedValues_m714 (PhotonTransformViewPositionControl_t147 * __this, Vector3_t138  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
extern "C" Vector3_t138  PhotonTransformViewPositionControl_UpdatePosition_m715 (PhotonTransformViewPositionControl_t147 * __this, Vector3_t138  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
extern "C" Vector3_t138  PhotonTransformViewPositionControl_GetNetworkPosition_m716 (PhotonTransformViewPositionControl_t147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
extern "C" Vector3_t138  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m717 (PhotonTransformViewPositionControl_t147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_OnPhotonSerializeView_m718 (PhotonTransformViewPositionControl_t147 * __this, Vector3_t138  ___currentPosition, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_SerializeData_m719 (PhotonTransformViewPositionControl_t147 * __this, Vector3_t138  ___currentPosition, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewPositionControl_DeserializeData_m720 (PhotonTransformViewPositionControl_t147 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
