using UnityEngine;
using System.Collections;
using Facebook.Unity;

public class UIController : MonoBehaviour
{
	int countDown = 0;
	GameObject countDownObj;
	public GameObject mainCanvas;
	public GameObject pauseCanvas;
	public GameObject deadCanvas;

	void Awake()
	{
		if (!FB.IsInitialized) {
			// Initialize the Facebook SDK
			FB.Init(InitCallback, OnHideUnity);
		} else {
			// Already initialized, signal an app activation App Event
			FB.ActivateApp();
		}
	}

	private void InitCallback ()
	{
		if (FB.IsInitialized) {
			// Signal an app activation App Event
			FB.ActivateApp();
			// Continue with Facebook SDK
			// ...
		} else {
			Debug.Log("Failed to Initialize the Facebook SDK");
		}
	}
	
	private void OnHideUnity (bool isGameShown)
	{
		if (!isGameShown) {
			// Pause the game - we will need to hide
			Time.timeScale = 0;
		} else {
			// Resume the game - we're getting focus again
			Time.timeScale = 1;
		}
	}

	// Use this for initialization
	void Start ()
	{
		Time.timeScale = 0.000001f;
		StartCoroutine (StartCountDown ());
	}

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

	public void OnExitClicked()
	{
		Application.LoadLevel ("Menu");
	}

	public void OnShareClicked()
	{
		StartCoroutine (TakeScreenshot());
	}

	private IEnumerator TakeScreenshot() 
	{
		yield return new WaitForEndOfFrame();
		
		var width = Screen.width;
		var height = Screen.height;
		var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		// Read screen contents into the texture
		tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		tex.Apply();
		byte[] screenshot = tex.EncodeToPNG();
		
		var wwwForm = new WWWForm();
		wwwForm.AddBinaryData("image", screenshot, "Screenshot.png");
		
		FB.API("me/photos", HttpMethod.POST, null, wwwForm);
	}
}
