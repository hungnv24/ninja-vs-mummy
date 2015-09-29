using UnityEngine;
using System.Collections;

public class AudioUtils
{
	Hashtable audioCache = new Hashtable ();
	static AudioUtils instance = null;
	static object syncRoot = new Object ();

	private AudioUtils ()
	{
	}

	public static AudioUtils GetInstance ()
	{
		if (instance == null) {
			lock (syncRoot) {
				if (instance == null) {
					instance = new AudioUtils ();
				}
			}
		}
		return instance;
	}

	public AudioClip LoadClip (string name)
	{
		AudioClip clip;
		clip = Resources.Load ("Sounds/" + name, typeof(AudioClip))
			as AudioClip;
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
