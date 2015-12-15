#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t140;
// PhotonView
struct PhotonView_t83;
// UnityEngine.GameObject
struct GameObject_t159;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// truckMove
struct  truckMove_t301  : public MonoBehaviour_t80
{
	// System.Single truckMove::leftWheel
	float ___leftWheel_2;
	// System.Single truckMove::rightWheel
	float ___rightWheel_3;
	// System.Single truckMove::engine
	float ___engine_4;
	// UnityEngine.Rigidbody2D truckMove::rigidBody
	Rigidbody2D_t140 * ___rigidBody_5;
	// System.Int32 truckMove::enemyCount
	int32_t ___enemyCount_6;
	// System.Single truckMove::wheelAngle
	float ___wheelAngle_7;
	// System.Single truckMove::wheelSpin
	float ___wheelSpin_8;
	// System.Single truckMove::smoothing
	float ___smoothing_9;
	// System.Single truckMove::turnRange
	float ___turnRange_10;
	// PhotonView truckMove::photonView
	PhotonView_t83 * ___photonView_11;
	// System.Int32 truckMove::truckHealth
	int32_t ___truckHealth_12;
	// System.Single truckMove::hscale
	float ___hscale_13;
	// System.Single truckMove::hdiv
	float ___hdiv_14;
	// UnityEngine.GameObject truckMove::healthbar
	GameObject_t159 * ___healthbar_15;
	// System.Boolean truckMove::isOccupied
	bool ___isOccupied_16;
	// System.Int32 truckMove::spawn
	int32_t ___spawn_17;
};
