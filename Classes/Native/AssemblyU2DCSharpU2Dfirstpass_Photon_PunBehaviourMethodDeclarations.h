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

// Photon.PunBehaviour
struct PunBehaviour_t81;
// PhotonPlayer
struct PhotonPlayer_t76;
// System.Object[]
struct ObjectU5BU5D_t111;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t200;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_DisconnectCause.h"

// System.Void Photon.PunBehaviour::.ctor()
extern "C" void PunBehaviour__ctor_m307 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
extern "C" void PunBehaviour_OnConnectedToPhoton_m308 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
extern "C" void PunBehaviour_OnLeftRoom_m309 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
extern "C" void PunBehaviour_OnMasterClientSwitched_m310 (PunBehaviour_t81 * __this, PhotonPlayer_t76 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonCreateRoomFailed_m311 (PunBehaviour_t81 * __this, ObjectU5BU5D_t111* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonJoinRoomFailed_m312 (PunBehaviour_t81 * __this, ObjectU5BU5D_t111* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
extern "C" void PunBehaviour_OnCreatedRoom_m313 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
extern "C" void PunBehaviour_OnJoinedLobby_m314 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
extern "C" void PunBehaviour_OnLeftLobby_m315 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
extern "C" void PunBehaviour_OnFailedToConnectToPhoton_m316 (PunBehaviour_t81 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
extern "C" void PunBehaviour_OnDisconnectedFromPhoton_m317 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
extern "C" void PunBehaviour_OnConnectionFail_m318 (PunBehaviour_t81 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
extern "C" void PunBehaviour_OnPhotonInstantiate_m319 (PunBehaviour_t81 * __this, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
extern "C" void PunBehaviour_OnReceivedRoomListUpdate_m320 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
extern "C" void PunBehaviour_OnJoinedRoom_m321 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void PunBehaviour_OnPhotonPlayerConnected_m322 (PunBehaviour_t81 * __this, PhotonPlayer_t76 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C" void PunBehaviour_OnPhotonPlayerDisconnected_m323 (PunBehaviour_t81 * __this, PhotonPlayer_t76 * ___otherPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonRandomJoinFailed_m324 (PunBehaviour_t81 * __this, ObjectU5BU5D_t111* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
extern "C" void PunBehaviour_OnConnectedToMaster_m325 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
extern "C" void PunBehaviour_OnPhotonMaxCccuReached_m326 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C" void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m327 (PunBehaviour_t81 * __this, Hashtable_t40 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C" void PunBehaviour_OnPhotonPlayerPropertiesChanged_m328 (PunBehaviour_t81 * __this, ObjectU5BU5D_t111* ___playerAndUpdatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
extern "C" void PunBehaviour_OnUpdatedFriendList_m329 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
extern "C" void PunBehaviour_OnCustomAuthenticationFailed_m330 (PunBehaviour_t81 * __this, String_t* ___debugMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void PunBehaviour_OnWebRpcResponse_m331 (PunBehaviour_t81 * __this, OperationResponse_t200 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
extern "C" void PunBehaviour_OnOwnershipRequest_m332 (PunBehaviour_t81 * __this, ObjectU5BU5D_t111* ___viewAndPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLobbyStatisticsUpdate()
extern "C" void PunBehaviour_OnLobbyStatisticsUpdate_m333 (PunBehaviour_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
