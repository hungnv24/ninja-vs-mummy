using UnityEngine;
using System.Collections;

public class NinjaController : MonoBehaviour
{

	Animator animator;
	Rigidbody2D rigidbody;
	AudioSource audioSource;
	const int SWIPE_UP = 0;
	const int SWIPE_RIGHT = 1;
	const int SWIPE_DOWN = 2;
	const int SWIPE_LEFT = 3;
	private float jumpForce;
	private int currentState = FLAG_STATE_RUN;
	private Hashtable animationFlags = new Hashtable ();
	private bool grounded = false;
	public Transform groundCheck;
	private float groundCheckRadius = 0.2f;
	public LayerMask groundLayer;
	bool inputJump = false;
	bool inputThrow = false;
	bool inputSlide = false;
	bool inputSlash = false;

	public const int FLAG_STATE_RUN = 1;
	public const int FLAG_STATE_JUMP = 2;
	public const int FLAG_STATE_SLASH = 4;
	public const int FLAG_STATE_SLIDE = 8;
	public const int FLAG_STATE_THROW = 16;
	public const int FLAG_STATE_DIE = 32;
	public const int FLAG_STATE_FADE = 64;
	public const int FLAG_STATE_FADE_SLASH = 128;
	public float speed = 8;
	public float jumpHeight = 7.5f;
	public AudioClip sword;
	public AudioClip jump;
	public AudioClip die;
	public AudioClip throwing;
	public AudioClip hit;
	public AudioClip footStep;

	public int CurrentState
	{
		get
		{
			return currentState;
		}
	}

	void Awake ()
	{
		animationFlags.Add (Animator.StringToHash ("Running"), FLAG_STATE_RUN);
		animationFlags.Add (Animator.StringToHash ("Jump"), FLAG_STATE_JUMP);
		animationFlags.Add (Animator.StringToHash ("Slice"), FLAG_STATE_SLASH);
		animationFlags.Add (Animator.StringToHash ("Slide"), FLAG_STATE_SLIDE);
		animationFlags.Add (Animator.StringToHash ("Throw"), FLAG_STATE_THROW);
		animationFlags.Add (Animator.StringToHash ("Die"), FLAG_STATE_DIE);
	}

	// Use this for initialization
	void Start ()
	{
		animator = GetComponent<Animator> ();
		rigidbody = GetComponent<Rigidbody2D> ();
		audioSource = GetComponent<AudioSource> ();
		jumpForce = CalculateJumpForce ();
	}

	private float CalculateJumpVelocity ()
	{
		float gravity = Mathf.Abs (Physics2D.gravity.y);
		return Mathf.Sqrt (2 * rigidbody.gravityScale * gravity * jumpHeight);
	}

	private float CalculateJumpForce ()
	{
		float gravity = Mathf.Abs (Physics2D.gravity.y) * rigidbody.gravityScale;
		return rigidbody.mass * gravity * jumpHeight;
	}

	void FixedUpdate ()
	{
		currentState = GetCurrentState ();
		grounded = Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, groundLayer);
		if (!grounded &&
		    (currentState & (FLAG_STATE_JUMP|FLAG_STATE_DIE)) == 0) {
			animator.SetTrigger ("shouldJump");
			StopSound();
		} else if (grounded && currentState == FLAG_STATE_JUMP) {
			animator.SetTrigger ("shouldRun");
		} else if (grounded && currentState == FLAG_STATE_RUN) {
			if (!audioSource.isPlaying || audioSource.clip != footStep) {
				audioSource.clip = footStep;
				audioSource.loop = true;
				audioSource.pitch = 1.5f;
				audioSource.volume  = 0.15f;
				audioSource.Play();
			}
		}

