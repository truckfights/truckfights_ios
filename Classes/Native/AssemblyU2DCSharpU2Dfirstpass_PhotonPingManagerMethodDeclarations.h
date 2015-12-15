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

// PhotonPingManager
struct PhotonPingManager_t89;
// Region
struct Region_t91;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PhotonPingManager::.ctor()
extern "C" void PhotonPingManager__ctor_m610 (PhotonPingManager_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPingManager::.cctor()
extern "C" void PhotonPingManager__cctor_m611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Region PhotonPingManager::get_BestRegion()
extern "C" Region_t91 * PhotonPingManager_get_BestRegion_m612 (PhotonPingManager_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPingManager::get_Done()
extern "C" bool PhotonPingManager_get_Done_m613 (PhotonPingManager_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
extern "C" Object_t * PhotonPingManager_PingSocket_m614 (PhotonPingManager_t89 * __this, Region_t91 * ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPingManager::ResolveHost(System.String)
extern "C" String_t* PhotonPingManager_ResolveHost_m615 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
