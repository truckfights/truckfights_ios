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

// PickupItemSyncer
struct PickupItemSyncer_t180;
// PhotonPlayer
struct PhotonPlayer_t76;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;
// System.Single[]
struct SingleU5BU5D_t210;

#include "codegen/il2cpp-codegen.h"

// System.Void PickupItemSyncer::.ctor()
extern "C" void PickupItemSyncer__ctor_m808 (PickupItemSyncer_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void PickupItemSyncer_OnPhotonPlayerConnected_m809 (PickupItemSyncer_t180 * __this, PhotonPlayer_t76 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnJoinedRoom()
extern "C" void PickupItemSyncer_OnJoinedRoom_m810 (PickupItemSyncer_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
extern "C" void PickupItemSyncer_AskForPickupItemSpawnTimes_m811 (PickupItemSyncer_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
extern "C" void PickupItemSyncer_RequestForPickupTimes_m812 (PickupItemSyncer_t180 * __this, PhotonMessageInfo_t82 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
extern "C" void PickupItemSyncer_SendPickedUpItems_m813 (PickupItemSyncer_t180 * __this, PhotonPlayer_t76 * ___targtePlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
extern "C" void PickupItemSyncer_PickupItemInit_m814 (PickupItemSyncer_t180 * __this, double ___timeBase, SingleU5BU5D_t210* ___inactivePickupsAndTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
