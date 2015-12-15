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

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t7;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_7.h"

// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C" void AuthenticationValues__ctor_m73 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C" void AuthenticationValues__ctor_m74 (AuthenticationValues_t7 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthType()
extern "C" uint8_t AuthenticationValues_get_AuthType_m75 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthType(ExitGames.Client.Photon.Chat.CustomAuthenticationType)
extern "C" void AuthenticationValues_set_AuthType_m76 (AuthenticationValues_t7 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C" String_t* AuthenticationValues_get_AuthGetParameters_m77 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C" void AuthenticationValues_set_AuthGetParameters_m78 (AuthenticationValues_t7 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" Object_t * AuthenticationValues_get_AuthPostData_m79 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" void AuthenticationValues_set_AuthPostData_m80 (AuthenticationValues_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_Token()
extern "C" String_t* AuthenticationValues_get_Token_m81 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C" void AuthenticationValues_set_Token_m82 (AuthenticationValues_t7 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C" String_t* AuthenticationValues_get_UserId_m83 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" void AuthenticationValues_set_UserId_m84 (AuthenticationValues_t7 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C" void AuthenticationValues_SetAuthPostData_m85 (AuthenticationValues_t7 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" void AuthenticationValues_SetAuthPostData_m86 (AuthenticationValues_t7 * __this, ByteU5BU5D_t21* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C" void AuthenticationValues_AddAuthParameter_m87 (AuthenticationValues_t7 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern "C" String_t* AuthenticationValues_ToString_m88 (AuthenticationValues_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
