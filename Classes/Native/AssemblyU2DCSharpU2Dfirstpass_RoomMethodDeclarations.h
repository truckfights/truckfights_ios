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

// Room
struct Room_t66;
// System.String
struct String_t;
// RoomOptions
struct RoomOptions_t38;
// System.String[]
struct StringU5BU5D_t65;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;

#include "codegen/il2cpp-codegen.h"

// System.Void Room::.ctor(System.String,RoomOptions)
extern "C" void Room__ctor_m617 (Room_t66 * __this, String_t* ___roomName, RoomOptions_t38 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
extern "C" int32_t Room_get_playerCount_m618 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
extern "C" String_t* Room_get_name_m619 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
extern "C" void Room_set_name_m620 (Room_t66 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
extern "C" int32_t Room_get_maxPlayers_m621 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
extern "C" void Room_set_maxPlayers_m622 (Room_t66 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
extern "C" bool Room_get_open_m623 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
extern "C" void Room_set_open_m624 (Room_t66 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
extern "C" bool Room_get_visible_m625 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
extern "C" void Room_set_visible_m626 (Room_t66 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
extern "C" StringU5BU5D_t65* Room_get_propertiesListedInLobby_m627 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
extern "C" void Room_set_propertiesListedInLobby_m628 (Room_t66 * __this, StringU5BU5D_t65* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
extern "C" bool Room_get_autoCleanUp_m629 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_masterClientId()
extern "C" int32_t Room_get_masterClientId_m630 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_masterClientId(System.Int32)
extern "C" void Room_set_masterClientId_m631 (Room_t66 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" void Room_SetCustomProperties_m632 (Room_t66 * __this, Hashtable_t40 * ___propertiesToSet, Hashtable_t40 * ___expectedValues, bool ___webForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
extern "C" void Room_SetPropertiesListedInLobby_m633 (Room_t66 * __this, StringU5BU5D_t65* ___propsListedInLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
extern "C" String_t* Room_ToString_m634 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
extern "C" String_t* Room_ToStringFull_m635 (Room_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
