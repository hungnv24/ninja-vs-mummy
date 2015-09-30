using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FloatingPoint : MonoBehaviour
{
	Vector3 destination;
	Vector3 origin;
	float movingTime = 1f;
	Vector3 velocity = Vector3.zero;
	float countDown = 0.0f;
	// Use this for initialization
	void Start ()
	{
		var canvas = GetComponentInParent<Canvas> ();
		var rect = canvas.gameObject.GetComponent<RectTransform> ().rect;
		destination.y = rect.height * canvas.scaleFactor * 1.5f;
		destination.x = rect.width / 2 * canvas.scaleFactor;
		destination = Camera.main.ScreenToWorldPoint (destination);
	}
	
	// Update is called once per frame
	void Update ()
	{
		var destOnScreen = Camera.main.WorldToScreenPoint (destination);
		transform.position = Vector3.SmoothDamp(transform.position, destOnScreen, ref velocity, movingTime);
		countDown += Time.deltaTime;
		if (countDown > 3)
			Destroy (gameObject);
	}
}
