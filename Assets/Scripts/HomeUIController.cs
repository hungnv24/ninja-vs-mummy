using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class HomeUIController : MonoBehaviour
{
	public GameObject networkText;

	void Awake()
	{

	}

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void OnKidModeClicked()
	{
		SceneSettings.Instance.IsTutorial = false;
		SceneSettings.Instance.HardLevel = 1;
		Application.LoadLevel ("Main");
	}

	public void OnNinjaModeClicked()
	{
		SceneSettings.Instance.IsTutorial = false;
		SceneSettings.Instance.HardLevel = 2;
		Application.LoadLevel ("Main");
	}

	public void OnTutorialClicked()
	{
		SceneSettings.Instance.IsTutorial = true;
		SceneSettings.Instance.LockInput = true;
		Application.LoadLevel ("Tutorial");
	}

	public void OnLeaderBoardClicked()
	{
		if (Application.internetReachability == NetworkReachability.NotReachable) {
			networkText.SetActive(true);
			StartCoroutine(HideText());
		}
		Social.ShowLeaderboardUI ();
	}

	IEnumerator HideText()
	{
		yield return new WaitForSeconds(2);
		networkText.SetActive(false);
	}
}
