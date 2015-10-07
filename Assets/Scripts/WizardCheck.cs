using UnityEngine;
using System.Collections;

public class WizardCheck : MonoBehaviour
{
	GameObject player;
	bool created = false;
	Object prefab;
	// Use this for initialization
	void Start ()
	{
		player = GameObject.Find ("Ninja");
		prefab = Resources.Load ("Prefabs/Wizard");
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "Player" && !created) {
			var obj = Instantiate(prefab) as GameObject;
			var pos = obj.transform.position;
			pos.x = player.transform.position.x - 1.0f;
			obj.transform.position = pos;
			created = true;
		}
	}

	void OnDisable()
	{
		created = false;
	}
}
