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

// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_t952;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t911;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketError.h"

// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" void SocketUdp__ctor_m5170 (SocketUdp_t952 * __this, PeerBase_t911 * ___npeer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
extern "C" void SocketUdp_Dispose_m5171 (SocketUdp_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
extern "C" bool SocketUdp_Connect_m5172 (SocketUdp_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
extern "C" bool SocketUdp_Disconnect_m5173 (SocketUdp_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
extern "C" int32_t SocketUdp_Send_m5174 (SocketUdp_t952 * __this, ByteU5BU5D_t21* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
extern "C" void SocketUdp_DnsAndConnect_m5175 (SocketUdp_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
extern "C" void SocketUdp_ReceiveLoop_m5176 (SocketUdp_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
