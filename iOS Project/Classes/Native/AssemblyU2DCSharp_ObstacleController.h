#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// System.String[]
struct StringU5BU5D_t16;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t5;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ObstacleController
struct  ObstacleController_t17  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject ObstacleController::player
	GameObject_t1 * ___player_2;
	// System.String[] ObstacleController::prefabs
	StringU5BU5D_t16* ___prefabs_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObstacleController::obstacles
	List_1_t5 * ___obstacles_4;
	// UnityEngine.Vector2 ObstacleController::cameraSize
	Vector2_t18  ___cameraSize_5;
	// UnityEngine.Vector2 ObstacleController::playerBound
	Vector2_t18  ___playerBound_6;
	// System.Boolean ObstacleController::start
	bool ___start_7;
};
