using UnityEngine;
using System.Collections;

public class WizardController : MonoBehaviour
{
	float timer = 0;
	public float triggerTime = 1.0f;
	Object fireBall;
	bool fired = false;
	// Use this for initialization
	void Start ()
	{
		fireBall = Resources.Load ("Prefabs/FireBall");
		Invoke ("Fire", triggerTime);
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	void Fire()
	{
		fired = true;
		var fireBallObj = Instantiate (fireBall) as GameObject;
		var position = fireBallObj.transform.position;
		position.x = transform.position.x + 5;
		fireBallObj.transform.position = position;
		fireBallObj.GetComponent<Rigidbody2D> ().velocity = new Vector2(20f, 0.0f);
		Destroy (fireBallObj, 2.0f);
		Destroy (this.gameObject, 2.5f);
	}
}
