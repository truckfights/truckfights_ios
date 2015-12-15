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

// BasicAIMovement
struct  BasicAIMovement_t289  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject BasicAIMovement::player
	GameObject_t159 * ___player_2;
	// UnityEngine.Rigidbody2D BasicAIMovement::body
	Rigidbody2D_t140 * ___body_3;
	// System.Double BasicAIMovement::maxV
	double ___maxV_4;
	// System.Double BasicAIMovement::relativeXOffset
	double ___relativeXOffset_5;
	// System.Double BasicAIMovement::relativeYOffset
	double ___relativeYOffset_6;
	// System.Int32 BasicAIMovement::fireRate
	int32_t ___fireRate_7;
	// System.Int32 BasicAIMovement::fireTimer
	int32_t ___fireTimer_8;
};
