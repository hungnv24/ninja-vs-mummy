using UnityEngine;
using System.Collections;

public class ThrowingCommand : Command
{
//	GameObject dart;
	ObjectPool pool;
	public ThrowingCommand(GameObject gameObject)
		: base(gameObject)
	{
		pool = ObjectPool.Instance;
	}

	public override void execute ()
	{
		animator.SetTrigger ("shouldThrow");
		Vector2 position = gameObject.transform.position;
		position.x += 0.5f;
		position.y += gameObject.GetComponent<Renderer> ().bounds.size.y / 2;
		var dart = (GameObject)pool.GetPrefabsByName("Dart");
		dart.SetActive (true);
		dart.transform.position = position;
		dart.GetComponent<Rigidbody2D> ().velocity = new Vector2 (15, 0);
		var utils = AudioUtils.GetInstance ();
		utils.StopSound(audioSource);
		utils.PlayOnce(audioSource, "throw");
	}	
}
