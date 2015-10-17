using UnityEngine;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

public class GooglePlayService : MonoBehaviour
{
	void Awake()
	{
		if (!Social.localUser.authenticated) {
			if (Application.platform == RuntimePlatform.Android) {
				PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder ()
					.EnableSavedGames()
						.Build ();
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
}
