using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class HomeUIController : MonoBehaviour
{
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
		SceneSettings.Instance.HardLevel = 1;
		Application.LoadLevel ("Main");
	}

	public void OnNinjaModeClicked()
	{
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
		Social.ShowLeaderboardUI ();
	}
}
