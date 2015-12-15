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

// ExitGames.Client.Photon.CmdLogItem
struct CmdLogItem_t936;
// ExitGames.Client.Photon.NCommand
struct NCommand_t914;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.CmdLogItem::.ctor()
extern "C" void CmdLogItem__ctor_m5060 (CmdLogItem_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.CmdLogItem::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32)
extern "C" void CmdLogItem__ctor_m5061 (CmdLogItem_t936 * __this, NCommand_t914 * ___command, int32_t ___timeInt, int32_t ___rtt, int32_t ___variance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogItem::ToString()
extern "C" String_t* CmdLogItem_ToString_m5062 (CmdLogItem_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
