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
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t145;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t146;
// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t147;
// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t148;
// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t149;
// PhotonView
struct PhotonView_t83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PhotonTransformView
struct  PhotonTransformView_t143  : public MonoBehaviour_t80
{
	// PhotonTransformViewPositionModel PhotonTransformView::m_PositionModel
	PhotonTransformViewPositionModel_t144 * ___m_PositionModel_2;
	// PhotonTransformViewRotationModel PhotonTransformView::m_RotationModel
	PhotonTransformViewRotationModel_t145 * ___m_RotationModel_3;
	// PhotonTransformViewScaleModel PhotonTransformView::m_ScaleModel
	PhotonTransformViewScaleModel_t146 * ___m_ScaleModel_4;
	// PhotonTransformViewPositionControl PhotonTransformView::m_PositionControl
	PhotonTransformViewPositionControl_t147 * ___m_PositionControl_5;
	// PhotonTransformViewRotationControl PhotonTransformView::m_RotationControl
	PhotonTransformViewRotationControl_t148 * ___m_RotationControl_6;
	// PhotonTransformViewScaleControl PhotonTransformView::m_ScaleControl
	PhotonTransformViewScaleControl_t149 * ___m_ScaleControl_7;
	// PhotonView PhotonTransformView::m_PhotonView
	PhotonView_t83 * ___m_PhotonView_8;
	// System.Boolean PhotonTransformView::m_ReceivedNetworkUpdate
	bool ___m_ReceivedNetworkUpdate_9;
};
