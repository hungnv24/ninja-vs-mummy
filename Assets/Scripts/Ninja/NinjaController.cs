using UnityEngine;
using System.Collections;

public class NinjaController : MonoBehaviour
{

	Animator animator;
	Rigidbody2D rigidbody;
	AudioSource audioSource;
	private float jumpForce;
	private int currentState = FLAG_STATE_RUN;
	private Hashtable animationFlags = new Hashtable ();
	private bool grounded = false;
	private float groundCheckRadius = 0.2f;
	bool inputJump = false;
	bool inputThrow = false;
	bool inputSlide = false;
	bool inputSlash = false;
	Command jumpCommand;
	Command slashCommand;
	Command throwCommand;
	Command dieCommand;
	bool isOnFire = false;
	float timer = 0.0f;
	float bonusSpeed = 1.0f;
	float maxBonusSpeed = 2.0f;

	public Transform groundCheck;
	public LayerMask groundLayer;
	public LayerMask fireLayer;
	public const int FLAG_STATE_RUN = 1;
	public const int FLAG_STATE_JUMP = 2;
	public const int FLAG_STATE_SLASH = 4;
	public const int FLAG_STATE_SLIDE = 8;
	public const int FLAG_STATE_THROW = 16;
	public const int FLAG_STATE_DIE = 32;
	public const int FLAG_STATE_FADE = 64;
	public const int FLAG_STATE_FADE_SLASH = 128;
	public const int FLAG_STATE_FALL_DIE = 256;
	public float speed;
	public float jumpHeight;
	
	public int CurrentState {
		get {
			return currentState;
		}
		set {
			currentState = value;
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
		animationFlags.Add (Animator.StringToHash ("Fall_die"), FLAG_STATE_FALL_DIE);

		jumpCommand = new JumpCommand (gameObject, jumpHeight);
		slashCommand = new SlashCommand (gameObject);
		throwCommand = new ThrowingCommand (gameObject);
		dieCommand = new DieCommand (gameObject);
	}

	// Use this for initialization
	void Start ()
	{
		animator = GetComponent<Animator> ();
		rigidbody = GetComponent<Rigidbody2D> ();
		audioSource = GetComponent<AudioSource> ();
	}

	void FixedUpdate ()
	{
		currentState = GetCurrentState ();
		grounded = Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, groundLayer);
		isOnFire = Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, fireLayer);

		if (isOnFire && currentState != FLAG_STATE_DIE) {
			AudioUtils.GetInstance ().StopSound (audioSource);
			dieCommand.execute ();
		}

		if (currentState == FLAG_STATE_RUN) {
			animator.speed = bonusSpeed;
		} else {
			animator.speed = 1;
		}

		if (!grounded &&
			(currentState & (FLAG_STATE_JUMP | FLAG_STATE_DIE)) == 0) {
			animator.SetTrigger ("shouldJump");
			AudioUtils.GetInstance ().StopSound (audioSource);
		} else if (grounded && currentState == FLAG_STATE_JUMP) {
			animator.SetTrigger ("shouldRun");
		} else if (grounded && currentState == FLAG_STATE_RUN) {
			if (!audioSource.isPlaying || audioSource.clip != AudioUtils.GetInstance ().LoadClip ("footstep")) {
				audioSource.pitch = 1.5f * bonusSpeed;
				audioSource.volume = 0.125f;
				AudioUtils.GetInstance ().PlayLoop (audioSource, "footstep");
			}
		} else if (grounded &&
			(currentState & (FLAG_STATE_RUN | FLAG_STATE_DIE | FLAG_STATE_SLASH | FLAG_STATE_FADE_SLASH)) == 0) {
			AudioUtils.GetInstance ().StopSound (audioSource);
		}

		if (currentState == FLAG_STATE_SLIDE && GetComponent<BoxCollider2D> ().enabled) {
			GetComponent<BoxCollider2D> ().enabled = false;
		} else if ((currentState & FLAG_STATE_SLIDE) == 0
		           && !GetComponent<BoxCollider2D> ().enabled) {
			GetComponent<BoxCollider2D> ().enabled = true;
		}

