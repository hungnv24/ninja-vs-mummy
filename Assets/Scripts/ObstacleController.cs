using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ObstacleController : MonoBehaviour
{
	public GameObject player;
	private string[] prefabs = new string[] {
		"Prefabs/Mummy",
		"Prefabs/Brick",
		"Prefabs/Mummy",
		"Prefabs/Fire",
		"Prefabs/FlyingFlame"
	};
	private List<Object> data = new List<Object> ();
	private List<GameObject> obstacles = new List<GameObject> ();
	Vector2 cameraSize;
	Vector2 playerBound;
	private bool start = false;
	int hard = 2;
	float obstacleDistance;

	void Start ()
	{
		cameraSize.y = Camera.main.orthographicSize;
		cameraSize.x = Camera.main.aspect * cameraSize.y;
		obstacleDistance = cameraSize.y * 1.5f;
		playerBound = this.player.GetComponent<Renderer> ().bounds.size;
		Time.timeScale = 0;
		for (int i = 0; i < prefabs.Length; i++) {
			Object obj = Resources.Load(prefabs [i], typeof(GameObject));
			data.Add(obj);
		}
		StartCoroutine (CheckCoroutine ());
	}

	void Update()
	{
		if (Input.GetMouseButton (0) && !start) {
			start = true;
			Time.timeScale = 1;
		}
	}

	void FixedUpdate()
	{
		if (player != null && !player.Equals(null)) {
			AddNewObstacleIfNeeded ();
		}
	}

	IEnumerator CheckCoroutine()
	{
		while (true) {
			if (player != null && !player.Equals (null)) {
				RemoveOldObstacles ();
			}
			yield return new WaitForSeconds(2);
		}
	}

	void RemoveOldObstacles ()
	{
		for (int i = 0; i < obstacles.Count; i++) {
			if (obstacles [i].Equals(null) ||
				obstacles [i].transform.position.x <= this.player.transform.position.x 
				- this.cameraSize.x - playerBound.x / 2) {
				Destroy (obstacles [i]);
				obstacles.RemoveAt (i);
			} else {
				break;
			}
		}
	}


	void AddNewObstacleIfNeeded ()
	{
		var screenCenter = Camera.main.transform.position;
		if (obstacles.Count == 0
			|| obstacles [obstacles.Count - 1].transform.position.x <= screenCenter.x + cameraSize.x) {
			GameObject lastObstacle = null;
			if (obstacles.Count > 0) {
				lastObstacle = obstacles[obstacles.Count - 1];
			}
			int index = Random.Range (0, prefabs.Length);
			if (index > prefabs.Length - 1)
				index--;
			var obstacle = Instantiate (data[index]) as GameObject;

			var position = obstacle.transform.position;
			if (lastObstacle == null) {
				position.x = screenCenter.x + cameraSize.x * 1.5f;
			} else if (lastObstacle.tag == obstacle.tag
			           && lastObstacle.GetComponent<BoxCollider2D> () != null) {
				position.x = lastObstacle.transform.position.x
					+ lastObstacle.GetComponent<BoxCollider2D> ().size.x / 2
					+ obstacle.GetComponent<BoxCollider2D> ().size.x / 2;
			} else if (lastObstacle.tag == "Fire" || lastObstacle.tag == "FlyingFlame" || obstacle.tag == "FlyingFlame") {
				position.x = lastObstacle.transform.position.x + obstacleDistance;
			} else {
				position.x = lastObstacle.transform.position.x + obstacleDistance / hard;
			}

			obstacle.transform.position = position;
			obstacles.Add (obstacle);
			lastObstacle = obstacle;
		}
	}

	public void RemoveObstacle (GameObject obj)
	{
		obstacles.Remove (obj);
	}

}
