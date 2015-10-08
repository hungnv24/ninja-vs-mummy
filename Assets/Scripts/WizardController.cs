using UnityEngine;
using System.Collections;

public class WizardController : MonoBehaviour
{
	float timer = 0;
	public float triggerTime = 1.0f;
	Object fireBall;
	GameObject player;
	GameObject sceneWatcher;
	Animator animator;

	public bool IsDead { get; private set;}

	void Start ()
	{
		animator = GetComponent<Animator> ();
		player = GameObject.FindGameObjectWithTag ("Player");
		fireBall = Resources.Load ("Prefabs/FireBall");
		Invoke ("Fire", triggerTime);
	}

	void OnEnable()
	{
		IsDead = false;
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "AttackCheck"
		    && !IsDead
		    && !player.Equals(null)
		    && (player.GetComponentInParent<NinjaController> ().CurrentState
		    & (NinjaController.FLAG_STATE_FADE | NinjaController.FLAG_STATE_FADE_SLASH)) > 0) {
			IsDead = true;
			Die();
		}
	}

	void Fire()
	{
		var fireBallObj = Instantiate (fireBall) as GameObject;
		var position = fireBallObj.transform.position;
		position.x = transform.position.x + 5;
		fireBallObj.transform.position = position;
		fireBallObj.GetComponent<Rigidbody2D> ().velocity = new Vector2(20f, 0.0f);
		Destroy (fireBallObj, 2.0f);
		Destroy (this.gameObject, 2.5f);
	}

	void Die()
	{
		CancelInvoke ();
		animator.SetTrigger ("shouldDie");
		var point = 35;
		PointController.GetInstance ().ShowPoint (point);
		Destroy (gameObject, 2.0f);
	}
}
