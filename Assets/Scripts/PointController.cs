using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class PointController : MonoBehaviour
{
	GameObject pointLabel;
	long currentPoint;
	float lastUpdate;
	int combo;
	ObjectPool pool;
	public GameObject canvas;
	static PointController instance;

	public static PointController GetInstance()
	{
		return instance;
	}

	void Awake()
	{
		pointLabel = GameObject.Find ("PointLabel");
		combo = 0;
		lastUpdate = -2;
		currentPoint = 0;
		pool = ObjectPool.Instance;
		instance = this;
	}

	void Start()
	{
		InitPool ();
	}

	void InitPool()
	{
		for (int i = 0; i < 3; i++) {
			var obj = (GameObject)Instantiate(Resources.Load("Prefabs/FloatingPoint"));
			obj.name = "FloatingPoint";
			obj.transform.SetParent(canvas.transform, false);
			pool.StoreFree(obj);
			obj.SetActive(false);
		}
	}

	public void ShowPoint(int point)
	{
		var deltaTime = Time.time - lastUpdate;
		if (deltaTime < 1.5) {
			combo++;
		} else if (combo > 0 && deltaTime >= 1.5) {
			combo = 0;
		}
		var comboText = "";
		var originPoint = point;
		var obj = (GameObject)pool.GetPrefabsByName("FloatingPoint");
		obj.transform.SetParent(canvas.transform, false);
		obj.SetActive (true);
		if (combo > 0) {
			point *= (combo + 1);
			comboText = "x" + (combo + 1);
			obj.GetComponent<Text> ().color = Color.yellow;
		} else {
			obj.GetComponent<Text>().color = Color.red;
		}
		obj.GetComponent<Text>().text = "+" + originPoint + comboText;
		lastUpdate = Time.time;
		UpdatePoint (point);
	}

	public void UpdatePoint(int point)
	{
		currentPoint += point;
		pointLabel.GetComponent<Text> ().text = "" + currentPoint;
	}

	private void CheckSocialPlatform()
	{
		if (!Social.localUser.authenticated) {
			Social.localUser.Authenticate (success => {
				if (success) {
					Debug.Log ("Authentication successful");
				}
				else
					Debug.Log ("Authentication failed");
			});
		}
	}

	public void SubmitScore()
	{
		if (!PlayerPrefs.HasKey ("best_score_" + SceneSettings.Instance.HardLevel) ||
			PlayerPrefs.GetInt ("best_score_" + SceneSettings.Instance.HardLevel) < currentPoint) {
			PlayerPrefs.SetInt ("best_score_" + SceneSettings.Instance.HardLevel, (int) currentPoint);
			PlayerPrefs.Save ();
		}
		CheckSocialPlatform ();
		string leaderboardID = "";
		if (Application.platform == RuntimePlatform.Android) {
			if (SceneSettings.Instance.HardLevel == 1)
				leaderboardID = NinjaVsMummy.GPGIds.leaderboard_top_kids;
			else
				leaderboardID = NinjaVsMummy.GPGIds.leaderboard_top_ninjas;
		}
		Debug.Log ("Leader board " + leaderboardID);
		Social.ReportScore (currentPoint, leaderboardID, success => {
			Debug.Log(success ? "Reported score successfully" : "Failed to report score");
		});
	}

	public long GetPoint()
	{
		return currentPoint;
	}

	public int GetBest()
	{
		if (PlayerPrefs.HasKey ("best_score_" + SceneSettings.Instance.HardLevel))
			return PlayerPrefs.GetInt ("best_score_" + SceneSettings.Instance.HardLevel);
		return (int) currentPoint;
	}

	public static void Dispose() {
		instance = null;
	}
}
