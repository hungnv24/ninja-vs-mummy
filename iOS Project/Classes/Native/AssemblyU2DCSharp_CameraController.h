#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// CameraController
struct  CameraController_t2  : public MonoBehaviour_t3
{
	// UnityEngine.Vector3 CameraController::origin
	Vector3_t4  ___origin_2;
	// UnityEngine.GameObject CameraController::focusedObject
	GameObject_t1 * ___focusedObject_3;
};
