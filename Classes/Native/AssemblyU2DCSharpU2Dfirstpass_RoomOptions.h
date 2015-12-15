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
// System.String[]
struct StringU5BU5D_t65;

#include "mscorlib_System_Object.h"

// RoomOptions
struct  RoomOptions_t38  : public Object_t
{
	// System.Boolean RoomOptions::isVisibleField
	bool ___isVisibleField_0;
	// System.Boolean RoomOptions::isOpenField
	bool ___isOpenField_1;
	// System.Byte RoomOptions::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Boolean RoomOptions::cleanupCacheOnLeaveField
	bool ___cleanupCacheOnLeaveField_3;
	// ExitGames.Client.Photon.Hashtable RoomOptions::customRoomProperties
	Hashtable_t40 * ___customRoomProperties_4;
	// System.String[] RoomOptions::customRoomPropertiesForLobby
	StringU5BU5D_t65* ___customRoomPropertiesForLobby_5;
	// System.Boolean RoomOptions::suppressRoomEventsField
	bool ___suppressRoomEventsField_6;
};
