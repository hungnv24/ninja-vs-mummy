using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ObstacleController : MonoBehaviour
{
	public GameObject player;
	private string[] prefabs = new string[] {
		"Prefabs/Mummy",
		"Prefabs/Brick"
	};
	private List<GameObject> obstacles = new List<GameObject> ();
	Vector2 cameraSize;
	Vector2 playerBound;
	private bool start = false;

	void Start ()
	{
		cameraSize.y = Camera.main.orthographicSize;
		cameraSize.x = Camera.main.aspect * cameraSize.y;
		playerBound = this.player.GetComponent<Renderer> ().bounds.size;
		Time.timeScale = 0;
	}

	void Update()
	{
		if (Input.GetMouseButton (0) && !start) {
			start = true;
			Time.timeScale = 1;
		}
	}
	
	void FixedUpdate ()
	{
		if (player != null && !ReferenceEquals (player, null)) {
			RemoveOldObstacles ();
			AddNewObstacleIfNeeded ();
		}
	}

	void RemoveOldObstacles ()
	{
		for (int i = 0; i < obstacles.Count; i++) {
			if (obstacles [i].transform.position.x <= this.player.transform.position.x 
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
		if (obstacles.Count == 0
			|| obstacles [obstacles.Count - 1].transform.position.x <= player.transform.position.x) {
			int length = Random.Range (1, 5);
			GameObject lastObstacle = null;
			for (var i = 0; i < length; i++) {
				int index = Random.Range (0, prefabs.Length);
				if (index > prefabs.Length - 1)
					index--;
				var obstacle = Instantiate (Resources.Load (prefabs [index])) as GameObject;
				var position = obstacle.transform.position;
				if (lastObstacle == null) {
					position.x = player.transform.position.x + cameraSize.x * 2;
				} else if (lastObstacle.tag == obstacle.tag) {
					position.x = lastObstacle.transform.position.x
						+ lastObstacle.GetComponent<BoxCollider2D> ().size.x / 2
						+ obstacle.GetComponent<BoxCollider2D> ().size.x / 2;
				} else {
					position.x = lastObstacle.transform.position.x + cameraSize.x;
				}

				obstacle.transform.position = position;
				obstacles.Add (obstacle);
				lastObstacle = obstacle;
			}

		}
	}

	public void RemoveObstacle (GameObject obj)
	{
		obstacles.Remove (obj);
	}

}
