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

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t148;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t145;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C" void PhotonTransformViewRotationControl__ctor_m722 (PhotonTransformViewRotationControl_t148 * __this, PhotonTransformViewRotationModel_t145 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C" Quaternion_t154  PhotonTransformViewRotationControl_GetRotation_m723 (PhotonTransformViewRotationControl_t148 * __this, Quaternion_t154  ___currentRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewRotationControl_OnPhotonSerializeView_m724 (PhotonTransformViewRotationControl_t148 * __this, Quaternion_t154  ___currentRotation, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
