using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LevelText : MonoBehaviour
{
	Text text;
	// Use this for initialization
	void Start ()
	{
		text = GetComponent<Text> ();
		if (SceneSettings.Instance.HardLevel == 1) {
			text.text = "Kid";
		} else {
			text.text = "Ninja";
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}
