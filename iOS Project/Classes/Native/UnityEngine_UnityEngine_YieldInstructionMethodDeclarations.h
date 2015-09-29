#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t61;
struct YieldInstruction_t61_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m802 (YieldInstruction_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t61_marshal(const YieldInstruction_t61& unmarshaled, YieldInstruction_t61_marshaled& marshaled);
void YieldInstruction_t61_marshal_back(const YieldInstruction_t61_marshaled& marshaled, YieldInstruction_t61& unmarshaled);
void YieldInstruction_t61_marshal_cleanup(YieldInstruction_t61_marshaled& marshaled);
