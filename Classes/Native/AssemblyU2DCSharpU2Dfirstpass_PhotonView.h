#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t111;
// UnityEngine.Component
struct Component_t112;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t113;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t114;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t115;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "AssemblyU2DCSharpU2Dfirstpass_Photon_MonoBehaviour.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ViewSynchronization.h"
#include "AssemblyU2DCSharpU2Dfirstpass_OnSerializeTransform.h"
#include "AssemblyU2DCSharpU2Dfirstpass_OnSerializeRigidBody.h"
#include "AssemblyU2DCSharpU2Dfirstpass_OwnershipOption.h"

// PhotonView
struct  PhotonView_t83  : public MonoBehaviour_t79
{
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_2;
	// System.Int32 PhotonView::group
	int32_t ___group_3;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_4;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_5;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t111* ___instantiationDataField_6;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t111* ___lastOnSerializeDataSent_7;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t111* ___lastOnSerializeDataReceived_8;
	// UnityEngine.Component PhotonView::observed
	Component_t112 * ___observed_9;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_10;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_11;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_12;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_t113 * ___ObservedComponents_14;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t114 * ___m_OnSerializeMethodInfos_15;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField_16;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_17;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_18;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_19;
	// System.Boolean PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_20;
	// UnityEngine.MonoBehaviour[] PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t115* ___RpcMonoBehaviours_21;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_22;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_23;
};
