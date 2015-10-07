using UnityEngine;
using System.Collections;

public class JumpCommand : Command 
{
	float jumpForce;
	public JumpCommand (GameObject gameObject, float jumpHeight)
		: base(gameObject)
	{
		jumpForce = CalculateJumpForce (jumpHeight);
	}

	float CalculateJumpForce(float jumpHeight)
	{
		var gravity = Mathf.Abs (Physics2D.gravity.y) * rigidbody.gravityScale;
		return gravity * jumpHeight * rigidbody.mass;
	}

	public override void execute()
	{
		var utils = AudioUtils.GetInstance ();
		utils.StopSound (audioSource);
		utils.PlayOnce (audioSource, "jump");
		animator.SetTrigger ("shouldJump");
		rigidbody.AddForce (new Vector2 (0, jumpForce));
	}
}
