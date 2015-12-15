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

// AuthenticationValues
struct AuthenticationValues_t60;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CustomAuthenticationType.h"

// System.Void AuthenticationValues::.ctor()
extern "C" void AuthenticationValues__ctor_m161 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::.ctor(System.String)
extern "C" void AuthenticationValues__ctor_m162 (AuthenticationValues_t60 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CustomAuthenticationType AuthenticationValues::get_AuthType()
extern "C" uint8_t AuthenticationValues_get_AuthType_m163 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthType(CustomAuthenticationType)
extern "C" void AuthenticationValues_set_AuthType_m164 (AuthenticationValues_t60 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_AuthGetParameters()
extern "C" String_t* AuthenticationValues_get_AuthGetParameters_m165 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthGetParameters(System.String)
extern "C" void AuthenticationValues_set_AuthGetParameters_m166 (AuthenticationValues_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object AuthenticationValues::get_AuthPostData()
extern "C" Object_t * AuthenticationValues_get_AuthPostData_m167 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthPostData(System.Object)
extern "C" void AuthenticationValues_set_AuthPostData_m168 (AuthenticationValues_t60 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_Token()
extern "C" String_t* AuthenticationValues_get_Token_m169 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_Token(System.String)
extern "C" void AuthenticationValues_set_Token_m170 (AuthenticationValues_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_UserId()
extern "C" String_t* AuthenticationValues_get_UserId_m171 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_UserId(System.String)
extern "C" void AuthenticationValues_set_UserId_m172 (AuthenticationValues_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.String)
extern "C" void AuthenticationValues_SetAuthPostData_m173 (AuthenticationValues_t60 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" void AuthenticationValues_SetAuthPostData_m174 (AuthenticationValues_t60 * __this, ByteU5BU5D_t21* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C" void AuthenticationValues_AddAuthParameter_m175 (AuthenticationValues_t60 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::ToString()
extern "C" String_t* AuthenticationValues_ToString_m176 (AuthenticationValues_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
