#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t135;
// PhotonStreamQueue
struct PhotonStreamQueue_t106;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t136;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t137;
// PhotonView
struct PhotonView_t83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PhotonAnimatorView
struct  PhotonAnimatorView_t134  : public MonoBehaviour_t80
{
	// UnityEngine.Animator PhotonAnimatorView::m_Animator
	Animator_t135 * ___m_Animator_2;
	// PhotonStreamQueue PhotonAnimatorView::m_StreamQueue
	PhotonStreamQueue_t106 * ___m_StreamQueue_3;
	// System.Boolean PhotonAnimatorView::ShowLayerWeightsInspector
	bool ___ShowLayerWeightsInspector_4;
	// System.Boolean PhotonAnimatorView::ShowParameterInspector
	bool ___ShowParameterInspector_5;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::m_SynchronizeParameters
	List_1_t136 * ___m_SynchronizeParameters_6;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::m_SynchronizeLayers
	List_1_t137 * ___m_SynchronizeLayers_7;
	// UnityEngine.Vector3 PhotonAnimatorView::m_ReceiverPosition
	Vector3_t138  ___m_ReceiverPosition_8;
	// System.Single PhotonAnimatorView::m_LastDeserializeTime
	float ___m_LastDeserializeTime_9;
	// System.Boolean PhotonAnimatorView::m_WasSynchronizeTypeChanged
	bool ___m_WasSynchronizeTypeChanged_10;
	// PhotonView PhotonAnimatorView::m_PhotonView
	PhotonView_t83 * ___m_PhotonView_11;
};
