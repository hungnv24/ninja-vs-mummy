using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PointController
{
	private static PointController instance = null;
	static object syncRoot = new Object ();
	GameObject pointLabel;
	int currentPoint = 0;
	float lastUpdate = 0;
	int combo = 0;

	private PointController()
	{
		pointLabel = GameObject.Find ("PointLabel");
	}

	public static PointController GetInstance()
	{
		lock (syncRoot) {
			if (instance == null) {
				instance = new PointController();;
				Debug.Log("inited");
			}
			return instance;
		}
	}

	public void ShowPoint(int point)
	{
		var deltaTime = Time.time - lastUpdate;
		if (deltaTime < 2) {
			combo++;
		} else if (combo > 0 && deltaTime >=2) {
			combo = 0;
		}
		var comboText = "";
		var originPoint = point;
		var obj = Object.Instantiate (Resources.Load("Prefabs/FloatingPoint")) as GameObject;
		if (combo > 0) {
			point *= (combo + 1);
			comboText = "x" + (combo + 1);
			obj.GetComponent<Text>().color = Color.yellow;
		}
		obj.GetComponent<Text>().text = "+" + originPoint + comboText;
		var canvas = GameObject.Find ("MainCanvas");
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
