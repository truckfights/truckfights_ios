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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// turretMove
struct  turretMove_t315  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject turretMove::Bullet
	GameObject_t159 * ___Bullet_2;
	// UnityEngine.Rigidbody2D turretMove::rb
	Rigidbody2D_t140 * ___rb_3;
	// System.Int32 turretMove::speed
	int32_t ___speed_4;
	// System.Int32 turretMove::shot_delay
	int32_t ___shot_delay_5;
	// System.Single turretMove::max_angle
	float ___max_angle_6;
	// System.Single turretMove::min_angle
	float ___min_angle_7;
	// System.Int32 turretMove::shots
	int32_t ___shots_8;
	// System.Single turretMove::spread
	float ___spread_9;
	// System.Boolean turretMove::isOccupied
	bool ___isOccupied_10;
	// UnityEngine.GameObject turretMove::Net
	GameObject_t159 * ___Net_11;
};