		if (currentState == FLAG_STATE_SLIDE && GetComponent<BoxCollider2D> ().enabled) {
			GetComponent<BoxCollider2D> ().enabled = false;
		} else if (currentState != FLAG_STATE_SLIDE && !GetComponent<BoxCollider2D> ().enabled) {
			GetComponent<BoxCollider2D> ().enabled = true;
		}
		HandleInput ();
		MovePlayer ();
	}

	// Update is called once per frame
	void Update ()
	{
		GetInput ();
	}

	private void MovePlayer ()
	{
		if ((currentState & (FLAG_STATE_RUN | FLAG_STATE_SLIDE | FLAG_STATE_JUMP)) > 0) {
			rigidbody.velocity = new Vector2 (speed, rigidbody.velocity.y);
		} else if (currentState == FLAG_STATE_THROW) {
			rigidbody.velocity = new Vector2 (speed / 2, 0);
		}
	}

	private void GetInput ()
	{
		int swipe = GetSwipe ();
		
		bool isRunning = (currentState & FLAG_STATE_RUN) > 0;

		if ((Input.GetKeyDown (KeyCode.X) || swipe == SWIPE_UP) && isRunning) {
			inputJump = true;
		}
		
		if ((GetTapCount () == 1 || Input.GetKeyDown (KeyCode.C)) && isRunning) {
			inputSlash = true;
		}
		
		if ((Input.GetKeyDown(KeyCode.DownArrow) || swipe == SWIPE_DOWN) && isRunning) {
			inputSlide = true;
		}
		
		if ((Input.GetKeyDown(KeyCode.RightArrow) || swipe == SWIPE_RIGHT) && isRunning) {
			inputThrow = true;
		} 
	}

	private void HandleInput ()
	{

		if (inputJump) {
			animator.SetTrigger ("shouldJump");
			rigidbody.AddForce (new Vector2 (0, jumpForce));
			StopSound();
			audioSource.PlayOneShot(jump);
			inputJump = false;
		}
		
		if (inputSlash) {
			animator.SetTrigger ("shouldSlash");
			StopSound();
			audioSource.clip = sword;
			audioSource.PlayDelayed(0.25f);
			inputSlash = false;
		}
		
		if (inputSlide) {
			animator.SetTrigger ("shouldSlide");
			inputSlide = false;
		}
		
		if (inputThrow) {
			throwDart ();
			StopSound();
			audioSource.PlayOneShot(throwing);
			inputThrow = false;
		} 
	}

	void throwDart ()
	{
		animator.SetTrigger ("shouldThrow");
		Vector2 position = transform.position;
		position.x += 0.5f;
		position.y += GetComponent<Renderer> ().bounds.size.y / 2;
		GameObject dart = Instantiate (Resources.Load ("Prefabs/Dart", typeof(GameObject)),
		                              position,
		                              Quaternion.identity) as GameObject;
		dart.GetComponent<Rigidbody2D> ().velocity = new Vector2 (15, 0);
		Destroy (dart, 1.5f);
	}

	void OnCollisionEnter2D (Collision2D col)
	{
		bool hittedEnemy = DidHitEnemy (col);
		bool hittedWall = DidHitWall (col);

		if ((hittedWall || hittedEnemy) && (currentState & FLAG_STATE_DIE) == 0) {
			if (currentState == FLAG_STATE_RUN) {
				rigidbody.AddForce (new Vector2 (-250f, 50.0f));
			} else if (currentState == FLAG_STATE_JUMP) {
				rigidbody.AddForce (new Vector2 (-250f, -0));
			}
			StopSound();
			audioSource.PlayOneShot(hit);
			Die();
		}
	}

	private bool DidHitWall (Collision2D col)
	{
		bool hittedWall = col.gameObject.tag == "Wall";
		if (hittedWall && col.contacts [0].otherCollider is CircleCollider2D) {
			Vector2 objSize = col.collider.bounds.size;
			Vector2 objPos = col.collider.bounds.center;
			CircleCollider2D selfCollider = (CircleCollider2D)col.contacts [0].otherCollider;
			float selfSize = selfCollider.radius * 2;
			Vector2 selfPos = selfCollider.bounds.center;
			if (selfPos.x >= objPos.x - objSize.x / 2
				|| selfPos.y - selfSize / 2 >= objPos.y + objSize.y / 2) {
				hittedWall = false;
			}
		}
		return hittedWall;
	}

	private bool DidHitEnemy (Collision2D col)
	{
		return col.gameObject.tag == "Mummy"
			&& (currentState & (FLAG_STATE_RUN | FLAG_STATE_JUMP)) > 0
			&& (col.contacts [0].otherCollider is BoxCollider2D);
	}

	public void Die()
	{
		GetComponent<BoxCollider2D> ().enabled = false;
		animator.SetTrigger ("die");
		currentState = FLAG_STATE_DIE;
		audioSource.PlayOneShot (die);
		Destroy (gameObject, 2.0f);
	}

	public int GetCurrentState ()
	{
		try {
			if (currentState == FLAG_STATE_DIE)
				return FLAG_STATE_DIE;
			AnimatorStateInfo currentInfo = animator.GetCurrentAnimatorStateInfo (0);
			if (currentInfo.Equals (null)) {
				return 0;
			}
			return (int)animationFlags [currentInfo.shortNameHash];
		} catch (UnityException e) {
			Debug.Log (e.StackTrace);
		}
		return 0;
	}

	private int GetTapCount ()
	{
		if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Ended) {
			return Input.GetTouch (0).tapCount;
		}
		return 0;
	}

	private int GetSwipe ()
	{
		if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Moved) {
			Vector2 touchDelta = Input.GetTouch (0).deltaPosition;
			if (touchDelta.x < -20 && Mathf.Abs (touchDelta.x) > Mathf.Abs (touchDelta.y)) {
				return SWIPE_LEFT;
			}
			
			if (touchDelta.x > 20 && Mathf.Abs (touchDelta.x) > Mathf.Abs (touchDelta.y)) {
				return SWIPE_RIGHT;
			}
			
			if (touchDelta.y > 20 && Mathf.Abs (touchDelta.y) > Mathf.Abs (touchDelta.x)) {
				return SWIPE_UP;
			}
			
			if (touchDelta.y < -20 && Mathf.Abs (touchDelta.y) > Mathf.Abs (touchDelta.x)) {
				return SWIPE_DOWN;
			}
		}
		return -1;
	}

	private void StopSound()
	{
		audioSource.Stop();
		audioSource.pitch = 1;
		audioSource.loop = false;
		audioSource.volume = 1;
	}
}
