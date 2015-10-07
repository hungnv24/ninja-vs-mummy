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
		animator.SetTrigger ("fadeOut");
	}
}
