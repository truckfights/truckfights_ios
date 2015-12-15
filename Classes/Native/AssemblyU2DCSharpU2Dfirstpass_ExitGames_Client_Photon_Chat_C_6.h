#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t14;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeer.h"

// ExitGames.Client.Photon.Chat.ChatPeer
struct  ChatPeer_t6  : public PhotonPeer_t13
{
};
struct ChatPeer_t6_StaticFields{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t14 * ___ProtocolToNameServerPort_7;
};
