﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class JumpCheck : MonoBehaviour {
	bool triggered = false;
	public GameObject tutorialCanvas;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerStay2D(Collider2D col)
	{
		if (col.gameObject.tag == "Player" && !triggered) {
			triggered = true;
			if (tutorialCanvas != null && !tutorialCanvas.Equals(null)) {
				tutorialCanvas.SetActive(true);
				Text text = tutorialCanvas.transform.Find("Text").GetComponent<Text>();
				text.text = "Big stone ahead!\n" +
					"<color=yellow>Swipe up</color> to jump over!\n";
				Time.timeScale = 0.0000001f;
				SceneSettings.Instance.LockInput = false;
				StartCoroutine(WaitForInput());
			}
		}
	}

	IEnumerator WaitForInput()
	{
		while (true) {
			if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
			    || Input.GetKeyDown(KeyCode.X)) {
				SceneSettings.Instance.LockInput = true;
				Time.timeScale = 1f;
				tutorialCanvas.SetActive(false);
				break;
			}
			yield return null;
		}
	}
}
