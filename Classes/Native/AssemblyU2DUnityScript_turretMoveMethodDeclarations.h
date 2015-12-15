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

// turretMove
struct turretMove_t315;
// System.Object
struct Object_t;
// PhotonStream
struct PhotonStream_t85;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void turretMove::.ctor()
extern "C" void turretMove__ctor_m1389 (turretMove_t315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::Start()
extern "C" void turretMove_Start_m1390 (turretMove_t315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::Update()
extern "C" void turretMove_Update_m1391 (turretMove_t315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::move(UnityEngine.Vector2,System.Object)
extern "C" void turretMove_move_m1392 (turretMove_t315 * __this, Vector2_t162  ___mvmt, Object_t * ___green, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::fire(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void turretMove_fire_m1393 (turretMove_t315 * __this, Vector3_t138  ___pos, Quaternion_t154  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::occupy()
extern "C" void turretMove_occupy_m1394 (turretMove_t315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::unOccupy()
extern "C" void turretMove_unOccupy_m1395 (turretMove_t315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::OnPhotonSerializeView(PhotonStream,System.Object)
extern "C" void turretMove_OnPhotonSerializeView_m1396 (turretMove_t315 * __this, PhotonStream_t85 * ___stream, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void turretMove::Main()
extern "C" void turretMove_Main_m1397 (turretMove_t315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
