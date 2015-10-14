using UnityEngine;
using System.Collections;

public class SceneSettings
{
	public bool LockInput { get; set;}
	public int HardLevel { get; set;}
	public bool IsTutorial { get; set;}

	private SceneSettings ()
	{
		LockInput = false;
		HardLevel = 1;
		IsTutorial = false;
	}
	static class Holder
	{
		public static SceneSettings Instance = new SceneSettings();
	}
	public static SceneSettings Instance
	{
		get
		{
			return Holder.Instance;
		}
	}

}
