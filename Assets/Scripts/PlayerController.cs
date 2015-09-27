using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float moveSpeed = 10f;
	public float turnSpeed = 50f;

	void Awake() {
	}

	void Start () {
		
	}
	
	void Update () {
		if(Input.GetKey(KeyCode.Delete)) {
			Destroy(gameObject);
		}
		if(Input.GetKey(KeyCode.UpArrow))
			transform.Translate(Vector3.forward * moveSpeed * Time.deltaTime);
		
		if(Input.GetKey(KeyCode.DownArrow))
			transform.Translate(-Vector3.forward * moveSpeed * Time.deltaTime);
		
		if(Input.GetKey(KeyCode.LeftArrow))
			transform.Rotate(Vector3.up, -turnSpeed * Time.deltaTime);
		
		if(Input.GetKey(KeyCode.RightArrow))
			transform.Rotate(Vector3.up, turnSpeed * Time.deltaTime);
	}

	void FixedUpdate() {
		if (Input.GetKey (KeyCode.Space)) {
			Jump();
		}
	}

	void Jump() {

	}

	void OnCollisionEnter(Collision col) {
		col.collider.enabled = false;
		GetComponent<Renderer> ().enabled = false;
		//Deativate other object
		col.contacts [0].otherCollider.gameObject.SetActive (false);
		Debug.Log ("Active " + col.contacts [0].otherCollider.gameObject.activeSelf);
		Debug.Log ("Child's self active"
		           + col.contacts [0].otherCollider.gameObject.transform.FindChild("Child").gameObject.activeSelf);
		Debug.Log ("Child's self active in hierarchy"
		           + col.contacts [0].otherCollider.gameObject.transform.FindChild("Child").gameObject.activeInHierarchy);
	}
}
