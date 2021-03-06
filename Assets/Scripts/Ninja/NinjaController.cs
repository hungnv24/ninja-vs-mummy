﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using ChartboostSDK;

public class NinjaController : MonoBehaviour
{
	public enum KilledBy : int
	{
		None = 0,
		Mummy = 1,
		Wizard = 2,
		Wall = 4,
		FlyingFlame = 8,
		Fire = 16,
		Slip = 32
	};

	Animator animator;
	Rigidbody2D rigidbody;
	AudioSource audioSource;
	private float jumpForce;
	private Hashtable animationFlags = new Hashtable ();
	private bool grounded = false;
	private float groundCheckRadius = 0.2f;
	int inputJump = 1;
	int inputThrow = 2;
	int inputSlide = 4;
	int inputSlash = 8;
	int inputFadeSlash = 16;
	public Queue InputQueue = new Queue ();
	const int MAX_INPUT_QUEUE = 2;

	Command jumpCommand;
	Command slashCommand;
	Command throwCommand;
	Command dieCommand;
	FadeSlashCommand fadeSlashCommand;

	bool isOnFire = false;
	float timer = 0.0f;
	float bonusSpeed = 1.0f;
	float maxBonusSpeed = 2.0f;
	KilledBy killedBy = KilledBy.None;

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
	public GameObject deadCanvas;
	
	public int CurrentState { get; set;}

