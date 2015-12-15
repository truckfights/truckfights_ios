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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t65;
// System.Net.IPHostEntry
struct IPHostEntry_t980;
// System.Net.IPAddress
struct IPAddress_t269;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t268;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Dns::.cctor()
extern "C" void Dns__cctor_m5628 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByName_internal_m5629 (Object_t * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t65** ___h_aliases, StringU5BU5D_t65** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByAddr_internal_m5630 (Object_t * __this /* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t65** ___h_aliases, StringU5BU5D_t65** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C" IPHostEntry_t980 * Dns_hostent_to_IPHostEntry_m5631 (Object_t * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t65* ___h_aliases, StringU5BU5D_t65* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C" IPHostEntry_t980 * Dns_GetHostByAddressFromString_m5632 (Object_t * __this /* static, unused */, String_t* ___address, bool ___parse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C" IPHostEntry_t980 * Dns_GetHostEntry_m5341 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C" IPHostEntry_t980 * Dns_GetHostEntry_m5633 (Object_t * __this /* static, unused */, IPAddress_t269 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C" IPAddressU5BU5D_t268* Dns_GetHostAddresses_m1133 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C" IPHostEntry_t980 * Dns_GetHostByName_m5634 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
