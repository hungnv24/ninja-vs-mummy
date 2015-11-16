using UnityEngine;
using System.Collections;

public class WizardCheck : MonoBehaviour
{
	GameObject player;
	bool created = false;
	bool playerEntered = false;
	Object prefab;
	// Use this for initialization
	void Start ()
	{
		player = GameObject.FindWithTag ("Player");
		prefab = Resources.Load ("Prefabs/Wizard");
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "Player") {
			playerEntered = true;
		}
	}

	void OnTriggerExit2D(Collider2D col)
	{
		if (playerEntered && !created) {
			var obj = Instantiate(prefab) as GameObject;
			var pos = obj.transform.position;
			pos.x = transform.position.x - 1.1f;
			obj.transform.position = pos;
			created = true;
		}
	}

	void OnDisable()
	{
		created = false;
		playerEntered = false;
	}
}
