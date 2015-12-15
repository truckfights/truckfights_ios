﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// RoomOptions
struct RoomOptions_t38;
// TypedLobby
struct TypedLobby_t39;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;

#include "mscorlib_System_Object.h"

// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct  EnterRoomParams_t37  : public Object_t
{
	// System.String ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// RoomOptions ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams::RoomOptions
	RoomOptions_t38 * ___RoomOptions_1;
	// TypedLobby ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams::Lobby
	TypedLobby_t39 * ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams::PlayerProperties
	Hashtable_t40 * ___PlayerProperties_3;
	// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams::CreateIfNotExists
	bool ___CreateIfNotExists_5;
};
