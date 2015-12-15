#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t2;
// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_Photon_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// InRoomChat
struct  InRoomChat_t161  : public MonoBehaviour_t79
{
	// UnityEngine.Rect InRoomChat::GuiRect
	Rect_t95  ___GuiRect_2;
	// System.Boolean InRoomChat::IsVisible
	bool ___IsVisible_3;
	// System.Boolean InRoomChat::AlignBottom
	bool ___AlignBottom_4;
	// System.Collections.Generic.List`1<System.String> InRoomChat::messages
	List_1_t2 * ___messages_5;
	// System.String InRoomChat::inputLine
	String_t* ___inputLine_6;
	// UnityEngine.Vector2 InRoomChat::scrollPos
	Vector2_t162  ___scrollPos_7;
};
struct InRoomChat_t161_StaticFields{
	// System.String InRoomChat::ChatRPC
	String_t* ___ChatRPC_8;
};
