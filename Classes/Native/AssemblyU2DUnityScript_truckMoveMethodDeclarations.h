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

// truckMove
struct truckMove_t301;
// PhotonStream
struct PhotonStream_t85;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void truckMove::.ctor()
extern "C" void truckMove__ctor_m1380 (truckMove_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::Start()
extern "C" void truckMove_Start_m1381 (truckMove_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::Update()
extern "C" void truckMove_Update_m1382 (truckMove_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::move(UnityEngine.Vector2,System.Boolean)
extern "C" void truckMove_move_m1383 (truckMove_t301 * __this, Vector2_t162  ___mvmt, bool ___green, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::occupy()
extern "C" void truckMove_occupy_m1384 (truckMove_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::unOccupy()
extern "C" void truckMove_unOccupy_m1385 (truckMove_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::damage(System.Int32)
extern "C" void truckMove_damage_m1386 (truckMove_t301 * __this, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::OnPhotonSerializeView(PhotonStream,System.Object)
extern "C" void truckMove_OnPhotonSerializeView_m1387 (truckMove_t301 * __this, PhotonStream_t85 * ___stream, Object_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void truckMove::Main()
extern "C" void truckMove_Main_m1388 (truckMove_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
