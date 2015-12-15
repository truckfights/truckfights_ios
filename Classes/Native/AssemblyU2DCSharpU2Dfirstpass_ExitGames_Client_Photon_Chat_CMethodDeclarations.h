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

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t1;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t65;
// System.Object[]
struct ObjectU5BU5D_t111;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern "C" void ChatChannel__ctor_m0 (ChatChannel_t1 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C" bool ChatChannel_get_IsPrivate_m1 (ChatChannel_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" void ChatChannel_set_IsPrivate_m2 (ChatChannel_t1 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C" int32_t ChatChannel_get_MessageCount_m3 (ChatChannel_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C" void ChatChannel_Add_m4 (ChatChannel_t1 * __this, String_t* ___sender, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern "C" void ChatChannel_Add_m5 (ChatChannel_t1 * __this, StringU5BU5D_t65* ___senders, ObjectU5BU5D_t111* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C" void ChatChannel_ClearMessages_m6 (ChatChannel_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatChannel::ToStringMessages()
extern "C" String_t* ChatChannel_ToStringMessages_m7 (ChatChannel_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