	void Awake ()
	{
		animationFlags.Add (Animator.StringToHash ("Running"), FLAG_STATE_RUN);
		animationFlags.Add (Animator.StringToHash ("Jump"), FLAG_STATE_JUMP);
		animationFlags.Add (Animator.StringToHash ("Slice"), FLAG_STATE_SLASH);
		animationFlags.Add (Animator.StringToHash ("Slide"), FLAG_STATE_SLIDE);
		animationFlags.Add (Animator.StringToHash ("Throw"), FLAG_STATE_THROW);
		animationFlags.Add (Animator.StringToHash ("Die"), FLAG_STATE_DIE);
		animationFlags.Add (Animator.StringToHash ("Fall_die"), FLAG_STATE_FALL_DIE);
		animationFlags.Add (Animator.StringToHash ("Fade Out"), FLAG_STATE_FADE);
		animationFlags.Add (Animator.StringToHash ("Fade & Slash"), FLAG_STATE_FADE_SLASH);

		jumpCommand = new JumpCommand (gameObject, jumpHeight);
		slashCommand = new SlashCommand (gameObject);
		throwCommand = new ThrowingCommand (gameObject);
		dieCommand = new DieCommand (gameObject);
		fadeSlashCommand = new FadeSlashCommand (gameObject);
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
		CurrentState = GetCurrentState ();
		grounded = Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, groundLayer);
		isOnFire = Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, fireLayer);

		if (isOnFire &&
		    (CurrentState & (FLAG_STATE_DIE|FLAG_STATE_FADE|FLAG_STATE_FADE_SLASH)) == 0) {
			AudioUtils.GetInstance ().StopSound (audioSource);
			killedBy = KilledBy.Fire;
			InputQueue.Clear();
			dieCommand.execute ();
		}

		if (CurrentState == FLAG_STATE_RUN) {
			animator.speed = bonusSpeed;
		} else {
			animator.speed = 1;
		}

		if (!grounded &&
			(CurrentState & (FLAG_STATE_JUMP|FLAG_STATE_DIE|FLAG_STATE_FADE|FLAG_STATE_FADE_SLASH)) == 0) {
			animator.SetTrigger ("shouldJump");
			AudioUtils.GetInstance ().StopSound (audioSource);
		} else if (grounded && CurrentState == FLAG_STATE_JUMP) {
			animator.SetTrigger ("shouldRun");
		} else if (grounded && CurrentState == FLAG_STATE_RUN) {
			if (!audioSource.isPlaying || audioSource.clip != AudioUtils.GetInstance ().LoadClip ("footstep")) {
				audioSource.pitch = 1.5f * bonusSpeed;
				audioSource.volume = 0.11f * Time.timeScale;
				AudioUtils.GetInstance ().PlayLoop (audioSource, "footstep");
			}
		} else if (grounded &&
			(CurrentState & (FLAG_STATE_RUN | FLAG_STATE_DIE | FLAG_STATE_SLASH | FLAG_STATE_FADE_SLASH)) == 0) {
			AudioUtils.GetInstance ().StopSound (audioSource);
		}

		if (CurrentState == FLAG_STATE_SLIDE && GetComponent<BoxCollider2D> ().enabled) {
			GetComponent<BoxCollider2D> ().enabled = false;
		} else if ((CurrentState & FLAG_STATE_SLIDE) == 0
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
			bonusSpeed += 0.05f * SceneSettings.Instance.HardLevel;
			timer = 0.0f;
		}
	}

	private void MovePlayer ()
	{
		if ((CurrentState & (FLAG_STATE_JUMP | FLAG_STATE_SLIDE | FLAG_STATE_THROW)) > 0) {
			rigidbody.velocity = new Vector2 (speed, rigidbody.velocity.y);
		} else if ((CurrentState & (FLAG_STATE_RUN | FLAG_STATE_SLASH)) > 0) {
			rigidbody.velocity = new Vector2 (speed * bonusSpeed, rigidbody.velocity.y);
		}
	}

	private void GetInput ()
	{
		if (SceneSettings.Instance.LockInput)
			return;
		int swipe = TouchUtils.GetSwipe ();
		var touchedObj = TouchUtils.GetTouchedObject ();

		if (touchedObj != null &&
		    touchedObj.tag == "Wizard" &&
		    (CurrentState & (FLAG_STATE_FADE|FLAG_STATE_FADE_SLASH|FLAG_STATE_DIE)) == 0) {
			if (!touchedObj.GetComponent<WizardController>().IsDead) {
				fadeSlashCommand.SetTarget(touchedObj.transform);
				InputQueue.Enqueue(inputFadeSlash);
				return;
			}

		}

		if ((Input.GetKeyDown (KeyCode.X) || swipe == TouchUtils.SWIPE_UP) && InputQueue.Count <= MAX_INPUT_QUEUE) {
			InputQueue.Enqueue(inputJump);
		}
		
		if ((TouchUtils.GetTapCount () == 1 || Input.GetKeyDown (KeyCode.C))
		    && InputQueue.Count <= MAX_INPUT_QUEUE
		    && (CurrentState & (FLAG_STATE_FADE|FLAG_STATE_FADE_SLASH)) == 0) {
			InputQueue.Enqueue(inputSlash);
		}
		
		if ((Input.GetKeyDown (KeyCode.DownArrow) || swipe == TouchUtils.SWIPE_DOWN) && InputQueue.Count <= MAX_INPUT_QUEUE) {
			InputQueue.Enqueue(inputSlide);
		}
		
		if ((Input.GetKeyDown (KeyCode.RightArrow) || swipe == TouchUtils.SWIPE_RIGHT) && InputQueue.Count <= MAX_INPUT_QUEUE) {
			InputQueue.Enqueue(inputThrow);
		}
	}

	private void HandleInput ()
	{
		bool isRunning = (CurrentState & FLAG_STATE_RUN) > 0;
		int input = 0;
		if (InputQueue.Count > 0) {
			input = (int) InputQueue.Peek();
		}
		if (input == inputFadeSlash && (CurrentState & (FLAG_STATE_RUN|FLAG_STATE_JUMP)) > 0) {
			fadeSlashCommand.execute();
			InputQueue.Clear();
		}
		if (input == inputJump && isRunning) {
			jumpCommand.execute ();
			InputQueue.Dequeue();
		}
		if (input == inputSlash && isRunning) {
			slashCommand.execute ();
			InputQueue.Dequeue();
		}
		if (input == inputSlide && isRunning) {
			animator.SetTrigger ("shouldSlide");
			InputQueue.Dequeue();
		}
		if (input == inputThrow && isRunning) {
			throwCommand.execute ();
			InputQueue.Dequeue();
		} 
	}

	void OnCollisionStay2D (Collision2D col)
	{
		bool hittedEnemy = DidHitEnemy (col);
		int hittedWall = DidHitWall (col);

		int avoidState = FLAG_STATE_DIE | FLAG_STATE_FALL_DIE | FLAG_STATE_FADE | FLAG_STATE_FADE_SLASH;
		if ((hittedWall > 0 || hittedEnemy) &&
		    (CurrentState & (avoidState)) == 0) {
			if (CurrentState == FLAG_STATE_RUN && hittedWall > 0) {
				killedBy = KilledBy.Wall;
				rigidbody.AddForce (new Vector2 (-125f, 25.0f));
			} else if (CurrentState == FLAG_STATE_JUMP && hittedWall == 2) {
				killedBy = KilledBy.Slip;
				rigidbody.AddForce (new Vector2 (125f, 250f));
				rigidbody.freezeRotation = false;
				rigidbody.gravityScale = 2;
				rigidbody.angularVelocity = -360;
				animator.SetTrigger ("shouldFallDie");
			} else if (CurrentState == FLAG_STATE_JUMP && hittedWall == 1) {
				killedBy = KilledBy.Wall;
				rigidbody.AddForce (new Vector2 (-125f, 0.0f));
			} else {
				killedBy = KilledBy.Mummy;
				rigidbody.AddForce (new Vector2 (-125f, 25.0f));
			}
			var utils = AudioUtils.GetInstance ();
			utils.StopSound (audioSource);
			utils.PlayOnce (audioSource, "hit6");
			dieCommand.execute ();
			InputQueue.Clear();
		}
	}

	void OnTriggerStay2D (Collider2D col)
	{
		if (col.gameObject.tag == "FlyingFlame"
		    && (CurrentState & (FLAG_STATE_SLIDE|FLAG_STATE_DIE|FLAG_STATE_FADE|FLAG_STATE_FADE_SLASH)) == 0) {
			AudioUtils.GetInstance ().StopSound (audioSource);
			killedBy = KilledBy.FlyingFlame;
			dieCommand.execute ();
			InputQueue.Clear();
		}
		if (col.gameObject.tag == "FireBall"
			&& (CurrentState & (FLAG_STATE_DIE|FLAG_STATE_FADE|FLAG_STATE_FADE_SLASH)) == 0) {
			var fire = ObjectPool.Instance.GetPrefabsByName("Fire") as GameObject;
			fire.SetActive(true);
			var pos = Vector2.zero;
			pos.y = -0.5f;
			pos.x = -0.5f;
			fire.transform.position = pos;
			fire.transform.SetParent(transform, false);
			AudioUtils.GetInstance().StopSound(audioSource);
			killedBy = KilledBy.Wizard;
			dieCommand.execute();
			InputQueue.Clear();
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
			&& (CurrentState & (FLAG_STATE_RUN | FLAG_STATE_JUMP)) > 0
			&& (col.contacts [0].otherCollider is BoxCollider2D);
	}

	public int GetCurrentState ()
	{
		try {
			if (CurrentState == FLAG_STATE_DIE)
				return FLAG_STATE_DIE;
			AnimatorStateInfo currentInfo = animator.GetCurrentAnimatorStateInfo (0);
			if (currentInfo.Equals (null)) {
				return 0;
			}
			return (int)animationFlags [currentInfo.shortNameHash];
		} catch (System.Exception e) {
			Debug.Log (e.Message);
		}
		return 0;
	}

	public void ShowDeadMenu()
	{
		deadCanvas.SetActive(true);
		AdManager.Instance.ShowAd (CBLocation.GameScreen);
		if (!SceneSettings.Instance.IsTutorial) {
			PointController.GetInstance ().SubmitScore ();
			long point = PointController.GetInstance ().GetPoint ();
			var scoreBoard = deadCanvas.transform.Find ("ScoreBoard").gameObject;
			var scoreText = scoreBoard.transform.Find ("ScoreText").gameObject;
			scoreText.GetComponent<Text> ().text = "" + point;
			var chatText = scoreBoard.transform.Find ("ChatText").gameObject;
			chatText.GetComponent<Text>().text = KilledByTexts.texts[killedBy];
			var bestText = scoreBoard.transform.Find ("BestText").gameObject;
			bestText.GetComponent<Text> ().text = "" + PointController.GetInstance ().GetBest ();
		}
	}
}
