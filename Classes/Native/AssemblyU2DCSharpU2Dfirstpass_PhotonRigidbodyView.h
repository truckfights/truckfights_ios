#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t142;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PhotonRigidbodyView
struct  PhotonRigidbodyView_t141  : public MonoBehaviour_t80
{
	// System.Boolean PhotonRigidbodyView::m_SynchronizeVelocity
	bool ___m_SynchronizeVelocity_2;
	// System.Boolean PhotonRigidbodyView::m_SynchronizeAngularVelocity
	bool ___m_SynchronizeAngularVelocity_3;
	// UnityEngine.Rigidbody PhotonRigidbodyView::m_Body
	Rigidbody_t142 * ___m_Body_4;
};
