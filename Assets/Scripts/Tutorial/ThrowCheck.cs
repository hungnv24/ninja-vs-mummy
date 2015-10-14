using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ThrowCheck : MonoBehaviour {
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
				text.text = "What a ugly mummy!\n" +
					"<color=yellow>Swipe right</color> throw a Shuriken into it!";
				Time.timeScale = 0.0000001f;
				SceneSettings.Instance.LockInput = false;
				StartCoroutine(WaitForInput());
			}
		}
	}
	
	IEnumerator WaitForInput()
	{
		while (true) {
			if (TouchUtils.GetSwipe() == TouchUtils.SWIPE_RIGHT || Input.GetKeyDown(KeyCode.RightArrow)) {
				SceneSettings.Instance.LockInput = true;
				Time.timeScale = 1f;
				tutorialCanvas.SetActive(false);
			}
			yield return null;
		}
	}
}
