﻿using UnityEngine;
using System.Collections;

public class ParallaxController : MonoBehaviour {
	public float parallaxSpeed = 1.0f;
	private GameObject player;

	// Use this for initialization
	void Awake () {
		player = GameObject.Find ("Ninja");
	}
	
	void FixedUpdate () {
		if (player == null)
			return;
		var controller = player.GetComponent<NinjaController> ();
		if ((controller.CurrentState & 
		 	(NinjaController.FLAG_STATE_DIE|
		 	NinjaController.FLAG_STATE_FALL_DIE|
		 	NinjaController.FLAG_STATE_FADE|
		 	NinjaController.FLAG_STATE_FADE_SLASH)) == 0) {
			var position = transform.position;
			position.x += parallaxSpeed * Time.fixedDeltaTime;
			transform.position = position;
		}
	}
}
