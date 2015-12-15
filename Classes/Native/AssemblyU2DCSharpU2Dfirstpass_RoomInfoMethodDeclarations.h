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

// RoomInfo
struct RoomInfo_t121;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C" void RoomInfo__ctor_m636 (RoomInfo_t121 * __this, String_t* ___roomName, Hashtable_t40 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C" bool RoomInfo_get_removedFromList_m637 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C" void RoomInfo_set_removedFromList_m638 (RoomInfo_t121 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C" bool RoomInfo_get_serverSideMasterClient_m639 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C" void RoomInfo_set_serverSideMasterClient_m640 (RoomInfo_t121 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C" Hashtable_t40 * RoomInfo_get_customProperties_m641 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
extern "C" String_t* RoomInfo_get_name_m642 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
extern "C" int32_t RoomInfo_get_playerCount_m643 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C" void RoomInfo_set_playerCount_m644 (RoomInfo_t121 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C" bool RoomInfo_get_isLocalClientInside_m645 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C" void RoomInfo_set_isLocalClientInside_m646 (RoomInfo_t121 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
extern "C" uint8_t RoomInfo_get_maxPlayers_m647 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
extern "C" bool RoomInfo_get_open_m648 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
extern "C" bool RoomInfo_get_visible_m649 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
extern "C" bool RoomInfo_Equals_m650 (RoomInfo_t121 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
extern "C" int32_t RoomInfo_GetHashCode_m651 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
extern "C" String_t* RoomInfo_ToString_m652 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
extern "C" String_t* RoomInfo_ToStringFull_m653 (RoomInfo_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void RoomInfo_InternalCacheProperties_m654 (RoomInfo_t121 * __this, Hashtable_t40 * ___propertiesToCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
