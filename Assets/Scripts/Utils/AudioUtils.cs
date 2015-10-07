using UnityEngine;
using System.Collections;

public class AudioUtils
{
	Hashtable audioCache = new Hashtable();

	static class Holder
	{
		public static AudioUtils Instance = new AudioUtils();
	}

	private AudioUtils ()
	{
	}

	public static AudioUtils GetInstance ()
	{
		return Holder.Instance;
	}

	public AudioClip LoadClip (string name, bool cache = true)
	{
		if (audioCache.ContainsKey (name)) {
			return audioCache[name] as AudioClip;
		}
		AudioClip clip;
		clip = Resources.Load ("Sounds/" + name, typeof(AudioClip))
			as AudioClip;
		if (cache) {
			audioCache.Add(name, clip);
		}
		return clip;
	}

	public void StopSound (AudioSource audioSource)
	{
		audioSource.Stop ();
		audioSource.pitch = 1;
		audioSource.loop = false;
		audioSource.volume = 1;
	}

	public void PlayOnce (AudioSource audioSource, string sound)
	{
		audioSource.PlayOneShot (LoadClip (sound));
	}

	public void PlayDelayed (AudioSource audioSource, string sound, float delay)
	{
		audioSource.clip = LoadClip (sound);
		audioSource.PlayDelayed (0.25f);
	}

	public void PlayLoop (AudioSource audioSource, string sound)
	{
		audioSource.clip = LoadClip (sound);
		audioSource.loop = true;
		audioSource.Play ();
	}
}
