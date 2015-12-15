#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// truckMove
struct truckMove_t301;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t302;
// UnityEngine.Transform[]
struct TransformU5BU5D_t303;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// truckSynchronize
struct  truckSynchronize_t300  : public MonoBehaviour_t80
{
	// truckMove truckSynchronize::eng
	truckMove_t301 * ___eng_2;
	// UnityEngine.Rigidbody2D[] truckSynchronize::rbs
	Rigidbody2DU5BU5D_t302* ___rbs_3;
	// UnityEngine.Transform[] truckSynchronize::transforms
	TransformU5BU5D_t303* ___transforms_4;
};
