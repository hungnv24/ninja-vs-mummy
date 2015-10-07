using UnityEngine;
using System.Collections;

public class SceneSettings
{
	static object syncRoot = new object();
	static SceneSettings instance;

	private SceneSettings() {}

	public static SceneSettings Instance
	{
		get
		{
			if (instance == null) {
				lock (syncRoot) {
					if (instance == null) {
						instance = new SceneSettings();
					}
				}
			}
			return instance;
		}
	}
}
