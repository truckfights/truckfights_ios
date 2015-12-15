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
// UnityEngine.Transform
struct Transform_t160;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// cameraMovement
struct  cameraMovement_t294  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject cameraMovement::player
	GameObject_t159 * ___player_2;
	// UnityEngine.Transform cameraMovement::left
	Transform_t160 * ___left_3;
	// UnityEngine.Transform cameraMovement::right
	Transform_t160 * ___right_4;
};
