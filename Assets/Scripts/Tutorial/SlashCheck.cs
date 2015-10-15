using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SlashCheck : MonoBehaviour
{
	bool triggered = false;
	public GameObject tutorialCanvas;
	
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
	
	void OnTriggerStay2D (Collider2D col)
	{
		if (col.gameObject.tag == "Player" && !triggered) {
			triggered = true;
			if (tutorialCanvas != null && !tutorialCanvas.Equals (null)) {
				tutorialCanvas.SetActive (true);
				Text text = tutorialCanvas.transform.Find ("Text").GetComponent<Text> ();
				text.text = "I have a sword, dude.\n" +
						"<color=yellow>Tap</color> and you can get even more point.";
				Time.timeScale = 0.0000001f;
				SceneSettings.Instance.LockInput = false;
				StartCoroutine (WaitForInput ());
			}
		}
	}
	
	IEnumerator WaitForInput ()
	{
		while (true) {
			if (TouchUtils.GetTapCount() == 1 || Input.GetKeyDown (KeyCode.C)) {
				SceneSettings.Instance.LockInput = true;
				Time.timeScale = 1f;
				tutorialCanvas.SetActive (false);
				break;
			}
			yield return null;
		}
	}
}
