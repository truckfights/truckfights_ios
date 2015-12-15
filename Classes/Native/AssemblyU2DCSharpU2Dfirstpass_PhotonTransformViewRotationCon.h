#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t145;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// PhotonTransformViewRotationControl
struct  PhotonTransformViewRotationControl_t148  : public Object_t
{
	// PhotonTransformViewRotationModel PhotonTransformViewRotationControl::m_Model
	PhotonTransformViewRotationModel_t145 * ___m_Model_0;
	// UnityEngine.Quaternion PhotonTransformViewRotationControl::m_NetworkRotation
	Quaternion_t154  ___m_NetworkRotation_1;
};
