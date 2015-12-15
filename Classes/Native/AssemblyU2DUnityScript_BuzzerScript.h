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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// BuzzerScript
struct  BuzzerScript_t290  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject BuzzerScript::player
	GameObject_t159 * ___player_2;
	// UnityEngine.Rigidbody2D BuzzerScript::body
	Rigidbody2D_t140 * ___body_3;
	// PhotonView BuzzerScript::n
	PhotonView_t83 * ___n_4;
	// UnityEngine.GameObject BuzzerScript::enemyBullet
	GameObject_t159 * ___enemyBullet_5;
	// System.Double BuzzerScript::maxV
	double ___maxV_6;
	// System.Double BuzzerScript::relativeXOffset
	double ___relativeXOffset_7;
	// System.Double BuzzerScript::relativeYOffset
	double ___relativeYOffset_8;
	// System.Int32 BuzzerScript::fireRate
	int32_t ___fireRate_9;
	// System.Int32 BuzzerScript::fireTimer
	int32_t ___fireTimer_10;
	// System.Int32 BuzzerScript::health
	int32_t ___health_11;
	// System.Double BuzzerScript::Velocity
	double ___Velocity_12;
	// System.Double BuzzerScript::Angle
	double ___Angle_13;
	// System.Double BuzzerScript::prevRotation
	double ___prevRotation_14;
	// System.Double BuzzerScript::adj
	double ___adj_15;
	// System.Double BuzzerScript::other
	double ___other_16;
	// System.Double BuzzerScript::castdist
	double ___castdist_17;
	// UnityEngine.GameObject BuzzerScript::splode
	GameObject_t159 * ___splode_18;
};
