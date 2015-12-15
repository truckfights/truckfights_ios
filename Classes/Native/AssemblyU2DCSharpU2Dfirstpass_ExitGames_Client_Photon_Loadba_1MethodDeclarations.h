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

// ExitGames.Client.Photon.LoadbalancingPeer
struct LoadbalancingPeer_t42;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t39;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t43;
// RoomOptions
struct RoomOptions_t38;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t37;
// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t41;
// System.String[]
struct StringU5BU5D_t65;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// System.Object
struct Object_t;
// AuthenticationValues
struct AuthenticationValues_t60;
// System.Byte[]
struct ByteU5BU5D_t21;
// RaiseEventOptions
struct RaiseEventOptions_t55;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.LoadbalancingPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void LoadbalancingPeer__ctor_m127 (LoadbalancingPeer_t42 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::get_IsProtocolSecure()
extern "C" bool LoadbalancingPeer_get_IsProtocolSecure_m128 (LoadbalancingPeer_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpGetRegions(System.String)
extern "C" bool LoadbalancingPeer_OpGetRegions_m129 (LoadbalancingPeer_t42 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinLobby(TypedLobby)
extern "C" bool LoadbalancingPeer_OpJoinLobby_m130 (LoadbalancingPeer_t42 * __this, TypedLobby_t39 * ___lobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveLobby()
extern "C" bool LoadbalancingPeer_OpLeaveLobby_m131 (LoadbalancingPeer_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,RoomOptions)
extern "C" void LoadbalancingPeer_RoomOptionsToOpParameters_m132 (LoadbalancingPeer_t42 * __this, Dictionary_2_t43 * ___op, RoomOptions_t38 * ___roomOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpCreateRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C" bool LoadbalancingPeer_OpCreateRoom_m133 (LoadbalancingPeer_t42 * __this, EnterRoomParams_t37 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C" bool LoadbalancingPeer_OpJoinRoom_m134 (LoadbalancingPeer_t42 * __this, EnterRoomParams_t37 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams)
extern "C" bool LoadbalancingPeer_OpJoinRandomRoom_m135 (LoadbalancingPeer_t42 * __this, OpJoinRandomRoomParams_t41 * ___opJoinRandomRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveRoom(System.Boolean)
extern "C" bool LoadbalancingPeer_OpLeaveRoom_m136 (LoadbalancingPeer_t42 * __this, bool ___becomeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpFindFriends(System.String[])
extern "C" bool LoadbalancingPeer_OpFindFriends_m137 (LoadbalancingPeer_t42 * __this, StringU5BU5D_t65* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C" bool LoadbalancingPeer_OpSetCustomPropertiesOfActor_m138 (LoadbalancingPeer_t42 * __this, int32_t ___actorNr, Hashtable_t40 * ___actorProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" bool LoadbalancingPeer_OpSetPropertiesOfActor_m139 (LoadbalancingPeer_t42 * __this, int32_t ___actorNr, Hashtable_t40 * ___actorProperties, Hashtable_t40 * ___expectedProperties, bool ___webForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
extern "C" void LoadbalancingPeer_OpSetPropertyOfRoom_m140 (LoadbalancingPeer_t42 * __this, uint8_t ___propCode, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C" bool LoadbalancingPeer_OpSetCustomPropertiesOfRoom_m141 (LoadbalancingPeer_t42 * __this, Hashtable_t40 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" bool LoadbalancingPeer_OpSetPropertiesOfRoom_m142 (LoadbalancingPeer_t42 * __this, Hashtable_t40 * ___gameProperties, Hashtable_t40 * ___expectedProperties, bool ___webForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpAuthenticate(System.String,System.String,AuthenticationValues,System.String,System.Boolean)
extern "C" bool LoadbalancingPeer_OpAuthenticate_m143 (LoadbalancingPeer_t42 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t60 * ___authValues, String_t* ___regionCode, bool ___getLobbyStatistics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C" bool LoadbalancingPeer_OpChangeGroups_m144 (LoadbalancingPeer_t42 * __this, ByteU5BU5D_t21* ___groupsToRemove, ByteU5BU5D_t21* ___groupsToAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C" bool LoadbalancingPeer_OpRaiseEvent_m145 (LoadbalancingPeer_t42 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t55 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
