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

// PhotonHandler
struct PhotonHandler_t92;
// System.Collections.IEnumerator
struct IEnumerator_t208;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionCode.h"

// System.Void PhotonHandler::.ctor()
extern "C" void PhotonHandler__ctor_m381 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
extern "C" void PhotonHandler__cctor_m382 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
extern "C" void PhotonHandler_Awake_m383 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
extern "C" void PhotonHandler_OnApplicationQuit_m384 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationPause(System.Boolean)
extern "C" void PhotonHandler_OnApplicationPause_m385 (PhotonHandler_t92 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnDestroy()
extern "C" void PhotonHandler_OnDestroy_m386 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
extern "C" void PhotonHandler_Update_m387 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnLevelWasLoaded(System.Int32)
extern "C" void PhotonHandler_OnLevelWasLoaded_m388 (PhotonHandler_t92 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
extern "C" void PhotonHandler_OnJoinedRoom_m389 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
extern "C" void PhotonHandler_OnCreatedRoom_m390 (PhotonHandler_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
extern "C" void PhotonHandler_StartFallbackSendAckThread_m391 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
extern "C" void PhotonHandler_StopFallbackSendAckThread_m392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
extern "C" bool PhotonHandler_FallbackSendAckThread_m393 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C" int32_t PhotonHandler_get_BestRegionCodeInPreferences_m394 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C" void PhotonHandler_set_BestRegionCodeInPreferences_m395 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
extern "C" void PhotonHandler_PingAvailableRegionsAndConnectToBest_m396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
extern "C" Object_t * PhotonHandler_PingAvailableRegionsCoroutine_m397 (PhotonHandler_t92 * __this, bool ___connectToBest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
