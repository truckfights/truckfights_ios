#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t941;
// System.Object
struct Object_t;

#include "Photon3Unity3D_ExitGames_Client_Photon_IPhotonSocket.h"

// ExitGames.Client.Photon.SocketTcp
struct  SocketTcp_t951  : public IPhotonSocket_t913
{
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_t941 * ___sock_6;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	Object_t * ___syncer_7;
};
