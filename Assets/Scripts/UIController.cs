using UnityEngine;
using System.Collections;

public class UIController : MonoBehaviour
{
	int countDown = 0;
	GameObject countDownObj;
	void OnLevelWasLoaded(int level)
	{
		Debug.Log (level);
	}

	IEnumerator StartCountDown()
	{
		while (countDown < 3) {
			countDown++;
			if (countDownObj != null && !countDownObj.Equals(null)) {
				Destroy(countDownObj);
			}
			countDownObj = Instantiate(Resources.Load("Prefabs/" + countDown)) as GameObject;
			yield return new WaitForSeconds(1f * Time.timeScale);
		}
		if (countDownObj != null && !countDownObj.Equals(null)) {
			Destroy(countDownObj);
		}
		countDownObj = Instantiate(Resources.Load("Prefabs/Go")) as GameObject;
		Destroy (countDownObj, 3f);
		Time.timeScale = 1;
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
		PointController.Dispose ();
		Application.LoadLevel (Application.loadedLevelName);
	}
}
