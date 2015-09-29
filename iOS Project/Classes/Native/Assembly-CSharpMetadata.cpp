#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
extern TypeInfo CameraController_t2_il2cpp_TypeInfo;
// CameraController
#include "AssemblyU2DCSharp_CameraController.h"
extern TypeInfo EnvironmentGenerate_t6_il2cpp_TypeInfo;
// EnvironmentGenerate
#include "AssemblyU2DCSharp_EnvironmentGenerate.h"
extern TypeInfo MummyController_t11_il2cpp_TypeInfo;
// MummyController
#include "AssemblyU2DCSharp_MummyController.h"
extern TypeInfo NinjaController_t14_il2cpp_TypeInfo;
// NinjaController
#include "AssemblyU2DCSharp_NinjaController.h"
extern TypeInfo ObstacleController_t17_il2cpp_TypeInfo;
// ObstacleController
#include "AssemblyU2DCSharp_ObstacleController.h"
extern TypeInfo ParallaxController_t19_il2cpp_TypeInfo;
// ParallaxController
#include "AssemblyU2DCSharp_ParallaxController.h"
extern TypeInfo PlayerController_t20_il2cpp_TypeInfo;
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharp_Assembly_Types[9] = 
{
	&U3CModuleU3E_t0_il2cpp_TypeInfo,
	&CameraController_t2_il2cpp_TypeInfo,
	&EnvironmentGenerate_t6_il2cpp_TypeInfo,
	&MummyController_t11_il2cpp_TypeInfo,
	&NinjaController_t14_il2cpp_TypeInfo,
	&ObstacleController_t17_il2cpp_TypeInfo,
	&ParallaxController_t19_il2cpp_TypeInfo,
	&PlayerController_t20_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
Il2CppAssembly g_AssemblyU2DCSharp_Assembly = 
{
	{ "Assembly-CSharp", NULL, NULL, NULL, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharp_dll_Image,
	1,
};
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[2];
static const char* s_StringTable[56] = 
{
	"origin",
	"focusedObject",
	"backgrounds",
	"KILLED_BY_SLASH",
	"KILLED_BY_SLIDE",
	"KILLED_BY_DART",
	"KILLED_BY_JUMPED_ON",
	"FLAG_STATE_WALK",
	"FLAG_STATE_ATK",
	"FLAG_STATE_DIE",
	"walkingSpeed",
	"animator",
	"mRigidbody",
	"audioSource",
	"killedBy",
	"currentState",
	"hit",
	"hit2",
	"SWIPE_UP",
	"SWIPE_RIGHT",
	"SWIPE_DOWN",
	"SWIPE_LEFT",
	"FLAG_STATE_RUN",
	"FLAG_STATE_JUMP",
	"FLAG_STATE_SLASH",
	"FLAG_STATE_SLIDE",
	"FLAG_STATE_THROW",
	"FLAG_STATE_FADE",
	"FLAG_STATE_FADE_SLASH",
	"rigidbody",
	"jumpForce",
	"animationFlags",
	"grounded",
	"groundCheck",
	"groundCheckRadius",
	"groundLayer",
	"inputJump",
	"inputThrow",
	"inputSlide",
	"inputSlash",
	"speed",
	"jumpHeight",
	"sword",
	"jump",
	"die",
	"throwing",
	"footStep",
	"player",
	"prefabs",
	"obstacles",
	"cameraSize",
	"playerBound",
	"start",
	"parallaxSpeed",
	"moveSpeed",
	"turnSpeed",
};
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
static const Il2CppFieldDefinition s_FieldTable[62] = 
{
	{ 0, 27, offsetof(CameraController_t2, ___origin_2), 0 } ,
	{ 1, 28, offsetof(CameraController_t2, ___focusedObject_3), 0 } ,
	{ 2, 32, offsetof(EnvironmentGenerate_t6, ___backgrounds_2), 0 } ,
	{ 3, 36, 0, 0 } ,
	{ 4, 36, 0, 0 } ,
	{ 5, 36, 0, 0 } ,
	{ 6, 36, 0, 0 } ,
	{ 7, 37, 0, 0 } ,
	{ 8, 37, 0, 0 } ,
	{ 9, 37, 0, 0 } ,
	{ 10, 38, offsetof(MummyController_t11, ___walkingSpeed_9), 0 } ,
	{ 11, 39, offsetof(MummyController_t11, ___animator_10), 0 } ,
	{ 12, 40, offsetof(MummyController_t11, ___mRigidbody_11), 0 } ,
	{ 13, 41, offsetof(MummyController_t11, ___audioSource_12), 0 } ,
	{ 14, 42, offsetof(MummyController_t11, ___killedBy_13), 0 } ,
	{ 15, 43, offsetof(MummyController_t11, ___currentState_14), 0 } ,
	{ 16, 44, offsetof(MummyController_t11, ___hit_15), 0 } ,
	{ 17, 44, offsetof(MummyController_t11, ___hit2_16), 0 } ,
	{ 18, 36, 0, 0 } ,
	{ 19, 36, 0, 0 } ,
	{ 20, 36, 0, 0 } ,
	{ 21, 36, 0, 0 } ,
	{ 22, 37, 0, 0 } ,
	{ 23, 37, 0, 0 } ,
	{ 24, 37, 0, 0 } ,
	{ 25, 37, 0, 0 } ,
	{ 26, 37, 0, 0 } ,
	{ 9, 37, 0, 0 } ,
	{ 27, 37, 0, 0 } ,
	{ 28, 37, 0, 0 } ,
	{ 11, 39, offsetof(NinjaController_t14, ___animator_14), 0 } ,
	{ 29, 40, offsetof(NinjaController_t14, ___rigidbody_15), 0 } ,
	{ 13, 41, offsetof(NinjaController_t14, ___audioSource_16), 0 } ,
	{ 30, 48, offsetof(NinjaController_t14, ___jumpForce_17), 0 } ,
	{ 15, 42, offsetof(NinjaController_t14, ___currentState_18), 0 } ,
	{ 31, 49, offsetof(NinjaController_t14, ___animationFlags_19), 0 } ,
	{ 32, 50, offsetof(NinjaController_t14, ___grounded_20), 0 } ,
	{ 33, 51, offsetof(NinjaController_t14, ___groundCheck_21), 0 } ,
	{ 34, 48, offsetof(NinjaController_t14, ___groundCheckRadius_22), 0 } ,
	{ 35, 52, offsetof(NinjaController_t14, ___groundLayer_23), 0 } ,
	{ 36, 50, offsetof(NinjaController_t14, ___inputJump_24), 0 } ,
	{ 37, 50, offsetof(NinjaController_t14, ___inputThrow_25), 0 } ,
	{ 38, 50, offsetof(NinjaController_t14, ___inputSlide_26), 0 } ,
	{ 39, 50, offsetof(NinjaController_t14, ___inputSlash_27), 0 } ,
	{ 40, 38, offsetof(NinjaController_t14, ___speed_28), 0 } ,
	{ 41, 38, offsetof(NinjaController_t14, ___jumpHeight_29), 0 } ,
	{ 42, 44, offsetof(NinjaController_t14, ___sword_30), 0 } ,
	{ 43, 44, offsetof(NinjaController_t14, ___jump_31), 0 } ,
	{ 44, 44, offsetof(NinjaController_t14, ___die_32), 0 } ,
	{ 45, 44, offsetof(NinjaController_t14, ___throwing_33), 0 } ,
	{ 16, 44, offsetof(NinjaController_t14, ___hit_34), 0 } ,
	{ 46, 44, offsetof(NinjaController_t14, ___footStep_35), 0 } ,
	{ 47, 28, offsetof(ObstacleController_t17, ___player_2), 0 } ,
	{ 48, 54, offsetof(ObstacleController_t17, ___prefabs_3), 0 } ,
	{ 49, 32, offsetof(ObstacleController_t17, ___obstacles_4), 0 } ,
	{ 50, 55, offsetof(ObstacleController_t17, ___cameraSize_5), 0 } ,
	{ 51, 55, offsetof(ObstacleController_t17, ___playerBound_6), 0 } ,
	{ 52, 50, offsetof(ObstacleController_t17, ___start_7), 0 } ,
	{ 53, 38, offsetof(ParallaxController_t19, ___parallaxSpeed_2), 0 } ,
	{ 47, 57, offsetof(ParallaxController_t19, ___player_3), 0 } ,
	{ 54, 38, offsetof(PlayerController_t20, ___moveSpeed_2), 0 } ,
	{ 55, 38, offsetof(PlayerController_t20, ___turnSpeed_3), 0 } ,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
static const Il2CppFieldDefaultValue s_DefaultValues[19] = 
{
	{ 3, 14, 0 },
	{ 4, 14, 4 },
	{ 5, 14, 8 },
	{ 6, 14, 12 },
	{ 7, 14, 16 },
	{ 8, 14, 20 },
	{ 9, 14, 24 },
	{ 18, 14, 28 },
	{ 19, 14, 32 },
	{ 20, 14, 36 },
	{ 21, 14, 40 },
	{ 22, 14, 44 },
	{ 23, 14, 48 },
	{ 24, 14, 52 },
	{ 25, 14, 56 },
	{ 26, 14, 60 },
	{ 27, 14, 64 },
	{ 28, 14, 68 },
	{ 29, 14, 72 },
};
static const uint8_t s_DefaultValueDataTable[76] = 
{
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x04,
	0x00,
	0x00,
	0x00,
	0x08,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x04,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x03,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x04,
	0x00,
	0x00,
	0x00,
	0x08,
	0x00,
	0x00,
	0x00,
	0x10,
	0x00,
	0x00,
	0x00,
	0x20,
	0x00,
	0x00,
	0x00,
	0x40,
	0x00,
	0x00,
	0x00,
	0x80,
	0x00,
	0x00,
	0x00,
};
Il2CppImage g_AssemblyU2DCSharp_dll_Image = 
{
	 "Assembly-CSharp.dll" ,
	&g_AssemblyU2DCSharp_Assembly,
	g_AssemblyU2DCSharp_Assembly_Types,
	8,
	NULL,
	s_StringTable,
	56,
	s_FieldTable,
	62,
	s_DefaultValues,
	19,
	s_DefaultValueDataTable,
	76,
	2,
	NULL,
	g_AssemblyU2DCSharp_Assembly_AttributeGenerators,
};
