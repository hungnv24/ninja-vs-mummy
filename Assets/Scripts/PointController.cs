using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PointController
{
	GameObject pointLabel;
	long currentPoint;
	float lastUpdate;
	int combo;
	ObjectPool pool;
	GameObject canvas;
	static PointController instance = null;
	static object syncRoot = new object();

	private PointController()
	{
		pointLabel = GameObject.Find ("PointLabel");
		combo = 0;
		lastUpdate = -2;
		currentPoint = 0;
		pool = ObjectPool.Instance;
		canvas = GameObject.Find ("MainCanvas");
		Debug.Log("Inited");
	}

	public static PointController GetInstance()
	{
		if (instance == null) {
			lock (syncRoot) {
				if (instance == null) {
					instance = new PointController();
				}
			}
		}
		return instance;
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
		obj.SetActive (true);
		if (combo > 0) {
			point *= (combo + 1);
			comboText = "x" + (combo + 1);
			obj.GetComponent<Text>().color = Color.yellow;
		}
		obj.GetComponent<Text>().text = "+" + originPoint + comboText;

		obj.transform.SetParent(canvas.transform, false);
		lastUpdate = Time.time;
		UpdatePoint (point);
	}

	public void UpdatePoint(int point)
	{
		currentPoint += point;
		pointLabel.GetComponent<Text> ().text = "" + currentPoint;
	}

	public static void Dispose() {
		instance = null;
	}
}
