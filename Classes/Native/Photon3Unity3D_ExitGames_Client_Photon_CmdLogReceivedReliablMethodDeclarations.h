﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ExitGames.Client.Photon.CmdLogReceivedReliable
struct CmdLogReceivedReliable_t937;
// ExitGames.Client.Photon.NCommand
struct NCommand_t914;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.CmdLogReceivedReliable::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void CmdLogReceivedReliable__ctor_m5063 (CmdLogReceivedReliable_t937 * __this, NCommand_t914 * ___command, int32_t ___timeInt, int32_t ___rtt, int32_t ___variance, int32_t ___timeSinceLastSend, int32_t ___timeSinceLastSendAck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogReceivedReliable::ToString()
extern "C" String_t* CmdLogReceivedReliable_ToString_m5064 (CmdLogReceivedReliable_t937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
