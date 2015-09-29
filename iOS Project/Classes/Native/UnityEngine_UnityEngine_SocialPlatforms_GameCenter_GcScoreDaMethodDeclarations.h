#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t263;
struct GcScoreData_t263_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t273;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t273 * GcScoreData_ToScore_m1206 (GcScoreData_t263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t263_marshal(const GcScoreData_t263& unmarshaled, GcScoreData_t263_marshaled& marshaled);
void GcScoreData_t263_marshal_back(const GcScoreData_t263_marshaled& marshaled, GcScoreData_t263& unmarshaled);
void GcScoreData_t263_marshal_cleanup(GcScoreData_t263_marshaled& marshaled);
