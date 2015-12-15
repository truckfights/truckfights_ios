#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t931;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t917;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t973;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct  LinkedListNode_1_t973  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>::item
	SimulationItem_t931 * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>::container
	LinkedList_1_t917 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>::forward
	LinkedListNode_1_t973 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>::back
	LinkedListNode_1_t973 * ___back_3;
};
