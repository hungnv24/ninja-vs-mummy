using UnityEngine;
using System.Collections;

public abstract class Command : Object
{
	protected GameObject gameObject;
	protected Animator animator;
	protected AudioSource audioSource;
	protected Rigidbody2D rigidbody;

	public Command(GameObject gameObject)
	{
		this.gameObject = gameObject;
		animator = gameObject.GetComponent<Animator> ();
		audioSource = gameObject.GetComponent<AudioSource> ();
		rigidbody = gameObject.GetComponent<Rigidbody2D> ();
	}

	public abstract void execute ();
}
