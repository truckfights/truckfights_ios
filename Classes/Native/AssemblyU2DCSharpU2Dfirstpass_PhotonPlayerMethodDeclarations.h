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

// PhotonPlayer
struct PhotonPlayer_t76;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,System.String)
extern "C" void PhotonPlayer__ctor_m538 (PhotonPlayer_t76 * __this, bool ___isLocal, int32_t ___actorID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer__ctor_m539 (PhotonPlayer_t76 * __this, bool ___isLocal, int32_t ___actorID, Hashtable_t40 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
extern "C" int32_t PhotonPlayer_get_ID_m540 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_name()
extern "C" String_t* PhotonPlayer_get_name_m541 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_name(System.String)
extern "C" void PhotonPlayer_set_name_m542 (PhotonPlayer_t76 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isMasterClient()
extern "C" bool PhotonPlayer_get_isMasterClient_m543 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_customProperties()
extern "C" Hashtable_t40 * PhotonPlayer_get_customProperties_m544 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_customProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer_set_customProperties_m545 (PhotonPlayer_t76 * __this, Hashtable_t40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_allProperties()
extern "C" Hashtable_t40 * PhotonPlayer_get_allProperties_m546 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Object)
extern "C" bool PhotonPlayer_Equals_m547 (PhotonPlayer_t76 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::GetHashCode()
extern "C" int32_t PhotonPlayer_GetHashCode_m548 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalChangeLocalID(System.Int32)
extern "C" void PhotonPlayer_InternalChangeLocalID_m549 (PhotonPlayer_t76 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer_InternalCacheProperties_m550 (PhotonPlayer_t76 * __this, Hashtable_t40 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" void PhotonPlayer_SetCustomProperties_m551 (PhotonPlayer_t76 * __this, Hashtable_t40 * ___propertiesToSet, Hashtable_t40 * ___expectedValues, bool ___webForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Find(System.Int32)
extern "C" PhotonPlayer_t76 * PhotonPlayer_Find_m552 (Object_t * __this /* static, unused */, int32_t ___ID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Get(System.Int32)
extern "C" PhotonPlayer_t76 * PhotonPlayer_Get_m553 (PhotonPlayer_t76 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNext()
extern "C" PhotonPlayer_t76 * PhotonPlayer_GetNext_m554 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(PhotonPlayer)
extern "C" PhotonPlayer_t76 * PhotonPlayer_GetNextFor_m555 (PhotonPlayer_t76 * __this, PhotonPlayer_t76 * ___currentPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(System.Int32)
extern "C" PhotonPlayer_t76 * PhotonPlayer_GetNextFor_m556 (PhotonPlayer_t76 * __this, int32_t ___currentPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToString()
extern "C" String_t* PhotonPlayer_ToString_m557 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToStringFull()
extern "C" String_t* PhotonPlayer_ToStringFull_m558 (PhotonPlayer_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