		HandleInput ();
		MovePlayer ();
	}

	// Update is called once per frame
	void Update ()
	{
		GetInput ();
		this.timer += Time.deltaTime;
		if (timer > 10 && bonusSpeed < maxBonusSpeed) {
			bonusSpeed += 0.05f;
			timer = 0.0f;
		}
	}

	private void MovePlayer ()
	{
		if ((currentState & (FLAG_STATE_JUMP | FLAG_STATE_SLIDE)) > 0) {
			rigidbody.velocity = new Vector2 (speed, rigidbody.velocity.y);
		} else if (currentState == FLAG_STATE_RUN) {
			rigidbody.velocity = new Vector2 (speed * bonusSpeed, rigidbody.velocity.y);
		} else if ((currentState & (FLAG_STATE_THROW|FLAG_STATE_SLASH)) > 0) {
			rigidbody.velocity = new Vector2 (speed / 2, 0);
		}
	}

	private void GetInput ()
	{
		int swipe = TouchUtils.GetSwipe ();
		bool isRunning = (currentState & FLAG_STATE_RUN) > 0;
		if ((Input.GetKeyDown (KeyCode.X) || swipe == TouchUtils.SWIPE_UP) && !inputJump) {
			inputJump = true;
		}
		
		if ((TouchUtils.GetTapCount () == 1 || Input.GetKeyDown (KeyCode.C)) && !inputSlash) {
			inputSlash = true;
		}
		
		if ((Input.GetKeyDown (KeyCode.DownArrow) || swipe == TouchUtils.SWIPE_DOWN) && !inputSlide) {
			inputSlide = true;
		}
		
		if ((Input.GetKeyDown (KeyCode.RightArrow) || swipe == TouchUtils.SWIPE_RIGHT) && !inputThrow) {
			inputThrow = true;
		}

		var touchedObj = TouchUtils.GetTouchedObject ();
		if (touchedObj != null && touchedObj.tag == "Mummy" && currentState == FLAG_STATE_JUMP) {

		}
	}

	private void HandleInput ()
	{
		bool isRunning = (currentState & FLAG_STATE_RUN) > 0;
		if (inputJump && isRunning) {
			jumpCommand.execute ();
			inputJump = false;
			return;
		}
		if (inputSlash && isRunning) {
			slashCommand.execute ();
			inputSlash = false;
			return;
		}
		if (inputSlide && isRunning) {
			animator.SetTrigger ("shouldSlide");
			inputSlide = false;
			return;
		}
		if (inputThrow && isRunning) {
			throwCommand.execute ();
			inputThrow = false;
			return;
		} 
	}

	void OnCollisionEnter2D (Collision2D col)
	{
		bool hittedEnemy = DidHitEnemy (col);
		int hittedWall = DidHitWall (col);

		if ((hittedWall > 0 || hittedEnemy) && (currentState & FLAG_STATE_DIE) == 0) {
			if (currentState == FLAG_STATE_RUN) {
				rigidbody.AddForce (new Vector2 (-125f, 25.0f));
			} else if (currentState == FLAG_STATE_JUMP && hittedWall == 2) {
				rigidbody.AddForce (new Vector2 (125f, 250f));
				rigidbody.freezeRotation = false;
				rigidbody.gravityScale = 2;
				rigidbody.angularVelocity = -360;
				animator.SetTrigger ("shouldFallDie");
			} else if (currentState == FLAG_STATE_JUMP && hittedWall == 1) {
				rigidbody.AddForce (new Vector2 (-125f, 0.0f));
			}
			var utils = AudioUtils.GetInstance ();
			utils.StopSound (audioSource);
			utils.PlayOnce (audioSource, "hit6");
			dieCommand.execute ();
		}
	}

	void OnTriggerStay2D (Collider2D col)
	{
		if (col.gameObject.tag == "FlyingFlame"
			&& (currentState & (FLAG_STATE_SLIDE | FLAG_STATE_DIE)) == 0) {
			AudioUtils.GetInstance ().StopSound (audioSource);
			dieCommand.execute ();
		}
	}

	private int DidHitWall (Collision2D col)
	{
		int hittedWall = (col.gameObject.tag == "Wall") ? 1 : 0;
		if (hittedWall > 0 && col.contacts [0].otherCollider is CircleCollider2D) {
			Vector2 objSize = col.collider.bounds.size;
			Vector2 objPos = col.collider.bounds.center;
			CircleCollider2D selfCollider = (CircleCollider2D)col.contacts [0].otherCollider;
			float selfSize = selfCollider.radius * 2;
			Vector2 selfPos = selfCollider.bounds.center;
			if (selfPos.x >= objPos.x - objSize.x / 2
				|| selfPos.y - selfSize / 2 >= objPos.y + objSize.y / 2) {
				hittedWall = 0;
			} else {
				hittedWall = 2;
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
}
