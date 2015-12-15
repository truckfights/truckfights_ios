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

// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t904;
// ExitGames.Client.Photon.NCommand
struct NCommand_t914;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.EnetChannel::.ctor(System.Byte,System.Int32)
extern "C" void EnetChannel__ctor_m4939 (EnetChannel_t904 * __this, uint8_t ___channelNumber, int32_t ___commandBufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsUnreliableSequenceNumber(System.Int32)
extern "C" bool EnetChannel_ContainsUnreliableSequenceNumber_m4940 (EnetChannel_t904 * __this, int32_t ___unreliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsReliableSequenceNumber(System.Int32)
extern "C" bool EnetChannel_ContainsReliableSequenceNumber_m4941 (EnetChannel_t904 * __this, int32_t ___reliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchReliableSequenceNumber(System.Int32)
extern "C" NCommand_t914 * EnetChannel_FetchReliableSequenceNumber_m4942 (EnetChannel_t904 * __this, int32_t ___reliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetChannel::clearAll()
extern "C" void EnetChannel_clearAll_m4943 (EnetChannel_t904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
