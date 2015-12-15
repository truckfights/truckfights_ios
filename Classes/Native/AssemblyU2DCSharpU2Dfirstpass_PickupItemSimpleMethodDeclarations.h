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

// PickupItemSimple
struct PickupItemSimple_t179;
// UnityEngine.Collider
struct Collider_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void PickupItemSimple::.ctor()
extern "C" void PickupItemSimple__ctor_m803 (PickupItemSimple_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PickupItemSimple_OnTriggerEnter_m804 (PickupItemSimple_t179 * __this, Collider_t209 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::Pickup()
extern "C" void PickupItemSimple_Pickup_m805 (PickupItemSimple_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::PunPickupSimple(PhotonMessageInfo)
extern "C" void PickupItemSimple_PunPickupSimple_m806 (PickupItemSimple_t179 * __this, PhotonMessageInfo_t82 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSimple::RespawnAfter()
extern "C" void PickupItemSimple_RespawnAfter_m807 (PickupItemSimple_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
