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

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t913;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t201;
// System.String
struct String_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t911;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Net.IPAddress
struct IPAddress_t269;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketState.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
extern "C" Object_t * IPhotonSocket_get_Listener_m5018 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::get_Protocol()
extern "C" uint8_t IPhotonSocket_get_Protocol_m5019 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_Protocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void IPhotonSocket_set_Protocol_m5020 (IPhotonSocket_t913 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
extern "C" int32_t IPhotonSocket_get_State_m5021 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
extern "C" void IPhotonSocket_set_State_m5022 (IPhotonSocket_t913 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
extern "C" String_t* IPhotonSocket_get_ServerAddress_m5023 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
extern "C" void IPhotonSocket_set_ServerAddress_m5024 (IPhotonSocket_t913 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
extern "C" int32_t IPhotonSocket_get_ServerPort_m5025 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerPort(System.Int32)
extern "C" void IPhotonSocket_set_ServerPort_m5026 (IPhotonSocket_t913 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
extern "C" bool IPhotonSocket_get_Connected_m5027 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
extern "C" int32_t IPhotonSocket_get_MTU_m5028 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" void IPhotonSocket__ctor_m5029 (IPhotonSocket_t913 * __this, PeerBase_t911 * ___peerBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
extern "C" bool IPhotonSocket_Connect_m5030 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
extern "C" void IPhotonSocket_HandleReceivedDatagram_m5031 (IPhotonSocket_t913 * __this, ByteU5BU5D_t21* ___inBuffer, int32_t ___length, bool ___willBeReused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
extern "C" bool IPhotonSocket_ReportDebugOfLevel_m5032 (IPhotonSocket_t913 * __this, uint8_t ___levelOfMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void IPhotonSocket_EnqueueDebugReturn_m5033 (IPhotonSocket_t913 * __this, uint8_t ___debugLevel, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
extern "C" void IPhotonSocket_HandleException_m5034 (IPhotonSocket_t913 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::TryParseAddress(System.String,System.String&,System.UInt16&)
extern "C" bool IPhotonSocket_TryParseAddress_m5035 (IPhotonSocket_t913 * __this, String_t* ___addressAndPort, String_t** ___address, uint16_t* ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
extern "C" IPAddress_t269 * IPhotonSocket_GetIpAddress_m5036 (Object_t * __this /* static, unused */, String_t* ___serverIp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::<HandleException>b__7()
extern "C" void IPhotonSocket_U3CHandleExceptionU3Eb__7_m5037 (IPhotonSocket_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
