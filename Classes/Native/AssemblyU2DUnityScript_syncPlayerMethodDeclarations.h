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

// syncPlayer
struct syncPlayer_t299;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void syncPlayer::.ctor()
extern "C" void syncPlayer__ctor_m1325 (syncPlayer_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void syncPlayer::Update()
extern "C" void syncPlayer_Update_m1326 (syncPlayer_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void syncPlayer::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void syncPlayer_OnPhotonSerializeView_m1327 (syncPlayer_t299 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void syncPlayer::Main()
extern "C" void syncPlayer_Main_m1328 (syncPlayer_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
