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
// UnityEngine.Transform
struct Transform_t160;
// PhotonView
struct PhotonView_t83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// syncPlayer
struct  syncPlayer_t299  : public MonoBehaviour_t80
{
	// UnityEngine.Rigidbody2D syncPlayer::rb
	Rigidbody2D_t140 * ___rb_2;
	// UnityEngine.Vector3 syncPlayer::targetPos
	Vector3_t138  ___targetPos_3;
	// UnityEngine.Transform syncPlayer::pa
	Transform_t160 * ___pa_4;
	// PhotonView syncPlayer::pv
	PhotonView_t83 * ___pv_5;
};
