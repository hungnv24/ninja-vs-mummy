using UnityEngine;
using System.Collections;

public class SlashCommand : Command 
{

	public SlashCommand(GameObject gameObject) : base(gameObject)
	{
	}

	public override void execute ()
	{
		animator.SetTrigger ("shouldSlash");
		var utils = AudioUtils.GetInstance ();
		utils.StopSound(audioSource);
		utils.PlayOnce(audioSource, "slash");
	}
}
