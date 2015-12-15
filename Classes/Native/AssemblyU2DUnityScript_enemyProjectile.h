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
// UnityEngine.GameObject
struct GameObject_t159;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// enemyProjectile
struct  enemyProjectile_t295  : public MonoBehaviour_t80
{
	// UnityEngine.Rigidbody2D enemyProjectile::rb
	Rigidbody2D_t140 * ___rb_2;
	// System.Int32 enemyProjectile::age
	int32_t ___age_3;
	// UnityEngine.GameObject enemyProjectile::splode
	GameObject_t159 * ___splode_4;
	// UnityEngine.GameObject enemyProjectile::fire
	GameObject_t159 * ___fire_5;
};
