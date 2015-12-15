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

// PhotonTransformView
struct PhotonTransformView_t143;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PhotonTransformView::.ctor()
extern "C" void PhotonTransformView__ctor_m703 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
extern "C" void PhotonTransformView_Awake_m704 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
extern "C" void PhotonTransformView_Update_m705 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
extern "C" void PhotonTransformView_UpdatePosition_m706 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
extern "C" void PhotonTransformView_UpdateRotation_m707 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
extern "C" void PhotonTransformView_UpdateScale_m708 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C" void PhotonTransformView_SetSynchronizedValues_m709 (PhotonTransformView_t143 * __this, Vector3_t138  ___speed, float ___turnSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonTransformView_OnPhotonSerializeView_m710 (PhotonTransformView_t143 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
extern "C" void PhotonTransformView_DoDrawEstimatedPositionError_m711 (PhotonTransformView_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
