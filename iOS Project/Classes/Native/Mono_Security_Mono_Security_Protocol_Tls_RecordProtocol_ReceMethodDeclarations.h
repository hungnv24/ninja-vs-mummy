#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t845;
// System.IO.Stream
struct Stream_t844;
// System.Byte[]
struct ByteU5BU5D_t145;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t41;
// System.Threading.WaitHandle
struct WaitHandle_t890;
// System.AsyncCallback
struct AsyncCallback_t94;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3339 (ReceiveRecordAsyncResult_t845 * __this, AsyncCallback_t94 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t145* ___initialBuffer, Stream_t844 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t844 * ReceiveRecordAsyncResult_get_Record_m3340 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t145* ReceiveRecordAsyncResult_get_ResultingBuffer_m3341 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t145* ReceiveRecordAsyncResult_get_InitialBuffer_m3342 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3343 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t41 * ReceiveRecordAsyncResult_get_AsyncException_m3344 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3345 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t890 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3346 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3347 (ReceiveRecordAsyncResult_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3348 (ReceiveRecordAsyncResult_t845 * __this, Exception_t41 * ___ex, ByteU5BU5D_t145* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3349 (ReceiveRecordAsyncResult_t845 * __this, Exception_t41 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3350 (ReceiveRecordAsyncResult_t845 * __this, ByteU5BU5D_t145* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
