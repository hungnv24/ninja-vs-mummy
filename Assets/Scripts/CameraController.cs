﻿using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour
{

	private Vector3 origin;
	private Vector3 offset;
	public GameObject focusedObject;
	private float smoothTime = 0.1f;
	private Vector3 velocity = Vector2.zero;

	// Use this for initialization
	void Start ()
	{
		origin = transform.position;
		offset = focusedObject.transform.position - origin;
	}
	
	void Update ()
	{
		if (!focusedObject) {
			return;
		}
		origin.x = focusedObject.transform.position.x - offset.x;
		transform.position = Vector3.SmoothDamp(transform.position,
		                              origin,
		                              ref velocity,
		                              smoothTime);
	}
}
