using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class HomeUIController : MonoBehaviour
{
	public GameObject networkText;
    public GameObject loadingUI;

	void Start()
	{
		SceneSettings.Instance.LockInput = false;
	}

    void LoadScene(string name)
    {
        loadingUI.SetActive(true);
        Application.LoadLevelAsync(name);
    }

	public void OnKidModeClicked()
	{
		SceneSettings.Instance.IsTutorial = false;
		SceneSettings.Instance.HardLevel = 1;
		LoadScene("Main");
	}

	public void OnNinjaModeClicked()
	{
		SceneSettings.Instance.IsTutorial = false;
		SceneSettings.Instance.HardLevel = 2;
        LoadScene("Main");
	}

	public void OnTutorialClicked()
	{
		SceneSettings.Instance.IsTutorial = true;
		SceneSettings.Instance.LockInput = true;
        LoadScene("Tutorial");
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
