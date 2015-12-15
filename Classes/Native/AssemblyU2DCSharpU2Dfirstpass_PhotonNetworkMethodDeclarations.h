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

// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t60;
// Room
struct Room_t66;
// PhotonPlayer
struct PhotonPlayer_t76;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t68;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t104;
// IPunPrefabPool
struct IPunPrefabPool_t78;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t62;
// TypedLobby
struct TypedLobby_t39;
// System.String[]
struct StringU5BU5D_t65;
// RoomOptions
struct RoomOptions_t38;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// RoomInfo[]
struct RoomInfoU5BU5D_t64;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t55;
// System.Int32[]
struct Int32U5BU5D_t56;
// UnityEngine.GameObject
struct GameObject_t159;
// System.Object[]
struct ObjectU5BU5D_t111;
// PhotonView
struct PhotonView_t83;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t102;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ConnectionState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PeerState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ServerConnection.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionCode.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Matchm.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonTargets.h"

// System.Void PhotonNetwork::.cctor()
extern "C" void PhotonNetwork__cctor_m409 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_gameVersion()
extern "C" String_t* PhotonNetwork_get_gameVersion_m410 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_gameVersion(System.String)
extern "C" void PhotonNetwork_set_gameVersion_m411 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
extern "C" String_t* PhotonNetwork_get_ServerAddress_m412 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
extern "C" bool PhotonNetwork_get_connected_m413 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connecting()
extern "C" bool PhotonNetwork_get_connecting_m414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
extern "C" bool PhotonNetwork_get_connectedAndReady_m415 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConnectionState PhotonNetwork::get_connectionState()
extern "C" int32_t PhotonNetwork_get_connectionState_m416 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState PhotonNetwork::get_connectionStateDetailed()
extern "C" int32_t PhotonNetwork_get_connectionStateDetailed_m417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection PhotonNetwork::get_Server()
extern "C" int32_t PhotonNetwork_get_Server_m418 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues PhotonNetwork::get_AuthValues()
extern "C" AuthenticationValues_t60 * PhotonNetwork_get_AuthValues_m419 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_AuthValues(AuthenticationValues)
extern "C" void PhotonNetwork_set_AuthValues_m420 (Object_t * __this /* static, unused */, AuthenticationValues_t60 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
extern "C" Room_t66 * PhotonNetwork_get_room_m421 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_player()
extern "C" PhotonPlayer_t76 * PhotonNetwork_get_player_m422 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_masterClient()
extern "C" PhotonPlayer_t76 * PhotonNetwork_get_masterClient_m423 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_playerName()
extern "C" String_t* PhotonNetwork_get_playerName_m424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_playerName(System.String)
extern "C" void PhotonNetwork_set_playerName_m425 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_playerList()
extern "C" PhotonPlayerU5BU5D_t68* PhotonNetwork_get_playerList_m426 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_otherPlayers()
extern "C" PhotonPlayerU5BU5D_t68* PhotonNetwork_get_otherPlayers_m427 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::get_Friends()
extern "C" List_1_t104 * PhotonNetwork_get_Friends_m428 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_Friends(System.Collections.Generic.List`1<FriendInfo>)
extern "C" void PhotonNetwork_set_Friends_m429 (Object_t * __this /* static, unused */, List_1_t104 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_FriendsListAge()
extern "C" int32_t PhotonNetwork_get_FriendsListAge_m430 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IPunPrefabPool PhotonNetwork::get_PrefabPool()
extern "C" Object_t * PhotonNetwork_get_PrefabPool_m431 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_PrefabPool(IPunPrefabPool)
extern "C" void PhotonNetwork_set_PrefabPool_m432 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_offlineMode()
extern "C" bool PhotonNetwork_get_offlineMode_m433 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_offlineMode(System.Boolean)
extern "C" void PhotonNetwork_set_offlineMode_m434 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_automaticallySyncScene()
extern "C" bool PhotonNetwork_get_automaticallySyncScene_m435 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_automaticallySyncScene(System.Boolean)
extern "C" void PhotonNetwork_set_automaticallySyncScene_m436 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
extern "C" bool PhotonNetwork_get_autoCleanUpPlayerObjects_m437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoCleanUpPlayerObjects(System.Boolean)
extern "C" void PhotonNetwork_set_autoCleanUpPlayerObjects_m438 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoJoinLobby()
extern "C" bool PhotonNetwork_get_autoJoinLobby_m439 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoJoinLobby(System.Boolean)
extern "C" void PhotonNetwork_set_autoJoinLobby_m440 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_EnableLobbyStatistics()
extern "C" bool PhotonNetwork_get_EnableLobbyStatistics_m441 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_EnableLobbyStatistics(System.Boolean)
extern "C" void PhotonNetwork_set_EnableLobbyStatistics_m442 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TypedLobbyInfo> PhotonNetwork::get_LobbyStatistics()
extern "C" List_1_t62 * PhotonNetwork_get_LobbyStatistics_m443 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_LobbyStatistics(System.Collections.Generic.List`1<TypedLobbyInfo>)
extern "C" void PhotonNetwork_set_LobbyStatistics_m444 (Object_t * __this /* static, unused */, List_1_t62 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_insideLobby()
extern "C" bool PhotonNetwork_get_insideLobby_m445 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
extern "C" TypedLobby_t39 * PhotonNetwork_get_lobby_m446 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_lobby(TypedLobby)
extern "C" void PhotonNetwork_set_lobby_m447 (Object_t * __this /* static, unused */, TypedLobby_t39 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRate()
extern "C" int32_t PhotonNetwork_get_sendRate_m448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRate(System.Int32)
extern "C" void PhotonNetwork_set_sendRate_m449 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRateOnSerialize()
extern "C" int32_t PhotonNetwork_get_sendRateOnSerialize_m450 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRateOnSerialize(System.Int32)
extern "C" void PhotonNetwork_set_sendRateOnSerialize_m451 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMessageQueueRunning()
extern "C" bool PhotonNetwork_get_isMessageQueueRunning_m452 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_isMessageQueueRunning(System.Boolean)
extern "C" void PhotonNetwork_set_isMessageQueueRunning_m453 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_unreliableCommandsLimit()
extern "C" int32_t PhotonNetwork_get_unreliableCommandsLimit_m454 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_unreliableCommandsLimit(System.Int32)
extern "C" void PhotonNetwork_set_unreliableCommandsLimit_m455 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonNetwork::get_time()
extern "C" double PhotonNetwork_get_time_m456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ServerTimestamp()
extern "C" int32_t PhotonNetwork_get_ServerTimestamp_m457 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMasterClient()
extern "C" bool PhotonNetwork_get_isMasterClient_m458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
extern "C" bool PhotonNetwork_get_inRoom_m459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isNonMasterClientInRoom()
extern "C" bool PhotonNetwork_get_isNonMasterClientInRoom_m460 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersOnMaster()
extern "C" int32_t PhotonNetwork_get_countOfPlayersOnMaster_m461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersInRooms()
extern "C" int32_t PhotonNetwork_get_countOfPlayersInRooms_m462 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayers()
extern "C" int32_t PhotonNetwork_get_countOfPlayers_m463 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfRooms()
extern "C" int32_t PhotonNetwork_get_countOfRooms_m464 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_NetworkStatisticsEnabled()
extern "C" bool PhotonNetwork_get_NetworkStatisticsEnabled_m465 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
extern "C" void PhotonNetwork_set_NetworkStatisticsEnabled_m466 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ResentReliableCommands()
extern "C" int32_t PhotonNetwork_get_ResentReliableCommands_m467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_CrcCheckEnabled()
extern "C" bool PhotonNetwork_get_CrcCheckEnabled_m468 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_CrcCheckEnabled(System.Boolean)
extern "C" void PhotonNetwork_set_CrcCheckEnabled_m469 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_PacketLossByCrcCheck()
extern "C" int32_t PhotonNetwork_get_PacketLossByCrcCheck_m470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_MaxResendsBeforeDisconnect()
extern "C" int32_t PhotonNetwork_get_MaxResendsBeforeDisconnect_m471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_MaxResendsBeforeDisconnect(System.Int32)
extern "C" void PhotonNetwork_set_MaxResendsBeforeDisconnect_m472 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_QuickResends()
extern "C" int32_t PhotonNetwork_get_QuickResends_m473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_QuickResends(System.Int32)
extern "C" void PhotonNetwork_set_QuickResends_m474 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SwitchToProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void PhotonNetwork_SwitchToProtocol_m475 (Object_t * __this /* static, unused */, uint8_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectUsingSettings(System.String)
extern "C" bool PhotonNetwork_ConnectUsingSettings_m476 (Object_t * __this /* static, unused */, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToMaster(System.String,System.Int32,System.String,System.String)
extern "C" bool PhotonNetwork_ConnectToMaster_m477 (Object_t * __this /* static, unused */, String_t* ___masterServerAddress, int32_t ___port, String_t* ___appID, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToBestCloudServer(System.String)
extern "C" bool PhotonNetwork_ConnectToBestCloudServer_m478 (Object_t * __this /* static, unused */, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToRegion(CloudRegionCode,System.String)
extern "C" bool PhotonNetwork_ConnectToRegion_m479 (Object_t * __this /* static, unused */, int32_t ___region, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::OverrideBestCloudServer(CloudRegionCode)
extern "C" void PhotonNetwork_OverrideBestCloudServer_m480 (Object_t * __this /* static, unused */, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RefreshCloudServerRating()
extern "C" void PhotonNetwork_RefreshCloudServerRating_m481 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::NetworkStatisticsReset()
extern "C" void PhotonNetwork_NetworkStatisticsReset_m482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
extern "C" String_t* PhotonNetwork_NetworkStatisticsToString_m483 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InitializeSecurity()
extern "C" void PhotonNetwork_InitializeSecurity_m484 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::VerifyCanUseNetwork()
extern "C" bool PhotonNetwork_VerifyCanUseNetwork_m485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Disconnect()
extern "C" void PhotonNetwork_Disconnect_m486 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::FindFriends(System.String[])
extern "C" bool PhotonNetwork_FindFriends_m487 (Object_t * __this /* static, unused */, StringU5BU5D_t65* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String)
extern "C" bool PhotonNetwork_CreateRoom_m488 (Object_t * __this /* static, unused */, String_t* ___roomName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby)
extern "C" bool PhotonNetwork_CreateRoom_m489 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t38 * ___roomOptions, TypedLobby_t39 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby,System.String[])
extern "C" bool PhotonNetwork_CreateRoom_m490 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t38 * ___roomOptions, TypedLobby_t39 * ___typedLobby, StringU5BU5D_t65* ___expectedUsers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String)
extern "C" bool PhotonNetwork_JoinRoom_m491 (Object_t * __this /* static, unused */, String_t* ___roomName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby)
extern "C" bool PhotonNetwork_JoinOrCreateRoom_m492 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t38 * ___roomOptions, TypedLobby_t39 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom()
extern "C" bool PhotonNetwork_JoinRandomRoom_m493 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte)
extern "C" bool PhotonNetwork_JoinRandomRoom_m494 (Object_t * __this /* static, unused */, Hashtable_t40 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.MatchmakingMode,TypedLobby,System.String)
extern "C" bool PhotonNetwork_JoinRandomRoom_m495 (Object_t * __this /* static, unused */, Hashtable_t40 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, uint8_t ___matchingType, TypedLobby_t39 * ___typedLobby, String_t* ___sqlLobbyFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::EnterOfflineRoom(System.String,RoomOptions,System.Boolean)
extern "C" void PhotonNetwork_EnterOfflineRoom_m496 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t38 * ___roomOptions, bool ___createdRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby()
extern "C" bool PhotonNetwork_JoinLobby_m497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby(TypedLobby)
extern "C" bool PhotonNetwork_JoinLobby_m498 (Object_t * __this /* static, unused */, TypedLobby_t39 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveLobby()
extern "C" bool PhotonNetwork_LeaveLobby_m499 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveRoom()
extern "C" bool PhotonNetwork_LeaveRoom_m500 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomInfo[] PhotonNetwork::GetRoomList()
extern "C" RoomInfoU5BU5D_t64* PhotonNetwork_GetRoomList_m501 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetPlayerCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonNetwork_SetPlayerCustomProperties_m502 (Object_t * __this /* static, unused */, Hashtable_t40 * ___customProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemovePlayerCustomProperties(System.String[])
extern "C" void PhotonNetwork_RemovePlayerCustomProperties_m503 (Object_t * __this /* static, unused */, StringU5BU5D_t65* ___customPropertiesToDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::RaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C" bool PhotonNetwork_RaiseEvent_m504 (Object_t * __this /* static, unused */, uint8_t ___eventCode, Object_t * ___eventContent, bool ___sendReliable, RaiseEventOptions_t55 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID()
extern "C" int32_t PhotonNetwork_AllocateViewID_m505 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateSceneViewID()
extern "C" int32_t PhotonNetwork_AllocateSceneViewID_m506 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID(System.Int32)
extern "C" int32_t PhotonNetwork_AllocateViewID_m507 (Object_t * __this /* static, unused */, int32_t ___ownerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PhotonNetwork::AllocateSceneViewIDs(System.Int32)
extern "C" Int32U5BU5D_t56* PhotonNetwork_AllocateSceneViewIDs_m508 (Object_t * __this /* static, unused */, int32_t ___countOfNewViews, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
extern "C" void PhotonNetwork_UnAllocateViewID_m509 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" GameObject_t159 * PhotonNetwork_Instantiate_m510 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t138  ___position, Quaternion_t154  ___rotation, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C" GameObject_t159 * PhotonNetwork_Instantiate_m511 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t138  ___position, Quaternion_t154  ___rotation, int32_t ___group, ObjectU5BU5D_t111* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C" GameObject_t159 * PhotonNetwork_InstantiateSceneObject_m512 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t138  ___position, Quaternion_t154  ___rotation, int32_t ___group, ObjectU5BU5D_t111* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::GetPing()
extern "C" int32_t PhotonNetwork_GetPing_m513 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::FetchServerTimestamp()
extern "C" void PhotonNetwork_FetchServerTimestamp_m514 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SendOutgoingCommands()
extern "C" void PhotonNetwork_SendOutgoingCommands_m515 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CloseConnection(PhotonPlayer)
extern "C" bool PhotonNetwork_CloseConnection_m516 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___kickPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::SetMasterClient(PhotonPlayer)
extern "C" bool PhotonNetwork_SetMasterClient_m517 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___masterClientPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(PhotonView)
extern "C" void PhotonNetwork_Destroy_m518 (Object_t * __this /* static, unused */, PhotonView_t83 * ___targetView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(UnityEngine.GameObject)
extern "C" void PhotonNetwork_Destroy_m519 (Object_t * __this /* static, unused */, GameObject_t159 * ___targetGo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(PhotonPlayer)
extern "C" void PhotonNetwork_DestroyPlayerObjects_m520 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___targetPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(System.Int32)
extern "C" void PhotonNetwork_DestroyPlayerObjects_m521 (Object_t * __this /* static, unused */, int32_t ___targetPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyAll()
extern "C" void PhotonNetwork_DestroyAll_m522 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonPlayer)
extern "C" void PhotonNetwork_RemoveRPCs_m523 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___targetPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonView)
extern "C" void PhotonNetwork_RemoveRPCs_m524 (Object_t * __this /* static, unused */, PhotonView_t83 * ___targetPhotonView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCsInGroup(System.Int32)
extern "C" void PhotonNetwork_RemoveRPCsInGroup_m525 (Object_t * __this /* static, unused */, int32_t ___targetGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void PhotonNetwork_RPC_m526 (Object_t * __this /* static, unused */, PhotonView_t83 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void PhotonNetwork_RPC_m527 (Object_t * __this /* static, unused */, PhotonView_t83 * ___view, String_t* ___methodName, PhotonPlayer_t76 * ___targetPlayer, bool ___encrpyt, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::CacheSendMonoMessageTargets(System.Type)
extern "C" void PhotonNetwork_CacheSendMonoMessageTargets_m528 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::FindGameObjectsWithComponent(System.Type)
extern "C" HashSet_1_t102 * PhotonNetwork_FindGameObjectsWithComponent_m529 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C" void PhotonNetwork_SetReceivingEnabled_m530 (Object_t * __this /* static, unused */, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C" void PhotonNetwork_SetReceivingEnabled_m531 (Object_t * __this /* static, unused */, Int32U5BU5D_t56* ___enableGroups, Int32U5BU5D_t56* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32,System.Boolean)
extern "C" void PhotonNetwork_SetSendingEnabled_m532 (Object_t * __this /* static, unused */, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C" void PhotonNetwork_SetSendingEnabled_m533 (Object_t * __this /* static, unused */, Int32U5BU5D_t56* ___enableGroups, Int32U5BU5D_t56* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetLevelPrefix(System.Int16)
extern "C" void PhotonNetwork_SetLevelPrefix_m534 (Object_t * __this /* static, unused */, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.Int32)
extern "C" void PhotonNetwork_LoadLevel_m535 (Object_t * __this /* static, unused */, int32_t ___levelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.String)
extern "C" void PhotonNetwork_LoadLevel_m536 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::WebRpc(System.String,System.Object)
extern "C" bool PhotonNetwork_WebRpc_m537 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
