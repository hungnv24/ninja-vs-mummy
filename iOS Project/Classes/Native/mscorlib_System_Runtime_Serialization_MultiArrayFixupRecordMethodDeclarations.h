#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1256;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1253;
// System.Int32[]
struct Int32U5BU5D_t624;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1246;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m6703 (MultiArrayFixupRecord_t1256 * __this, ObjectRecord_t1253 * ___objectToBeFixed, Int32U5BU5D_t624* ___indices, ObjectRecord_t1253 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m6704 (MultiArrayFixupRecord_t1256 * __this, ObjectManager_t1246 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
