﻿using UnityEngine;
using System.Collections;
using System.Threading;

public class MummyController : MonoBehaviour
{
    public float walkingSpeed = -1.0f;
    private Animator animator;
    private Rigidbody2D mRigidbody;
    private AudioSource audioSource;
    private int killedBy = 0x00;
    private const int KILLED_BY_SLASH = 1;
    private const int KILLED_BY_SLIDE = 2;
    private const int KILLED_BY_DART = 4;
    private const int KILLED_BY_JUMPED_ON = 8;
    public int currentState = 0;
    public const int FLAG_STATE_WALK = 1;
    public const int FLAG_STATE_ATK = 2;
    public const int FLAG_STATE_DIE = 4;
    public AudioClip hit;
    public AudioClip hit2;
    GameObject player;
    private bool grounded = false;
    private float groundCheckRadius = 0.2f;
    public Transform groundCheck;
    public LayerMask groundLayer;
    public AudioClip groan;

    void Awake()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    // Use this for initialization
    void Start()
    {
        animator = GetComponent<Animator>();
        mRigidbody = GetComponent<Rigidbody2D>();
        audioSource = GetComponent<AudioSource>();
    }

    void FixedUpdate()
    {
        grounded = Physics2D.OverlapCircle(groundCheck.position, groundCheckRadius, groundLayer);
        if (isInState("Walking") && grounded && mRigidbody != null)
        {
            mRigidbody.velocity = new Vector2(walkingSpeed, mRigidbody.velocity.y);
        }
    }

    void Update()
    {

    }

    public bool isInState(string state)
    {
        AnimatorStateInfo currentInfo = animator.GetCurrentAnimatorStateInfo(0);
        return currentInfo.IsName(state);
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.tag == "Player")
        {
            NinjaController controller = col.gameObject.GetComponent<NinjaController>();
            if (col.collider is CircleCollider2D
                && col.contacts[0].otherCollider is CircleCollider2D
                && !isInState("Die"))
            {
                killedBy = KILLED_BY_JUMPED_ON;
                Die();
            }
            if ((controller.CurrentState & NinjaController.FLAG_STATE_SLIDE) > 0)
            {
                killedBy = KILLED_BY_SLIDE;
                Die();
            }
        }
    }

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "AttackCheck")
        {
            animator.SetTrigger("attack");
        }
        if (col.gameObject.tag == "Dart" && !isInState("Die"))
        {
            killedBy = KILLED_BY_DART;
            Die();
            col.gameObject.SetActive(false);
        }
    }

    void OnTriggerStay2D(Collider2D col)
    {
        if (col.gameObject.tag == "AttackCheck"
            && killedBy == 0
            && !player.Equals(null)
            && (player.GetComponentInParent<NinjaController>().CurrentState
            & (NinjaController.FLAG_STATE_SLASH | NinjaController.FLAG_STATE_FADE_SLASH)) > 0)
        {
            killedBy = KILLED_BY_SLASH;
            Die();
        }
    }

    public void Die()
    {
        if (killedBy == KILLED_BY_SLIDE)
        {
            animator.SetTrigger("fall_die");
            audioSource.PlayOneShot(hit2);
        }
        else if (killedBy == KILLED_BY_SLASH)
        {
            animator.SetTrigger("headOff");
            audioSource.clip = hit;
            audioSource.loop = false;
            audioSource.PlayDelayed(0.1f);
        }
        else
        {
            animator.SetTrigger("die");
            audioSource.PlayOneShot(hit2);
        }
        var point = 0;
        switch (killedBy)
        {
            case KILLED_BY_JUMPED_ON:
                point = 10;
                break;
            case KILLED_BY_SLASH:
                point = 25;
                break;
            default:
                point = 5;
                break;
        }
        PointController.GetInstance().ShowPoint(point);
        foreach (Collider2D col in GetComponents<Collider2D>())
        {
            col.enabled = false;
        }
        mRigidbody.isKinematic = true;
    }

    void OnEnable()
    {
        if (killedBy > 0)
        {
            animator.SetTrigger("walk");
            killedBy = 0;
            foreach (Collider2D col in GetComponents<Collider2D>())
            {
                col.enabled = true;
            }
            mRigidbody.isKinematic = false;

            audioSource.clip = groan;
            audioSource.loop = true;
            audioSource.Play();
        }
    }
}
