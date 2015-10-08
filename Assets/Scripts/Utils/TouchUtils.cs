using UnityEngine;
using System.Collections;

public class TouchUtils : Object
{
	public const int SWIPE_NONE = -1;
	public const int SWIPE_UP = 0;
	public const int SWIPE_RIGHT = 1;
	public const int SWIPE_DOWN = 2;
	public const int SWIPE_LEFT = 3;
	static Touch touchStart;
	static bool isSwipe = false;

	public static int GetSwipe()
	{
		int direction = SWIPE_NONE;
		if (Input.touchCount > 0 &&
			Input.GetTouch (0).phase == TouchPhase.Began) {
			touchStart = Input.GetTouch(0);
			isSwipe = true;
		}
		if (isSwipe &&
			Input.touchCount > 0 &&
		    Input.GetTouch (0).phase == TouchPhase.Moved) {
			Vector2 touchDelta = Input.GetTouch (0).position - touchStart.position;
			if (touchDelta.x < -20 && Mathf.Abs (touchDelta.x) > Mathf.Abs (touchDelta.y)) {
				direction =  SWIPE_LEFT;
			}

			if (touchDelta.x > 20 && Mathf.Abs (touchDelta.x) > Mathf.Abs (touchDelta.y)) {
				direction = SWIPE_RIGHT;
			}
			
			if (touchDelta.y > 20 && Mathf.Abs (touchDelta.y) > Mathf.Abs (touchDelta.x)) {
				direction = SWIPE_UP;
			}
			
			if (touchDelta.y < -20 && Mathf.Abs (touchDelta.y) > Mathf.Abs (touchDelta.x)) {
				direction = SWIPE_DOWN;
			}
		}
		if (direction != SWIPE_NONE)
			isSwipe = false;
		return direction;
	}

	public static int GetTapCount ()
	{
		if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Ended) {
			Vector2 touchDelta = Input.GetTouch (0).deltaPosition;
			if (Mathf.Abs (touchDelta.x) < 5 && Mathf.Abs (touchDelta.y) < 5) {
				return Input.GetTouch (0).tapCount;
			}
		}
		return 0;
	}

	public static GameObject GetTouchedObject()
	{
		if (GetTapCount () <= 0 && !Input.GetMouseButtonUp(0))
			return null;
		var position = Vector2.zero;
		if (Input.touchCount > 0) {
			position = Input.GetTouch (0).position;
		} else {
			position = Input.mousePosition;
		}
		position = Camera.main.ScreenToWorldPoint (position);
		var radius = 0.75f;
		Collider2D collider = Physics2D.OverlapCircle (position, radius, (1 << LayerMask.NameToLayer("Enemy")));
		if (collider) {
			return collider.gameObject;
		}
		return null;
	}
}
