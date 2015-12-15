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

// UnityEngine.ParticleSystem
struct ParticleSystem_t293;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t854;
// UnityEngine.Transform
struct Transform_t160;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t855;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive()
extern "C" bool ParticleSystem_Internal_IsAlive_m3880 (ParticleSystem_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
extern "C" bool ParticleSystem_IsAlive_m1419 (ParticleSystem_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C" bool ParticleSystem_IsAlive_m3881 (ParticleSystem_t293 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t854* ParticleSystem_GetParticleSystems_m3882 (Object_t * __this /* static, unused */, ParticleSystem_t293 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3883 (Object_t * __this /* static, unused */, Transform_t160 * ___transform, List_1_t855 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
