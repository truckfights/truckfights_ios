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

// ExitGames.Client.DemoParticle.TimeKeeper
struct TimeKeeper_t198;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.DemoParticle.TimeKeeper::.ctor(System.Int32)
extern "C" void TimeKeeper__ctor_m857 (TimeKeeper_t198 * __this, int32_t ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.DemoParticle.TimeKeeper::get_Interval()
extern "C" int32_t TimeKeeper_get_Interval_m858 (TimeKeeper_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::set_Interval(System.Int32)
extern "C" void TimeKeeper_set_Interval_m859 (TimeKeeper_t198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.DemoParticle.TimeKeeper::get_IsEnabled()
extern "C" bool TimeKeeper_get_IsEnabled_m860 (TimeKeeper_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::set_IsEnabled(System.Boolean)
extern "C" void TimeKeeper_set_IsEnabled_m861 (TimeKeeper_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.DemoParticle.TimeKeeper::get_ShouldExecute()
extern "C" bool TimeKeeper_get_ShouldExecute_m862 (TimeKeeper_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::set_ShouldExecute(System.Boolean)
extern "C" void TimeKeeper_set_ShouldExecute_m863 (TimeKeeper_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::Reset()
extern "C" void TimeKeeper_Reset_m864 (TimeKeeper_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
