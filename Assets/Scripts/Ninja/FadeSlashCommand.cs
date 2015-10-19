using UnityEngine;
using System.Collections;

public class FadeSlashCommand : Command
{
	Transform target;

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
		if (gameObject.GetComponent<NinjaController> ().CurrentState != NinjaController.FLAG_STATE_DIE)
			gameObject.GetComponent<NinjaController> ().StartCoroutine(AttackWizard());
	}

	IEnumerator AttackWizard()
	{
		animator.SetTrigger ("fadeOut");
		gameObject.GetComponent<NinjaController> ().CurrentState = NinjaController.FLAG_STATE_FADE;
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
		var utils = AudioUtils.GetInstance ();
		utils.StopSound(audioSource);
		utils.PlayOnce(audioSource, "slash");
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
