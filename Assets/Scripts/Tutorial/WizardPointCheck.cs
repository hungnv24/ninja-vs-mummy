using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WizardPointCheck : MonoBehaviour
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
				text.text = "<color=yellow>Tap on that wizard</color> to use a Ninja teleport skill.\n" +
					"Can't remember its name, but know it can bring a bunch of points.";
				Time.timeScale = 0.0000001f;
				SceneSettings.Instance.LockInput = false;
				StartCoroutine (WaitForInput ());
			}
		}
	}
	
	IEnumerator WaitForInput ()
	{
		while (true) {
			var touchedObj = TouchUtils.GetTouchedObject ();
			if (touchedObj != null && touchedObj.tag == "Wizard") {
				SceneSettings.Instance.LockInput = true;
				Time.timeScale = 1f;
				tutorialCanvas.SetActive (false);
			}
			yield return null;
		}
	}
}
