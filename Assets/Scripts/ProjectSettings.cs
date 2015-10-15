using UnityEngine;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi;

public class ProjectSettings : MonoBehaviour
{
	void Awake ()
	{
		Application.targetFrameRate = 60;

		if (!Social.localUser.authenticated) {
			if (Application.platform == RuntimePlatform.Android) {
				PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder ().Build ();
				PlayGamesPlatform.InitializeInstance(config);
				PlayGamesPlatform.DebugLogEnabled = true;
				PlayGamesPlatform.Activate();
			}
			Social.localUser.Authenticate (success => {
				if (success) {
					Debug.Log ("Authentication successful");
				}
				else
					Debug.Log ("Authentication failed");
			});
		}
	}

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}
