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

// SupportLogging
struct SupportLogging_t197;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_DisconnectCause.h"

// System.Void SupportLogging::.ctor()
extern "C" void SupportLogging__ctor_m844 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::Start()
extern "C" void SupportLogging_Start_m845 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnApplicationPause(System.Boolean)
extern "C" void SupportLogging_OnApplicationPause_m846 (SupportLogging_t197 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnApplicationQuit()
extern "C" void SupportLogging_OnApplicationQuit_m847 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogStats()
extern "C" void SupportLogging_LogStats_m848 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogBasics()
extern "C" void SupportLogging_LogBasics_m849 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnConnectedToPhoton()
extern "C" void SupportLogging_OnConnectedToPhoton_m850 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnFailedToConnectToPhoton(DisconnectCause)
extern "C" void SupportLogging_OnFailedToConnectToPhoton_m851 (SupportLogging_t197 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnJoinedLobby()
extern "C" void SupportLogging_OnJoinedLobby_m852 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnJoinedRoom()
extern "C" void SupportLogging_OnJoinedRoom_m853 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnCreatedRoom()
extern "C" void SupportLogging_OnCreatedRoom_m854 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnLeftRoom()
extern "C" void SupportLogging_OnLeftRoom_m855 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnDisconnectedFromPhoton()
extern "C" void SupportLogging_OnDisconnectedFromPhoton_m856 (SupportLogging_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
