using UnityEngine;
using System.Collections;

public class AndroidControler : MonoBehaviour {

	// Use this for initialization
	Vector3 position;
	float maxPos=3.8f;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		position.x = Mathf.Clamp (transform.position.x+Input.acceleration.x, -maxPos, maxPos);
		position.y = transform.position.y;
		position.z = transform.position.z;
		transform.position = position;
	}
}
