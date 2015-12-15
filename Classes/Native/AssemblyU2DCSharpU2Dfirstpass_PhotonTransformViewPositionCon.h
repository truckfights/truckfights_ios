#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t144;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t150;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PhotonTransformViewPositionControl
struct  PhotonTransformViewPositionControl_t147  : public Object_t
{
	// PhotonTransformViewPositionModel PhotonTransformViewPositionControl::m_Model
	PhotonTransformViewPositionModel_t144 * ___m_Model_0;
	// System.Single PhotonTransformViewPositionControl::m_CurrentSpeed
	float ___m_CurrentSpeed_1;
	// System.Double PhotonTransformViewPositionControl::m_LastSerializeTime
	double ___m_LastSerializeTime_2;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_SynchronizedSpeed
	Vector3_t138  ___m_SynchronizedSpeed_3;
	// System.Single PhotonTransformViewPositionControl::m_SynchronizedTurnSpeed
	float ___m_SynchronizedTurnSpeed_4;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_NetworkPosition
	Vector3_t138  ___m_NetworkPosition_5;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> PhotonTransformViewPositionControl::m_OldNetworkPositions
	Queue_1_t150 * ___m_OldNetworkPositions_6;
	// System.Boolean PhotonTransformViewPositionControl::m_UpdatedPositionAfterOnSerialize
	bool ___m_UpdatedPositionAfterOnSerialize_7;
};
