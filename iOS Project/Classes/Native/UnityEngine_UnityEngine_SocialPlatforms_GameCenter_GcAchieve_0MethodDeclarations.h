#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t262;
struct GcAchievementData_t262_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t271;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t271 * GcAchievementData_ToAchievement_m1205 (GcAchievementData_t262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t262_marshal(const GcAchievementData_t262& unmarshaled, GcAchievementData_t262_marshaled& marshaled);
void GcAchievementData_t262_marshal_back(const GcAchievementData_t262_marshaled& marshaled, GcAchievementData_t262& unmarshaled);
void GcAchievementData_t262_marshal_cleanup(GcAchievementData_t262_marshaled& marshaled);
