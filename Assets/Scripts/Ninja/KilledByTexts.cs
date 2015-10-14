using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class KilledByTexts
{
	public static Dictionary<NinjaController.KilledBy, string> texts = new Dictionary<NinjaController.KilledBy, string>()
	{
		{ NinjaController.KilledBy.Mummy, "That mummy hit me first. You saw it, right?" },
		{ NinjaController.KilledBy.Slip, "I should jump higher. No! It's not my fault. It's yours!" },
		{ NinjaController.KilledBy.Wall, "What a horrible designer! Why did you put a big fat stone on my way?" },
		{ NinjaController.KilledBy.Wizard, "It's coming like a fireball! Go straight to my butt oh..oh ... Why did I say that?" },
		{ NinjaController.KilledBy.Fire, "I'm dry, really easy to get burnt. So next time try to avoid the fire." },
		{ NinjaController.KilledBy.FlyingFlame, "So, it's a ghost or just a blue flame that is flying around?" }
	};
}
