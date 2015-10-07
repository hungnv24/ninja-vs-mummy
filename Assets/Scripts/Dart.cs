using UnityEngine;
using System.Collections;

public class Dart : MonoBehaviour
{

	ObjectPool pool;
	float countdown = 0f;
	public float flyingTime = 1.5f;

	void Awake ()
	{
		pool = ObjectPool.Instance;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (countdown < flyingTime) {
			countdown += Time.deltaTime;
			return;
		}
		gameObject.SetActive (false);
		pool.StoreFree (gameObject);
	}

	void OnDisable()
	{
		countdown = 0f;
	}
}
