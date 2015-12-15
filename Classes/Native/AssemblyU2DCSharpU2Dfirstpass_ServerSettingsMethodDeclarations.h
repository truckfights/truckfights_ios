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

// ServerSettings
struct ServerSettings_t101;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionCode.h"

// System.Void ServerSettings::.ctor()
extern "C" void ServerSettings__ctor_m659 (ServerSettings_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloudBestRegion(System.String)
extern "C" void ServerSettings_UseCloudBestRegion_m660 (ServerSettings_t101 * __this, String_t* ___cloudAppid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String)
extern "C" void ServerSettings_UseCloud_m661 (ServerSettings_t101 * __this, String_t* ___cloudAppid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
extern "C" void ServerSettings_UseCloud_m662 (ServerSettings_t101 * __this, String_t* ___cloudAppid, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
extern "C" void ServerSettings_UseMyServer_m663 (ServerSettings_t101 * __this, String_t* ___serverAddress, int32_t ___serverPort, String_t* ___application, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerSettings::ToString()
extern "C" String_t* ServerSettings_ToString_m664 (ServerSettings_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
