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
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct  LinkedList_1_t917  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::count
	uint32_t ___count_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::version
	uint32_t ___version_3;
	// System.Object System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::syncRoot
	Object_t * ___syncRoot_4;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::first
	LinkedListNode_1_t973 * ___first_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::si
	SerializationInfo_t862 * ___si_6;
};
