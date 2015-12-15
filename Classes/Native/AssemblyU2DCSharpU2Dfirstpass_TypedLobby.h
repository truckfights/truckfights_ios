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
// TypedLobby
struct TypedLobby_t39;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LobbyType.h"

// TypedLobby
struct  TypedLobby_t39  : public Object_t
{
	// System.String TypedLobby::Name
	String_t* ___Name_0;
	// LobbyType TypedLobby::Type
	uint8_t ___Type_1;
};
struct TypedLobby_t39_StaticFields{
	// TypedLobby TypedLobby::Default
	TypedLobby_t39 * ___Default_2;
};
