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

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t149;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t146;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C" void PhotonTransformViewScaleControl__ctor_m726 (PhotonTransformViewScaleControl_t149 * __this, PhotonTransformViewScaleModel_t146 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C" Vector3_t138  PhotonTransformViewScaleControl_GetScale_m727 (PhotonTransformViewScaleControl_t149 * __this, Vector3_t138  ___currentScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformViewScaleControl_OnPhotonSerializeView_m728 (PhotonTransformViewScaleControl_t149 * __this, Vector3_t138  ___currentScale, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
