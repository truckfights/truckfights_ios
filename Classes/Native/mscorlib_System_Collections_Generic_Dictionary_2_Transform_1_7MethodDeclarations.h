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

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>
struct Transform_1_t2199;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13578_gshared (Transform_1_t2199 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13578(__this, ___object, ___method, method) (( void (*) (Transform_1_t2199 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13578_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m13579_gshared (Transform_1_t2199 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13579(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t2199 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m13579_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13580_gshared (Transform_1_t2199 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13580(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2199 *, uint8_t, int32_t, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13580_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m13581_gshared (Transform_1_t2199 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13581(__this, ___result, method) (( uint8_t (*) (Transform_1_t2199 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13581_gshared)(__this, ___result, method)
