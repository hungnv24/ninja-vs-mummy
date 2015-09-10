using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnvironmentGenerate : MonoBehaviour {
	List<GameObject> backgrounds = new List<GameObject>();

	// Use this for initialization
	void Start () {
		backgrounds.Add(GameObject.Find("Environment"));
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Checkpoint") {
			AddBackground();
			RemoveBackground();
			Destroy(col.gameObject);
		}
	}

	void AddBackground() {
		GameObject obj = (GameObject) backgrounds[backgrounds.Count - 1];
		GameObject newEnv = Instantiate (Resources.Load("Prefabs/Environment", typeof(GameObject))) as GameObject;
		GameObject background = null;
		for (int i = 0; i < obj.transform.childCount; i++) {
			if (obj.transform.GetChild(i).name == "BackGround2") {
				background = obj.transform.GetChild(i).gameObject;
				break;
			}
		}
		if (background != null) {
			Vector3 size = background.transform.GetComponent<Renderer>().bounds.size;
			Vector3 position = background.transform.position;
			position.x = position.x + size.x - 0.01f;
			position.z = 10.0f;
			newEnv.transform.position = position;
			backgrounds.Add (newEnv);
		} else {
			Debug.LogError("Cannot get child");
		}
	}

	void RemoveBackground() {
		if (backgrounds.Count <= 2)
			return;
		Destroy (backgrounds[0]);
		backgrounds.RemoveAt(0);
	}
}
