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

// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t951;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t911;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketError.h"

// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" void SocketTcp__ctor_m5163 (SocketTcp_t951 * __this, PeerBase_t911 * ___npeer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
extern "C" void SocketTcp_Dispose_m5164 (SocketTcp_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Connect()
extern "C" bool SocketTcp_Connect_m5165 (SocketTcp_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Disconnect()
extern "C" bool SocketTcp_Disconnect_m5166 (SocketTcp_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Send(System.Byte[],System.Int32)
extern "C" int32_t SocketTcp_Send_m5167 (SocketTcp_t951 * __this, ByteU5BU5D_t21* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::DnsAndConnect()
extern "C" void SocketTcp_DnsAndConnect_m5168 (SocketTcp_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::ReceiveLoop()
extern "C" void SocketTcp_ReceiveLoop_m5169 (SocketTcp_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
