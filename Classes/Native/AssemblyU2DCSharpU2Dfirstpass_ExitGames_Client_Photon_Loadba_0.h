#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// TypedLobby
struct TypedLobby_t39;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Matchm.h"

// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct  OpJoinRandomRoomParams_t41  : public Object_t
{
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_t40 * ___ExpectedCustomRoomProperties_0;
	// System.Byte ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// ExitGames.Client.Photon.MatchmakingMode ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// TypedLobby ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t39 * ___TypedLobby_3;
	// System.String ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
};
