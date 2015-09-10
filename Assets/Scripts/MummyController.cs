using UnityEngine;
using System.Collections;

public class MummyController : MonoBehaviour {
	public float walkingSpeed = -1.0f;
	private Animator animator;
	private Rigidbody2D myRigidbody;
	private int killedBy;
	private const int KILLED_BY_SLASH = 0;
	private const int KILLED_BY_SLIDE = 1;
	private const int KILLED_BY_DART = 2;
	private const int KILLED_BY_JUMPED_ON = 3;
	
	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		myRigidbody = GetComponent<Rigidbody2D> ();
		killedBy = -1;
	}
	
	// Update is called once per frame
	void Update () {
		if (isInState ("Walking")) {
			transform.Translate(new Vector2(walkingSpeed*Time.deltaTime, 0));
		}
	}

	public bool isInState(string state) {
		AnimatorStateInfo currentInfo = animator.GetCurrentAnimatorStateInfo(0);
		return currentInfo.IsName (state);
	}

	void OnCollisionEnter2D (Collision2D col) {
		if (col.gameObject.tag == "Player") {
			if (col.collider is BoxCollider2D 
			    && col.contacts[0].otherCollider is CircleCollider2D
			    && !isInState("Die")) {
				Invoke("Die",0.1f);
			}
		}
	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Player") {
			if (col.gameObject.GetComponent<NinjaController>().isInState("Slice")) {
				killedBy = KILLED_BY_SLASH;
				Invoke("Die",0.1f);
			} else if (col.gameObject.GetComponent<NinjaController>().isInState("Slide")){
				killedBy = KILLED_BY_SLIDE;
				Die();
			} else {
				animator.SetTrigger("attack");
				Destroy(gameObject, 5.0f);
			}
		}
		if (col.gameObject.tag == "Dart" && !isInState("Die")) {
			Invoke("Die",0.2f);
			Destroy(col.gameObject, 0.1f);
		}
	}

	void OnTriggerStay2D(Collider2D col) {
		if (col.gameObject.tag == "Player"
		    && killedBy < 0
		    && col.gameObject.GetComponent<NinjaController>().isInState("Slice")) {
			killedBy = KILLED_BY_SLASH;
			Invoke("Die",0.1f);
		}
	}

	public void Die() {
		if (killedBy == KILLED_BY_SLIDE) {
			animator.SetTrigger ("fall_die");
		} else if (killedBy == KILLED_BY_SLASH) {
			animator.SetTrigger("headOff");
		} else {
			animator.SetTrigger("die");
		}

		Destroy (myRigidbody);
		foreach (Collider2D col in GetComponents<Collider2D>()) {
			Destroy(col);
		}
		Destroy (gameObject, 2.0f);
	}
}
