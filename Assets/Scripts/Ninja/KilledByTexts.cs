using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class KilledByTexts
{
	public static Dictionary<NinjaController.KilledBy, string> texts = new Dictionary<NinjaController.KilledBy, string>()
	{
		{ NinjaController.KilledBy.Mummy, "That mummy hit me first. You saw it, right?" },
		{ NinjaController.KilledBy.Slip, "I should jump higher. No! It's not my fault. It's yours, player" },
		{ NinjaController.KilledBy.Wall, "What a horrible designer! Why did you put a big fat stone on my way?" },
		{ NinjaController.KilledBy.Wizard, "Oh, wizard! He came with a fireball go straight to my butt." }
	};
}
