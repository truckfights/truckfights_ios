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

// SmoothSyncMovement
struct SmoothSyncMovement_t195;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void SmoothSyncMovement::.ctor()
extern "C" void SmoothSyncMovement__ctor_m838 (SmoothSyncMovement_t195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::Awake()
extern "C" void SmoothSyncMovement_Awake_m839 (SmoothSyncMovement_t195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void SmoothSyncMovement_OnPhotonSerializeView_m840 (SmoothSyncMovement_t195 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SmoothSyncMovement::Update()
extern "C" void SmoothSyncMovement_Update_m841 (SmoothSyncMovement_t195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
