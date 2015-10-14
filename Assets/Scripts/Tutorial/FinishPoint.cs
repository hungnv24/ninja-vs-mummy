using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinishPoint : MonoBehaviour {

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
				text.text = "That's not everything.\n" +
					"But I think you're ready for real battle.";
				SceneSettings.Instance.LockInput = false;
				StartCoroutine (WaitForInput ());
			}
		}
	}
	
	IEnumerator WaitForInput ()
	{
		yield return new WaitForSeconds(3.0f * Time.timeScale);
		Application.LoadLevel("Menu");
	}
}
