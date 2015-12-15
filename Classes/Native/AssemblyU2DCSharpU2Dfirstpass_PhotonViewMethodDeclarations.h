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

// PhotonView
struct PhotonView_t83;
// System.Object[]
struct ObjectU5BU5D_t111;
// PhotonPlayer
struct PhotonPlayer_t76;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;
// UnityEngine.Component
struct Component_t112;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t159;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonTargets.h"

// System.Void PhotonView::.ctor()
extern "C" void PhotonView__ctor_m572 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
extern "C" int32_t PhotonView_get_prefix_m573 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
extern "C" void PhotonView_set_prefix_m574 (PhotonView_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
extern "C" ObjectU5BU5D_t111* PhotonView_get_instantiationData_m575 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
extern "C" void PhotonView_set_instantiationData_m576 (PhotonView_t83 * __this, ObjectU5BU5D_t111* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
extern "C" int32_t PhotonView_get_viewID_m577 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
extern "C" void PhotonView_set_viewID_m578 (PhotonView_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
extern "C" bool PhotonView_get_isSceneView_m579 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
extern "C" PhotonPlayer_t76 * PhotonView_get_owner_m580 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
extern "C" int32_t PhotonView_get_OwnerActorNr_m581 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
extern "C" bool PhotonView_get_isOwnerActive_m582 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
extern "C" int32_t PhotonView_get_CreatorActorNr_m583 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C" bool PhotonView_get_isMine_m584 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
extern "C" void PhotonView_Awake_m585 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
extern "C" void PhotonView_RequestOwnership_m586 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
extern "C" void PhotonView_TransferOwnership_m587 (PhotonView_t83 * __this, PhotonPlayer_t76 * ___newOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
extern "C" void PhotonView_TransferOwnership_m588 (PhotonView_t83 * __this, int32_t ___newOwnerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
extern "C" void PhotonView_OnDestroy_m589 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_SerializeView_m590 (PhotonView_t83 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_DeserializeView_m591 (PhotonView_t83 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_DeserializeComponent_m592 (PhotonView_t83 * __this, Component_t112 * ___component, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_SerializeComponent_m593 (PhotonView_t83 * __this, Component_t112 * ___component, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_ExecuteComponentOnSerialize_m594 (PhotonView_t83 * __this, Component_t112 * ___component, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RefreshRpcMonoBehaviourCache()
extern "C" void PhotonView_RefreshRpcMonoBehaviourCache_m595 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C" void PhotonView_RPC_m596 (PhotonView_t83 * __this, String_t* ___methodName, int32_t ___target, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void PhotonView_RpcSecure_m597 (PhotonView_t83 * __this, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
extern "C" void PhotonView_RPC_m598 (PhotonView_t83 * __this, String_t* ___methodName, PhotonPlayer_t76 * ___targetPlayer, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void PhotonView_RpcSecure_m599 (PhotonView_t83 * __this, String_t* ___methodName, PhotonPlayer_t76 * ___targetPlayer, bool ___encrypt, ObjectU5BU5D_t111* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C" PhotonView_t83 * PhotonView_Get_m600 (Object_t * __this /* static, unused */, Component_t112 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
extern "C" PhotonView_t83 * PhotonView_Get_m601 (Object_t * __this /* static, unused */, GameObject_t159 * ___gameObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
extern "C" PhotonView_t83 * PhotonView_Find_m602 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
extern "C" String_t* PhotonView_ToString_m603 (PhotonView_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
