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

// InRoomChat
struct InRoomChat_t161;
// System.String
struct String_t;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void InRoomChat::.ctor()
extern "C" void InRoomChat__ctor_m740 (InRoomChat_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::.cctor()
extern "C" void InRoomChat__cctor_m741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::Start()
extern "C" void InRoomChat_Start_m742 (InRoomChat_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::OnGUI()
extern "C" void InRoomChat_OnGUI_m743 (InRoomChat_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::Chat(System.String,PhotonMessageInfo)
extern "C" void InRoomChat_Chat_m744 (InRoomChat_t161 * __this, String_t* ___newLine, PhotonMessageInfo_t82 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::AddLine(System.String)
extern "C" void InRoomChat_AddLine_m745 (InRoomChat_t161 * __this, String_t* ___newLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
