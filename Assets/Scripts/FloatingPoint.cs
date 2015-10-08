using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FloatingPoint : MonoBehaviour
{
	Vector3 destination;
	Vector3 origin;
	float movingTime = 1f;
	Vector3 velocity = Vector3.zero;
	ObjectPool pool;
	Rect rect;
	Canvas canvas;

	void OnDisable()
	{
		CancelInvoke ();
		if (canvas != null && !canvas.Equals (null)) {
			transform.position = new Vector2 (rect.width / 2 * canvas.scaleFactor, rect.height / 2 * canvas.scaleFactor);
		}
	}

	// Use this for initialization
	void Start ()
	{
		pool = ObjectPool.Instance;
		canvas = GetComponentInParent<Canvas> ();
		rect = canvas.gameObject.GetComponent<RectTransform> ().rect;
		destination.y = rect.height * canvas.scaleFactor * 1.5f;
		destination.x = 0;
		transform.position = new Vector2 (rect.width / 2 * canvas.scaleFactor, rect.height / 2 * canvas.scaleFactor);
	}

	void OnEnable()
	{
		Invoke ("Hide", 3);
	}
	
	// Update is called once per frame
	void Update ()
	{
		transform.position = Vector3.SmoothDamp(transform.position, destination, ref velocity, movingTime);
	}

	void Hide()
	{
		gameObject.SetActive(false);
		pool.StoreFree(gameObject);
	}
}
