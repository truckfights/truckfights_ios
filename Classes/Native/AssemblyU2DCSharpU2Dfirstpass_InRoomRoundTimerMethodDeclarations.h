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

// InRoomRoundTimer
struct InRoomRoundTimer_t163;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t40;
// PhotonPlayer
struct PhotonPlayer_t76;

#include "codegen/il2cpp-codegen.h"

// System.Void InRoomRoundTimer::.ctor()
extern "C" void InRoomRoundTimer__ctor_m746 (InRoomRoundTimer_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::StartRoundNow()
extern "C" void InRoomRoundTimer_StartRoundNow_m747 (InRoomRoundTimer_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnJoinedRoom()
extern "C" void InRoomRoundTimer_OnJoinedRoom_m748 (InRoomRoundTimer_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C" void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m749 (InRoomRoundTimer_t163 * __this, Hashtable_t40 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
extern "C" void InRoomRoundTimer_OnMasterClientSwitched_m750 (InRoomRoundTimer_t163 * __this, PhotonPlayer_t76 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::Update()
extern "C" void InRoomRoundTimer_Update_m751 (InRoomRoundTimer_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnGUI()
extern "C" void InRoomRoundTimer_OnGUI_m752 (InRoomRoundTimer_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
