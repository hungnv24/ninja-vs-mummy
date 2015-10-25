using UnityEngine;
using System.Collections;
using System.IO;
using System.Runtime.InteropServices;
using ChartboostSDK;

public class UIController : MonoBehaviour
{
	int countDown = 0;
	GameObject countDownObj;
	public GameObject mainCanvas;
	public GameObject pauseCanvas;
	public GameObject deadCanvas;
	[DllImport ("__Internal")]
	public static extern void shareImageIphone(string imgPath);

	void Awake()
	{

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
        Chartboost.showInterstitial(CBLocation.HomeScreen);
        StopAllCoroutines ();
		Time.timeScale = 0.000001f;
		pauseCanvas.SetActive (true);
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	void OnApplicationPause(bool status)
	{
		OnPauseClicked ();
	}

	public void OnResetClicked()
	{
		Debug.Log ("Show ads");
		Chartboost.showInterstitial (CBLocation.GameScreen);
		deadCanvas.SetActive (false);
		PointController.Dispose ();
		Application.LoadLevel (Application.loadedLevelName);
	}

	public void OnExitClicked()
	{
		Chartboost.showInterstitial (CBLocation.HomeScreen);
		Application.LoadLevel ("Menu");
	}

	public void OnShareClicked()
	{
		StartCoroutine (ShareScreenShot ());
	}

	private IEnumerator ShareScreenShot()
	{
		yield return new WaitForEndOfFrame ();
		byte[] screenshot = TakeScreenshot ();
		#if UNITY_ANDROID
			ShareAndroid(screenshot);
		#elif UNITY_IOS
			string imgPath = Application.persistentDataPath + "/kilobeast_nvm_screenshot.jpg";
			File.WriteAllBytes(imgPath, screenshot);
			shareImageIphone(imgPath);
		#endif
	}

	private byte[] TakeScreenshot() 
	{
		var width = Screen.width;
		var height = Screen.height;
		var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		// Read screen contents into the texture
		tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		tex.Apply();
		byte[] screenshot = tex.EncodeToJPG();
		return screenshot;
	}

	private void ShareAndroid(byte[] bytes)
	{
#if UNITY_ANDROID
        // Write file
        AndroidJavaClass envClass = new AndroidJavaClass ("android.os.Environment");
		AndroidJavaObject extFileObj = envClass.CallStatic<AndroidJavaObject> ("getExternalStoragePublicDirectory",
		                                                                       envClass.GetStatic<string>("DIRECTORY_PICTURES"));
		string path = extFileObj.Call<string>("getAbsolutePath") + "/kilobeast_nvm_screenshot.jpg";
		File.WriteAllBytes(path, bytes);

		//instantiate the class Intent
		AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent");
		
		//instantiate the object Intent
		AndroidJavaObject intentObject = new AndroidJavaObject("android.content.Intent");

		//instantiate a file object
		AndroidJavaObject fileObject = new AndroidJavaObject("java.io.File", path);
		
		//call setAction setting ACTION_SEND as parameter
		intentObject.Call<AndroidJavaObject>("setAction", intentClass.GetStatic<string>("ACTION_SEND"));
		
		//instantiate the class Uri
		AndroidJavaClass uriClass = new AndroidJavaClass("android.net.Uri");
		
		//instantiate the object Uri with the parse of the url's file
		AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("fromFile", fileObject);
		
		//call putExtra with the uri object of the file
		intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_STREAM"), uriObject);
		
		//set the type of file
		intentObject.Call<AndroidJavaObject>("setType", "image/jpeg");
		
		//instantiate the class UnityPlayer
		AndroidJavaClass unity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		
		//instantiate the object currentActivity
		AndroidJavaObject currentActivity = unity.GetStatic<AndroidJavaObject>("currentActivity");
		
		//call the activity with our Intent
		currentActivity.Call("startActivity", intentObject);
#endif
	}
}
