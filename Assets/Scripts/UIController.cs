using UnityEngine;
using System.Collections;

public class UIController : MonoBehaviour
{
	int countDown = 0;
	GameObject countDownObj;
	public GameObject mainCanvas;
	public GameObject pauseCanvas;
	public GameObject deadCanvas;

	IEnumerator StartCountDown()
	{
		while (countDown < 3) {
			countDown++;
			if (countDownObj != null && !countDownObj.Equals(null)) {
				Destroy(countDownObj);
			}
			countDownObj = Instantiate(Resources.Load("Prefabs/" + countDown)) as GameObject;
			yield return new WaitForSeconds(0.85f * Time.timeScale);
		}
		if (countDownObj != null && !countDownObj.Equals(null)) {
			Destroy(countDownObj);
		}
		countDownObj = Instantiate(Resources.Load("Prefabs/Go")) as GameObject;
		Destroy (countDownObj, 3f);
		Time.timeScale = 1;
	}

	public void OnPlayPressed()
	{
		StartCoroutine (StartCountDown ());
		pauseCanvas.SetActive (false);
	}

	public void OnPauseClicked()
	{
		StopAllCoroutines ();
		Time.timeScale = 0.000001f;
		pauseCanvas.SetActive (true);
	}

	// Use this for initialization
	void Start ()
	{
		Time.timeScale = 0.000001f;
		StartCoroutine (StartCountDown ());
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	public void OnResetClicked()
	{
		deadCanvas.SetActive (false);
		PointController.Dispose ();
		Application.LoadLevel (Application.loadedLevelName);
	}
}
