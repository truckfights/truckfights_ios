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

// NetworkingPeer
struct NetworkingPeer_t61;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t60;
// System.Collections.Generic.List`1<Region>
struct List_1_t75;
// TypedLobby
struct TypedLobby_t39;
// Room
struct Room_t66;
// PhotonPlayer
struct PhotonPlayer_t76;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// ExitGames.Client.Photon.EventData
struct EventData_t199;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t68;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t200;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t37;
// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t41;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t55;
// System.String[]
struct StringU5BU5D_t65;
// System.Int32[]
struct Int32U5BU5D_t56;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t206;
// System.Type[]
struct TypeU5BU5D_t207;
// UnityEngine.GameObject
struct GameObject_t159;
// PhotonView
struct PhotonView_t83;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t80;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ServerConnection.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PeerState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionCode.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonNetworkingMessage.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonTargets.h"

// System.Void NetworkingPeer::.ctor(System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void NetworkingPeer__ctor_m177 (NetworkingPeer_t61 * __this, String_t* ___playername, uint8_t ___connectionProtocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
extern "C" void NetworkingPeer__cctor_m178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mAppVersionPun()
extern "C" String_t* NetworkingPeer_get_mAppVersionPun_m179 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_CustomAuthenticationValues()
extern "C" AuthenticationValues_t60 * NetworkingPeer_get_CustomAuthenticationValues_m180 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CustomAuthenticationValues(AuthenticationValues)
extern "C" void NetworkingPeer_set_CustomAuthenticationValues_m181 (NetworkingPeer_t61 * __this, AuthenticationValues_t60 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_NameServerAddress()
extern "C" String_t* NetworkingPeer_get_NameServerAddress_m182 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
extern "C" String_t* NetworkingPeer_get_MasterServerAddress_m183 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
extern "C" void NetworkingPeer_set_MasterServerAddress_m184 (NetworkingPeer_t61 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mGameserver()
extern "C" String_t* NetworkingPeer_get_mGameserver_m185 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameserver(System.String)
extern "C" void NetworkingPeer_set_mGameserver_m186 (NetworkingPeer_t61 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_server()
extern "C" int32_t NetworkingPeer_get_server_m187 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_server(ServerConnection)
extern "C" void NetworkingPeer_set_server_m188 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState NetworkingPeer::get_State()
extern "C" int32_t NetworkingPeer_get_State_m189 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(PeerState)
extern "C" void NetworkingPeer_set_State_m190 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
extern "C" bool NetworkingPeer_get_IsUsingNameServer_m191 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
extern "C" void NetworkingPeer_set_IsUsingNameServer_m192 (NetworkingPeer_t61 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
extern "C" bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m193 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
extern "C" List_1_t75 * NetworkingPeer_get_AvailableRegions_m194 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
extern "C" void NetworkingPeer_set_AvailableRegions_m195 (NetworkingPeer_t61 * __this, List_1_t75 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C" int32_t NetworkingPeer_get_CloudRegion_m196 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
extern "C" void NetworkingPeer_set_CloudRegion_m197 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_requestLobbyStatistics()
extern "C" bool NetworkingPeer_get_requestLobbyStatistics_m198 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
extern "C" TypedLobby_t39 * NetworkingPeer_get_lobby_m199 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
extern "C" void NetworkingPeer_set_lobby_m200 (NetworkingPeer_t61 * __this, TypedLobby_t39 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersOnMasterCount()
extern "C" int32_t NetworkingPeer_get_mPlayersOnMasterCount_m201 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersOnMasterCount(System.Int32)
extern "C" void NetworkingPeer_set_mPlayersOnMasterCount_m202 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mGameCount()
extern "C" int32_t NetworkingPeer_get_mGameCount_m203 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameCount(System.Int32)
extern "C" void NetworkingPeer_set_mGameCount_m204 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersInRoomsCount()
extern "C" int32_t NetworkingPeer_get_mPlayersInRoomsCount_m205 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersInRoomsCount(System.Int32)
extern "C" void NetworkingPeer_set_mPlayersInRoomsCount_m206 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendsListAge()
extern "C" int32_t NetworkingPeer_get_FriendsListAge_m207 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
extern "C" String_t* NetworkingPeer_get_PlayerName_m208 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
extern "C" void NetworkingPeer_set_PlayerName_m209 (NetworkingPeer_t61 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_CurrentGame()
extern "C" Room_t66 * NetworkingPeer_get_CurrentGame_m210 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CurrentGame(Room)
extern "C" void NetworkingPeer_set_CurrentGame_m211 (NetworkingPeer_t61 * __this, Room_t66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_mLocalActor()
extern "C" PhotonPlayer_t76 * NetworkingPeer_get_mLocalActor_m212 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mLocalActor(PhotonPlayer)
extern "C" void NetworkingPeer_set_mLocalActor_m213 (NetworkingPeer_t61 * __this, PhotonPlayer_t76 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mMasterClientId()
extern "C" int32_t NetworkingPeer_get_mMasterClientId_m214 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mMasterClientId(System.Int32)
extern "C" void NetworkingPeer_set_mMasterClientId_m215 (NetworkingPeer_t61 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::GetNameServerAddress()
extern "C" String_t* NetworkingPeer_GetNameServerAddress_m216 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
extern "C" bool NetworkingPeer_Connect_m217 (NetworkingPeer_t61 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
extern "C" bool NetworkingPeer_Connect_m218 (NetworkingPeer_t61 * __this, String_t* ___serverAddress, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
extern "C" bool NetworkingPeer_ConnectToNameServer_m219 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
extern "C" bool NetworkingPeer_ConnectToRegionMaster_m220 (NetworkingPeer_t61 * __this, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
extern "C" bool NetworkingPeer_GetRegions_m221 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
extern "C" void NetworkingPeer_Disconnect_m222 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
extern "C" void NetworkingPeer_DisconnectToReconnect_m223 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
extern "C" void NetworkingPeer_LeftLobbyCleanup_m224 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
extern "C" void NetworkingPeer_LeftRoomCleanup_m225 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
extern "C" void NetworkingPeer_LocalCleanupAnythingInstantiated_m226 (NetworkingPeer_t61 * __this, bool ___destroyInstantiatedGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C" void NetworkingPeer_ReadoutProperties_m227 (NetworkingPeer_t61 * __this, Hashtable_t40 * ___gameProperties, Hashtable_t40 * ___pActorProperties, int32_t ___targetActorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
extern "C" void NetworkingPeer_AddNewPlayer_m228 (NetworkingPeer_t61 * __this, int32_t ___ID, PhotonPlayer_t76 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
extern "C" void NetworkingPeer_RemovePlayer_m229 (NetworkingPeer_t61 * __this, int32_t ___ID, PhotonPlayer_t76 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
extern "C" void NetworkingPeer_RebuildPlayerListCopies_m230 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
extern "C" void NetworkingPeer_ResetPhotonViewsOnSerialize_m231 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32,ExitGames.Client.Photon.EventData)
extern "C" void NetworkingPeer_HandleEventLeave_m232 (NetworkingPeer_t61 * __this, int32_t ___actorID, EventData_t199 * ___evLeave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
extern "C" void NetworkingPeer_CheckMasterClient_m233 (NetworkingPeer_t61 * __this, int32_t ___leavingPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C" void NetworkingPeer_UpdateMasterClient_m234 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
extern "C" int32_t NetworkingPeer_ReturnLowestPlayerId_m235 (Object_t * __this /* static, unused */, PhotonPlayerU5BU5D_t68* ___players, int32_t ___playerIdToIgnore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
extern "C" bool NetworkingPeer_SetMasterClient_m236 (NetworkingPeer_t61 * __this, int32_t ___playerId, bool ___sync, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32)
extern "C" bool NetworkingPeer_SetMasterClient_m237 (NetworkingPeer_t61 * __this, int32_t ___nextMasterId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetActorPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C" Hashtable_t40 * NetworkingPeer_GetActorPropertiesForActorNr_m238 (NetworkingPeer_t61 * __this, Hashtable_t40 * ___actorProperties, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithId(System.Int32)
extern "C" PhotonPlayer_t76 * NetworkingPeer_GetPlayerWithId_m239 (NetworkingPeer_t61 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
extern "C" void NetworkingPeer_SendPlayerName_m240 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C" void NetworkingPeer_GameEnteredOnGameServer_m241 (NetworkingPeer_t61 * __this, OperationResponse_t200 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
extern "C" Hashtable_t40 * NetworkingPeer_GetLocalActorProperties_m242 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
extern "C" void NetworkingPeer_ChangeLocalID_m243 (NetworkingPeer_t61 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C" bool NetworkingPeer_OpCreateGame_m244 (NetworkingPeer_t61 * __this, EnterRoomParams_t37 * ___enterRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C" bool NetworkingPeer_OpJoinRoom_m245 (NetworkingPeer_t61 * __this, EnterRoomParams_t37 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams)
extern "C" bool NetworkingPeer_OpJoinRandomRoom_m246 (NetworkingPeer_t61 * __this, OpJoinRandomRoomParams_t41 * ___opJoinRandomRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
extern "C" bool NetworkingPeer_OpLeave_m247 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C" bool NetworkingPeer_OpRaiseEvent_m248 (NetworkingPeer_t61 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t55 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void NetworkingPeer_DebugReturn_m249 (NetworkingPeer_t61 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void NetworkingPeer_OnOperationResponse_m250 (NetworkingPeer_t61 * __this, OperationResponse_t200 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
extern "C" bool NetworkingPeer_OpFindFriends_m251 (NetworkingPeer_t61 * __this, StringU5BU5D_t65* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" void NetworkingPeer_OnStatusChanged_m252 (NetworkingPeer_t61 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
extern "C" void NetworkingPeer_OnEvent_m253 (NetworkingPeer_t61 * __this, EventData_t199 * ___photonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdatedActorList(System.Int32[])
extern "C" void NetworkingPeer_UpdatedActorList_m254 (NetworkingPeer_t61 * __this, Int32U5BU5D_t56* ___actorsInRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
extern "C" void NetworkingPeer_SendVacantViewIds_m255 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
extern "C" void NetworkingPeer_SendMonoMessage_m256 (Object_t * __this /* static, unused */, int32_t ___methodString, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRpc(ExitGames.Client.Photon.Hashtable,PhotonPlayer)
extern "C" void NetworkingPeer_ExecuteRpc_m257 (NetworkingPeer_t61 * __this, Hashtable_t40 * ___rpcData, PhotonPlayer_t76 * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C" bool NetworkingPeer_CheckTypeMatch_m258 (NetworkingPeer_t61 * __this, ParameterInfoU5BU5D_t206* ___methodParameters, TypeU5BU5D_t207* ___callParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
extern "C" Hashtable_t40 * NetworkingPeer_SendInstantiate_m259 (NetworkingPeer_t61 * __this, String_t* ___prefabName, Vector3_t138  ___position, Quaternion_t154  ___rotation, int32_t ___group, Int32U5BU5D_t56* ___viewIDs, ObjectU5BU5D_t111* ___data, bool ___isGlobalObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
extern "C" GameObject_t159 * NetworkingPeer_DoInstantiate_m260 (NetworkingPeer_t61 * __this, Hashtable_t40 * ___evData, PhotonPlayer_t76 * ___photonPlayer, GameObject_t159 * ___resourceGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
extern "C" void NetworkingPeer_StoreInstantiationData_m261 (NetworkingPeer_t61 * __this, int32_t ___instantiationId, ObjectU5BU5D_t111* ___instantiationData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
extern "C" ObjectU5BU5D_t111* NetworkingPeer_FetchInstantiationData_m262 (NetworkingPeer_t61 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
extern "C" void NetworkingPeer_RemoveInstantiationData_m263 (NetworkingPeer_t61 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
extern "C" void NetworkingPeer_DestroyPlayerObjects_m264 (NetworkingPeer_t61 * __this, int32_t ___playerId, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
extern "C" void NetworkingPeer_DestroyAll_m265 (NetworkingPeer_t61 * __this, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
extern "C" void NetworkingPeer_RemoveInstantiatedGO_m266 (NetworkingPeer_t61 * __this, GameObject_t159 * ___go, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::GetInstantiatedObjectsId(UnityEngine.GameObject)
extern "C" int32_t NetworkingPeer_GetInstantiatedObjectsId_m267 (NetworkingPeer_t61 * __this, GameObject_t159 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
extern "C" void NetworkingPeer_ServerCleanInstantiateAndDestroy_m268 (NetworkingPeer_t61 * __this, int32_t ___instantiateId, int32_t ___creatorId, bool ___isRuntimeInstantiated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
extern "C" void NetworkingPeer_SendDestroyOfPlayer_m269 (NetworkingPeer_t61 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
extern "C" void NetworkingPeer_SendDestroyOfAll_m270 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
extern "C" void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m271 (NetworkingPeer_t61 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
extern "C" void NetworkingPeer_RequestOwnership_m272 (NetworkingPeer_t61 * __this, int32_t ___viewID, int32_t ___fromOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
extern "C" void NetworkingPeer_TransferOwnership_m273 (NetworkingPeer_t61 * __this, int32_t ___viewID, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::LocalCleanPhotonView(PhotonView)
extern "C" bool NetworkingPeer_LocalCleanPhotonView_m274 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
extern "C" PhotonView_t83 * NetworkingPeer_GetPhotonView_m275 (NetworkingPeer_t61 * __this, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
extern "C" void NetworkingPeer_RegisterPhotonView_m276 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___netView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
extern "C" void NetworkingPeer_OpCleanRpcBuffer_m277 (NetworkingPeer_t61 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
extern "C" void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m278 (NetworkingPeer_t61 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
extern "C" void NetworkingPeer_OpRemoveCompleteCache_m279 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
extern "C" void NetworkingPeer_RemoveCacheOfLeftPlayers_m280 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
extern "C" void NetworkingPeer_CleanRpcBufferIfMine_m281 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
extern "C" void NetworkingPeer_OpCleanRpcBuffer_m282 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
extern "C" void NetworkingPeer_RemoveRPCsInGroup_m283 (NetworkingPeer_t61 * __this, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
extern "C" void NetworkingPeer_SetLevelPrefix_m284 (NetworkingPeer_t61 * __this, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void NetworkingPeer_RPC_m285 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, String_t* ___methodName, PhotonPlayer_t76 * ___player, bool ___encrypt, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void NetworkingPeer_RPC_m286 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C" void NetworkingPeer_SetReceivingEnabled_m287 (NetworkingPeer_t61 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C" void NetworkingPeer_SetReceivingEnabled_m288 (NetworkingPeer_t61 * __this, Int32U5BU5D_t56* ___enableGroups, Int32U5BU5D_t56* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
extern "C" void NetworkingPeer_SetSendingEnabled_m289 (NetworkingPeer_t61 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C" void NetworkingPeer_SetSendingEnabled_m290 (NetworkingPeer_t61 * __this, Int32U5BU5D_t56* ___enableGroups, Int32U5BU5D_t56* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
extern "C" void NetworkingPeer_NewSceneLoaded_m291 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
extern "C" void NetworkingPeer_RunViewUpdate_m292 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::OnSerializeWrite(PhotonView)
extern "C" Hashtable_t40 * NetworkingPeer_OnSerializeWrite_m293 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(ExitGames.Client.Photon.Hashtable,PhotonPlayer,System.Int32,System.Int16)
extern "C" void NetworkingPeer_OnSerializeRead_m294 (NetworkingPeer_t61 * __this, Hashtable_t40 * ___data, PhotonPlayer_t76 * ___sender, int32_t ___networkTime, int16_t ___correctPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
extern "C" bool NetworkingPeer_AlmostEquals_m295 (NetworkingPeer_t61 * __this, ObjectU5BU5D_t111* ___lastData, ObjectU5BU5D_t111* ___currentContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionWrite(PhotonView,ExitGames.Client.Photon.Hashtable)
extern "C" bool NetworkingPeer_DeltaCompressionWrite_m296 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, Hashtable_t40 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionRead(PhotonView,ExitGames.Client.Photon.Hashtable)
extern "C" bool NetworkingPeer_DeltaCompressionRead_m297 (NetworkingPeer_t61 * __this, PhotonView_t83 * ___view, Hashtable_t40 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ObjectIsSameWithInprecision(System.Object,System.Object)
extern "C" bool NetworkingPeer_ObjectIsSameWithInprecision_m298 (NetworkingPeer_t61 * __this, Object_t * ___one, Object_t * ___two, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
extern "C" bool NetworkingPeer_GetMethod_m299 (Object_t * __this /* static, unused */, MonoBehaviour_t80 * ___monob, String_t* ___methodType, MethodInfo_t ** ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
extern "C" void NetworkingPeer_LoadLevelIfSynced_m300 (NetworkingPeer_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
extern "C" void NetworkingPeer_SetLevelInPropsIfSynced_m301 (NetworkingPeer_t61 * __this, Object_t * ___levelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
extern "C" void NetworkingPeer_SetApp_m302 (NetworkingPeer_t61 * __this, String_t* ___appId, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
extern "C" bool NetworkingPeer_WebRpc_m303 (NetworkingPeer_t61 * __this, String_t* ___uriPath, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
