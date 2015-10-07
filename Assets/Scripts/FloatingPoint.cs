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
	ObjectPool pool;
	Rect rect;
	Canvas canvas;

	void OnDisable()
	{
		transform.position = new Vector2 (rect.width / 2 * canvas.scaleFactor, rect.height / 2 * canvas.scaleFactor);
		countDown = 0f;
	}

	// Use this for initialization
	void Start ()
	{
		canvas = GetComponentInParent<Canvas> ();
		rect = canvas.gameObject.GetComponent<RectTransform> ().rect;
		destination.y = rect.height * canvas.scaleFactor * 1.5f;
		destination.x = 0;
		pool = ObjectPool.Instance;
	}
	
	// Update is called once per frame
	void Update ()
	{
		transform.position = Vector3.SmoothDamp(transform.position, destination, ref velocity, movingTime);
		countDown += Time.deltaTime;
		if (countDown > 3) {
			gameObject.SetActive(false);
			pool.StoreFree(gameObject);
		}
			
	}
}
