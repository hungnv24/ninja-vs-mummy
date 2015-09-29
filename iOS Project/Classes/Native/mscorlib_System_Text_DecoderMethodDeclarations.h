#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1056;
// System.Text.DecoderFallback
struct DecoderFallback_t1324;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1325;
// System.Byte[]
struct ByteU5BU5D_t145;
// System.Char[]
struct CharU5BU5D_t337;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7150 (Decoder_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7151 (Decoder_t1056 * __this, DecoderFallback_t1324 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1325 * Decoder_get_FallbackBuffer_m7152 (Decoder_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
