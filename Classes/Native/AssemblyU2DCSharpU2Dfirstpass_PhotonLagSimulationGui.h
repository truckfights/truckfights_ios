#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"

// PhotonLagSimulationGui
struct  PhotonLagSimulationGui_t94  : public MonoBehaviour_t80
{
	// UnityEngine.Rect PhotonLagSimulationGui::WindowRect
	Rect_t95  ___WindowRect_2;
	// System.Int32 PhotonLagSimulationGui::WindowId
	int32_t ___WindowId_3;
	// System.Boolean PhotonLagSimulationGui::Visible
	bool ___Visible_4;
	// ExitGames.Client.Photon.PhotonPeer PhotonLagSimulationGui::<Peer>k__BackingField
	PhotonPeer_t13 * ___U3CPeerU3Ek__BackingField_5;
};
