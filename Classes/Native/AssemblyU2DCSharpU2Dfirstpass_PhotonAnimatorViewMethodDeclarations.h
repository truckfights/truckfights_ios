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

// PhotonAnimatorView
struct PhotonAnimatorView_t134;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t137;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t136;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonAnimatorView_Synchronize.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonAnimatorView_ParameterTy.h"

// System.Void PhotonAnimatorView::.ctor()
extern "C" void PhotonAnimatorView__ctor_m679 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
extern "C" void PhotonAnimatorView_Awake_m680 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
extern "C" void PhotonAnimatorView_Update_m681 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
extern "C" bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m682 (PhotonAnimatorView_t134 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
extern "C" bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m683 (PhotonAnimatorView_t134 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
extern "C" List_1_t137 * PhotonAnimatorView_GetSynchronizedLayers_m684 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
extern "C" List_1_t136 * PhotonAnimatorView_GetSynchronizedParameters_m685 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
extern "C" int32_t PhotonAnimatorView_GetLayerSynchronizeType_m686 (PhotonAnimatorView_t134 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
extern "C" int32_t PhotonAnimatorView_GetParameterSynchronizeType_m687 (PhotonAnimatorView_t134 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
extern "C" void PhotonAnimatorView_SetLayerSynchronized_m688 (PhotonAnimatorView_t134 * __this, int32_t ___layerIndex, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
extern "C" void PhotonAnimatorView_SetParameterSynchronized_m689 (PhotonAnimatorView_t134 * __this, String_t* ___name, int32_t ___type, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
extern "C" void PhotonAnimatorView_SerializeDataContinuously_m690 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
extern "C" void PhotonAnimatorView_DeserializeDataContinuously_m691 (PhotonAnimatorView_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
extern "C" void PhotonAnimatorView_SerializeDataDiscretly_m692 (PhotonAnimatorView_t134 * __this, PhotonStream_t85 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
extern "C" void PhotonAnimatorView_DeserializeDataDiscretly_m693 (PhotonAnimatorView_t134 * __this, PhotonStream_t85 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
extern "C" void PhotonAnimatorView_SerializeSynchronizationTypeState_m694 (PhotonAnimatorView_t134 * __this, PhotonStream_t85 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
extern "C" void PhotonAnimatorView_DeserializeSynchronizationTypeState_m695 (PhotonAnimatorView_t134 * __this, PhotonStream_t85 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonAnimatorView_OnPhotonSerializeView_m696 (PhotonAnimatorView_t134 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
