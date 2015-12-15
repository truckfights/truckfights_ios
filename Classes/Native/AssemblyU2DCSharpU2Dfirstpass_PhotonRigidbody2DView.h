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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PhotonRigidbody2DView
struct  PhotonRigidbody2DView_t139  : public MonoBehaviour_t80
{
	// System.Boolean PhotonRigidbody2DView::m_SynchronizeVelocity
	bool ___m_SynchronizeVelocity_2;
	// System.Boolean PhotonRigidbody2DView::m_SynchronizeAngularVelocity
	bool ___m_SynchronizeAngularVelocity_3;
	// UnityEngine.Rigidbody2D PhotonRigidbody2DView::m_Body
	Rigidbody2D_t140 * ___m_Body_4;
};
