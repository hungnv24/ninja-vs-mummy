using UnityEngine;
using System.Collections;

public class NinjaController : MonoBehaviour {

	Animator animator;
	Rigidbody2D rigid;
	public float speed = 10;
	public float jumpHeight = 2.5f;
	const int SWIPE_UP = 0;
	const int SWIPE_RIGHT = 1;
	const int SWIPE_DOWN = 2;
	const int SWIPE_LEFT = 3;
	GameObject groundRunningOn;
	private float velocity;

	// Use this for initialization
	void Start () {
		animator = this.GetComponent<Animator> ();
		rigid = this.GetComponent<Rigidbody2D> ();
		velocity = CalculateJumpVelocity();
	}

	private float CalculateJumpVelocity() {
		float gravity = Mathf.Abs(Physics2D.gravity.y);
		return Mathf.Sqrt (2*rigid.gravityScale*gravity*jumpHeight);
	}

	// Update is called once per frame
	void Update () {
		// Running
		if (isInState("Running") || isInState("Slide") || isInState("Jump")) {
			transform.Translate(new Vector2(speed*Time.deltaTime,0));
		} else if (isInState("Throw")) {
			transform.Translate(new Vector2(speed*Time.deltaTime/2,0));
		}
		// Check input for action
		float verticalInput = Input.GetAxis ("Vertical");
		float horizontalInput = Input.GetAxis ("Horizontal");
		int swipe = getSwipe();

		if ((Input.GetKeyDown("x") || swipe == SWIPE_UP) && isInState("Running")) {
			animator.SetTrigger("shouldJump");
			rigid.velocity = new Vector2(0, velocity);
		}

		if ((getTapCount() == 1 || Input.GetKeyDown("c")) && isInState("Running")) {
			animator.SetTrigger("shouldSlash");
		}

		if ((verticalInput < 0 || swipe == SWIPE_DOWN) && isInState("Running")) {
			animator.SetTrigger("shouldSlide");
		}

		if ((horizontalInput > 0 || swipe == SWIPE_RIGHT) && isInState("Running")) {
			throwDart();
		} 
	}

	void throwDart() {
		animator.SetTrigger("shouldThrow");
		Vector2 position = transform.position;
		position.x += 0.5f;
		position.y += GetComponent<Renderer> ().bounds.size.y / 2;
		GameObject dart = Instantiate(Resources.Load ("Prefabs/Dart", typeof(GameObject)),
		                              position,
		                              this.transform.rotation) as GameObject;
		dart.GetComponent<Rigidbody2D> ().velocity = new Vector2(15,0);
		Destroy (dart, 1.5f);
	}

	void OnCollisionEnter2D(Collision2D col) {
		bool hittedEnemy = DidHitEnemy(col);
		bool hittedWall = DidHitWall (col);

		if ((hittedWall || hittedEnemy) && !isInState("Die")) {
			if (isInState("Running")) {
				rigid.AddForce(new Vector2(-100f,50.0f));
			} else if (isInState("Jump")) {
				rigid.AddForce(new Vector2(-100f, -200f));
			}
			animator.SetTrigger ("die");
			Destroy(gameObject, 2.0f);
		} else if (col.gameObject.tag == "Ground"
		           || (col.gameObject.tag == "Wall" && !hittedWall)) {
			groundRunningOn = col.gameObject;
			if (isInState ("Jump")) {
				animator.SetTrigger("shouldRun");
			}
		}
	}

	void OnCollisionExit2D(Collision2D col) {
		if (col.gameObject == groundRunningOn
		    && (col.gameObject.tag == "Ground" || col.gameObject.tag == "Wall")
		    && isInState ("Running")) {
			animator.SetTrigger("shouldJump");
		}
	}

	private bool DidHitWall(Collision2D col) {
		bool hittedWall = col.gameObject.tag == "Wall";
		if (hittedWall && col.contacts[0].otherCollider is BoxCollider2D) {
			Vector2 objSize = col.collider.bounds.size;
			Vector2 objPos = col.collider.bounds.center;
			Vector2 selfSize = col.contacts[0].otherCollider.bounds.size;
			Vector2 selfPos = col.contacts[0].otherCollider.bounds.center;
			if (selfPos.x + selfSize.x/2 >= objPos.x - objSize.x/2
			    && selfPos.y - selfSize.y/2 >= objPos.y + objSize.y/2) {
				hittedWall = false;
			}
		}
		return hittedWall;
	}

	private bool DidHitEnemy(Collision2D col) {
		return col.gameObject.tag == "Mummy"
			&& (!col.gameObject.GetComponent<MummyController>().isInState("Die")
			    || !col.gameObject.GetComponent<MummyController>().isInState("Fall and Die"))
			&& (col.collider is BoxCollider2D 
				|| col.contacts [0].otherCollider is CircleCollider2D);
	}

	public bool isInState(string state) {
		AnimatorStateInfo currentInfo = animator.GetCurrentAnimatorStateInfo (0);
		return currentInfo.IsName (state);
	}

	private int getTapCount() {
		if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended) {
			return Input.GetTouch(0).tapCount;
		}
		return 0;
	}

	private int getSwipe() {
		if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Moved) {
			Vector2 touchDelta = Input.GetTouch (0).deltaPosition;
			if (touchDelta.x < -20 && Mathf.Abs (touchDelta.x) > Mathf.Abs (touchDelta.y)) {
				return SWIPE_LEFT;
			}
			
			if (touchDelta.x > 20 && Mathf.Abs (touchDelta.x) > Mathf.Abs (touchDelta.y)) {
				return SWIPE_RIGHT;
			}
			
			if (touchDelta.y > 20 && Mathf.Abs (touchDelta.y) > Mathf.Abs(touchDelta.x)) {
				return SWIPE_UP;
			}
			
			if (touchDelta.y < -20 && Mathf.Abs (touchDelta.y) > Mathf.Abs(touchDelta.x)) {
				return SWIPE_DOWN;
			}
		}
		return -1;
	}
}
