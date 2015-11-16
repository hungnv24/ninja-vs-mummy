using UnityEngine;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

public class GooglePlayService : MonoBehaviour
{
	public GoogleAnalyticsV3 gav3;

	void Awake()
	{
		gav3.StartSession ();
		if (!Social.localUser.authenticated &&
            Application.internetReachability != NetworkReachability.NotReachable) {
			#if UNITY_ANDROID
				PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder ()
					.EnableSavedGames()
						.Build ();
				PlayGamesPlatform.InitializeInstance(config);
				PlayGamesPlatform.DebugLogEnabled = true;
				PlayGamesPlatform.Activate();
			#endif
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
