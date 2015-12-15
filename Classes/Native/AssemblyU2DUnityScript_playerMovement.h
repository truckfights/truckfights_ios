#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t159;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t140;
// PhotonView
struct PhotonView_t83;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t309;
// UnityEngine.Transform
struct Transform_t160;
// UnityEngine.Sprite
struct Sprite_t310;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// playerMovement
struct  playerMovement_t308  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject playerMovement::truck
	GameObject_t159 * ___truck_2;
	// UnityEngine.Rigidbody2D playerMovement::rigidBody
	Rigidbody2D_t140 * ___rigidBody_3;
	// PhotonView playerMovement::engine
	PhotonView_t83 * ___engine_4;
	// UnityEngine.Rigidbody2D playerMovement::left
	Rigidbody2D_t140 * ___left_5;
	// UnityEngine.Rigidbody2D playerMovement::right
	Rigidbody2D_t140 * ___right_6;
	// UnityEngine.Rigidbody2D playerMovement::cabin
	Rigidbody2D_t140 * ___cabin_7;
	// UnityEngine.Collider2D[] playerMovement::stations
	Collider2DU5BU5D_t309* ___stations_8;
	// UnityEngine.Collider2D[] playerMovement::overlaps
	Collider2DU5BU5D_t309* ___overlaps_9;
	// System.Single playerMovement::speed
	float ___speed_10;
	// UnityEngine.Transform playerMovement::knob
	Transform_t160 * ___knob_11;
	// UnityEngine.Transform playerMovement::pad
	Transform_t160 * ___pad_12;
	// UnityEngine.Transform playerMovement::greenBttn
	Transform_t160 * ___greenBttn_13;
	// UnityEngine.Transform playerMovement::redBttn
	Transform_t160 * ___redBttn_14;
	// System.Int32 playerMovement::station
	int32_t ___station_15;
	// System.Boolean playerMovement::isInTouch
	bool ___isInTouch_16;
	// System.Boolean playerMovement::wasInTouch
	bool ___wasInTouch_17;
	// System.Boolean playerMovement::validMoveTouch
	bool ___validMoveTouch_18;
	// System.Boolean playerMovement::red
	bool ___red_19;
	// System.Boolean playerMovement::green
	bool ___green_20;
	// UnityEngine.Sprite playerMovement::me
	Sprite_t310 * ___me_21;
	// UnityEngine.GameObject playerMovement::sprite
	GameObject_t159 * ___sprite_22;
};
