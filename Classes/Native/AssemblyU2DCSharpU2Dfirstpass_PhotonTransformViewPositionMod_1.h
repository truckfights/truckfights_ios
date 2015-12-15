#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t153;
struct AnimationCurve_t153_marshaled;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonTransformViewPositionMod.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonTransformViewPositionMod_0.h"

// PhotonTransformViewPositionModel
struct  PhotonTransformViewPositionModel_t144  : public Object_t
{
	// System.Boolean PhotonTransformViewPositionModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// System.Boolean PhotonTransformViewPositionModel::TeleportEnabled
	bool ___TeleportEnabled_1;
	// System.Single PhotonTransformViewPositionModel::TeleportIfDistanceGreaterThan
	float ___TeleportIfDistanceGreaterThan_2;
	// PhotonTransformViewPositionModel/InterpolateOptions PhotonTransformViewPositionModel::InterpolateOption
	int32_t ___InterpolateOption_3;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed_4;
	// System.Single PhotonTransformViewPositionModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_5;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsAcceleration
	float ___InterpolateMoveTowardsAcceleration_6;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsDeceleration
	float ___InterpolateMoveTowardsDeceleration_7;
	// UnityEngine.AnimationCurve PhotonTransformViewPositionModel::InterpolateSpeedCurve
	AnimationCurve_t153 * ___InterpolateSpeedCurve_8;
	// PhotonTransformViewPositionModel/ExtrapolateOptions PhotonTransformViewPositionModel::ExtrapolateOption
	int32_t ___ExtrapolateOption_9;
	// System.Single PhotonTransformViewPositionModel::ExtrapolateSpeed
	float ___ExtrapolateSpeed_10;
	// System.Boolean PhotonTransformViewPositionModel::ExtrapolateIncludingRoundTripTime
	bool ___ExtrapolateIncludingRoundTripTime_11;
	// System.Int32 PhotonTransformViewPositionModel::ExtrapolateNumberOfStoredPositions
	int32_t ___ExtrapolateNumberOfStoredPositions_12;
	// System.Boolean PhotonTransformViewPositionModel::DrawErrorGizmo
	bool ___DrawErrorGizmo_13;
};
