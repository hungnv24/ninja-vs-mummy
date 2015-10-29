using UnityEngine;
using System.Collections;
using ChartboostSDK;

public class AdManager
{
	private float lastTime = 0f;
	private float coolDown = 120f;

	private static class Holder
	{
		public static AdManager instance = new AdManager();
	}

	public static AdManager Instance
	{
		get { return Holder.instance; }
	}

	public void ShowAd(CBLocation location)
	{
		if (Time.time - lastTime < coolDown)
			return;
		lastTime = Time.time;
		Chartboost.showInterstitial (location);
	}
}
