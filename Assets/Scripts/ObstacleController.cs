using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ObstacleController : MonoBehaviour
{
	public GameObject player;
	private string[] prefabs = new string[] {
		"Mummy",
		"Brick",
		"Mummy",
		"Fire",
		"FlyingFlame",
		"Mummy",
		"Brick",
		"Mummy",
		"Fire",
		"FlyingFlame",
		"WizardCheck"
	};
	private List<GameObject> obstacles = new List<GameObject> ();
	Vector2 cameraSize;
	Vector2 playerBound;
	int hard = 1;
	float obstacleDistance;
	int continuousMummy = 0;

	ObjectPool pool;

	void Awake()
	{
		pool = ObjectPool.Instance;
		for (int i = 0; i < prefabs.Length; i++) {
			for (int j = 0; j < 3; j++) {
				var obj = (GameObject) Instantiate(Resources.Load ("Prefabs/" + prefabs[i]));
				obj.name = prefabs[i];
				obj.SetActive(false);
				pool.StoreFree(obj);
			}
		}
	}

	void Start ()
	{
		cameraSize.y = Camera.main.orthographicSize;
		cameraSize.x = Camera.main.aspect * cameraSize.y;
		obstacleDistance = cameraSize.y * 1.5f;
		playerBound = this.player.GetComponent<Renderer> ().bounds.size;
		StartCoroutine (CheckCoroutine ());
		hard = SceneSettings.Instance.HardLevel;
	}

	void Update()
	{

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
			yield return new WaitForSeconds(1);
		}
	}

	void RemoveOldObstacles ()
	{
		for (int i = 0; i < obstacles.Count; i++) {
			if (obstacles[i] == null || obstacles [i].Equals(null)) {
				obstacles.RemoveAt (i);
			} else if (!obstacles [i].activeSelf ||
				obstacles [i].transform.position.x <= this.player.transform.position.x 
				- this.cameraSize.x - playerBound.x / 2) {
				obstacles[i].SetActive(false);
				pool.StoreFree(obstacles[i]);
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
		    ||( !obstacles[obstacles.Count - 1].Equals(null)
		   		&& obstacles [obstacles.Count - 1].transform.position.x
		   		<= screenCenter.x + cameraSize.x)) {
			GameObject lastObstacle = null;
			if (obstacles.Count > 0) {
				lastObstacle = obstacles[obstacles.Count - 1];
			}
			int index = Random.Range (-1, prefabs.Length);
			if (index > prefabs.Length - 1)
				index--;
			if (index < 0)
				index++;

			var obstacle = (GameObject) pool.GetPrefabsByName(prefabs[index]);
			if (!obstacle.activeSelf)
				obstacle.SetActive(true);

			if (lastObstacle != null &&
			    obstacle.tag == "Mummy" &&
			    lastObstacle.tag == "Mummy") {
				continuousMummy++;
				if (continuousMummy >= 5) {
					obstacle.SetActive(false);
					pool.StoreFree(obstacle);
					return;
				}
			} else if (continuousMummy > 0) {
				continuousMummy = 0;
			}

			if (lastObstacle != null &&
			    obstacle.tag == "WizardCheck" &&
			    lastObstacle.tag == "WizardCheck") {
				obstacle.SetActive(false);
				pool.StoreFree(obstacle);
				return;
			}

			var position = obstacle.transform.position;
			if (lastObstacle == null) {
				position.x = screenCenter.x + cameraSize.x * 1.5f;
			} else if (lastObstacle.tag == obstacle.tag
			           && lastObstacle.GetComponent<BoxCollider2D> () != null) {
				if (obstacle.tag == "Wall") {
					var pos = lastObstacle.transform.position;
					position.z = pos.z + 1;
				}
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
