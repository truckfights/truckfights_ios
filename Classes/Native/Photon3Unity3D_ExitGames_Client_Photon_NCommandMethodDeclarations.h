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

// ExitGames.Client.Photon.NCommand
struct NCommand_t914;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t920;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C" void NCommand__ctor_m5038 (NCommand_t914 * __this, EnetPeer_t920 * ___peer, uint8_t ___commandType, ByteU5BU5D_t21* ___payload, uint8_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C" NCommand_t914 * NCommand_CreateAck_m5039 (Object_t * __this /* static, unused */, EnetPeer_t920 * ___peer, NCommand_t914 * ___commandToAck, int32_t ___sentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C" void NCommand__ctor_m5040 (NCommand_t914 * __this, EnetPeer_t920 * ___peer, ByteU5BU5D_t21* ___inBuff, int32_t* ___readingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
extern "C" ByteU5BU5D_t21* NCommand_Serialize_m5041 (NCommand_t914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C" int32_t NCommand_CompareTo_m5042 (NCommand_t914 * __this, NCommand_t914 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C" String_t* NCommand_ToString_m5043 (NCommand_t914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
