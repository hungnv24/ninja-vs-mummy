using UnityEngine;
using System.Collections;

public class HomeUIController : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void OnKidModeClicked()
	{
		SceneSettings.Instance.HardLevel = 1;
		Application.LoadLevel ("Main");
	}

	public void OnNinjaModeClicked()
	{
		SceneSettings.Instance.HardLevel = 2;
		Application.LoadLevel ("Main");
	}

	public void OnTutorialClicked()
	{
		SceneSettings.Instance.IsTutorial = true; 
		Application.LoadLevel ("Tutorial");
	}
}
