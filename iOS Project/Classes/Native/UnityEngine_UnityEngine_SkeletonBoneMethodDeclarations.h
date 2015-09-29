#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t180;
struct SkeletonBone_t180_marshaled;

void SkeletonBone_t180_marshal(const SkeletonBone_t180& unmarshaled, SkeletonBone_t180_marshaled& marshaled);
void SkeletonBone_t180_marshal_back(const SkeletonBone_t180_marshaled& marshaled, SkeletonBone_t180& unmarshaled);
void SkeletonBone_t180_marshal_cleanup(SkeletonBone_t180_marshaled& marshaled);
