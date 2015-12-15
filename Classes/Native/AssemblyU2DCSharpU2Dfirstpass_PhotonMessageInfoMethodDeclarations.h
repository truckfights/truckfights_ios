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

// PhotonMessageInfo
struct PhotonMessageInfo_t82;
// PhotonPlayer
struct PhotonPlayer_t76;
// PhotonView
struct PhotonView_t83;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonMessageInfo::.ctor()
extern "C" void PhotonMessageInfo__ctor_m334 (PhotonMessageInfo_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
extern "C" void PhotonMessageInfo__ctor_m335 (PhotonMessageInfo_t82 * __this, PhotonPlayer_t76 * ___player, int32_t ___timestamp, PhotonView_t83 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
extern "C" double PhotonMessageInfo_get_timestamp_m336 (PhotonMessageInfo_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
extern "C" String_t* PhotonMessageInfo_ToString_m337 (PhotonMessageInfo_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
