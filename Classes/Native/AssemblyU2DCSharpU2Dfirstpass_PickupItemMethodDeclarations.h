#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PickupItem
struct PickupItem_t177;
// UnityEngine.Collider
struct Collider_t209;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupItem::.ctor()
extern "C" void PickupItem__ctor_m791 (PickupItem_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
extern "C" void PickupItem__cctor_m792 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
extern "C" int32_t PickupItem_get_ViewID_m793 (PickupItem_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PickupItem_OnTriggerEnter_m794 (PickupItem_t177 * __this, Collider_t209 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PickupItem_OnPhotonSerializeView_m795 (PickupItem_t177 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
extern "C" void PickupItem_Pickup_m796 (PickupItem_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
extern "C" void PickupItem_Drop_m797 (PickupItem_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern "C" void PickupItem_Drop_m798 (PickupItem_t177 * __this, Vector3_t138  ___newPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern "C" void PickupItem_PunPickup_m799 (PickupItem_t177 * __this, PhotonMessageInfo_t82 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
extern "C" void PickupItem_PickedUp_m800 (PickupItem_t177 * __this, float ___timeUntilRespawn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C" void PickupItem_PunRespawn_m801 (PickupItem_t177 * __this, Vector3_t138  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
extern "C" void PickupItem_PunRespawn_m802 (PickupItem_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
