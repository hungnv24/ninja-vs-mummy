using UnityEngine;
using System.Collections;

public class FadeSlashCommand : Command
{
	Transform target;
	Vector2 originPos;

	public FadeSlashCommand(GameObject gameObject) :
		base(gameObject)
	{

	}

	public void SetTarget(Transform target)
	{
		this.target = target;
	}

	public override void execute ()
	{
		originPos = gameObject.transform.position;
		animator.SetTrigger ("fadeOut");
		gameObject.GetComponent<MonoBehaviour> ().StartCoroutine(AttackWizard());
	}

	IEnumerator AttackWizard()
	{

		yield return new WaitForSeconds (0.5f);
		Flip ();
		var pos = target.position;
		pos.x += 2.5f;
		gameObject.transform.position = pos;
		animator.SetTrigger ("fadeSlash");
		yield return new WaitForSeconds (0.3f);
		BackToPosition ();
	}

	void BackToPosition()
	{
		animator.SetTrigger ("shouldRun");
		Flip ();
		gameObject.transform.position = originPos;
	}

	void Flip()
	{
		var pos = gameObject.transform.localScale;
		pos.x *= -1;
		gameObject.transform.localScale = pos;
	}
}
