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

// projectile
struct  projectile_t311  : public MonoBehaviour_t80
{
	// UnityEngine.Rigidbody2D projectile::rb
	Rigidbody2D_t140 * ___rb_2;
	// System.Int32 projectile::age
	int32_t ___age_3;
	// UnityEngine.GameObject projectile::splode
	GameObject_t159 * ___splode_4;
};
