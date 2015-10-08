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
		pos.x += 2.0f;
		gameObject.transform.position = pos;
		yield return new WaitForFixedUpdate ();
		animator.SetTrigger ("fadeSlash");
		while (gameObject.GetComponent<NinjaController>().CurrentState != NinjaController.FLAG_STATE_FADE_SLASH) {
			Debug.Log("Still not get there");
			yield return new WaitForFixedUpdate ();
		}
		yield return new WaitForSeconds (0.25f);
		while (!target.gameObject.GetComponent<WizardController>().IsDead) {
			Debug.Log("Still not dead");
			yield return new WaitForFixedUpdate ();
		}
		animator.SetTrigger ("shouldRun");
		Flip ();
	}

	void Flip()
	{
		var pos = gameObject.transform.localScale;
		pos.x *= -1;
		gameObject.transform.localScale = pos;
	}
}
