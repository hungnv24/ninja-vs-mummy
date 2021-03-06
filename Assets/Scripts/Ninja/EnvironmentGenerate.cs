﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnvironmentGenerate : MonoBehaviour
{
	List<GameObject> backgrounds = new List<GameObject> ();
	public Object environmentPrefabs;
	ObjectPool pool;

	// Use this for initialization
	void Start ()
	{
		pool = ObjectPool.Instance;
		GameObject background = (GameObject) pool.GetPrefabsByName("Environment");
		background.transform.Find ("Checkpoint").gameObject.SetActive (true);
		backgrounds.Add (background);
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		if (col.gameObject.tag == "Checkpoint") {
			AddBackground ();
			RemoveBackground ();
			col.gameObject.SetActive(false);
		}
	}

	void AddBackground ()
	{
		GameObject obj = (GameObject)backgrounds [backgrounds.Count - 1];
		GameObject newEnv = (GameObject) pool.GetPrefabsByName("Environment");
		newEnv.SetActive (true);
		newEnv.transform.Find ("Checkpoint").gameObject.SetActive (true);
		GameObject background = obj.transform.Find ("RightBackground").gameObject;

		if (background != null) {
			Vector3 size = background.transform.GetComponent<Renderer> ().bounds.size;
			Vector3 position = background.transform.position;
			position.x = position.x + size.x - 0.01f;
			position.z = 10.0f;
			newEnv.transform.position = position;
			backgrounds.Add (newEnv);
		} else {
			Debug.LogError ("Cannot get child");
		}
	}

	void RemoveBackground ()
	{
		if (backgrounds.Count <= 2)
			return;
		backgrounds [0].SetActive (false);
		pool.StoreFree(backgrounds[0]);
		backgrounds.RemoveAt (0);
	}
}
