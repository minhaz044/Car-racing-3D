using UnityEngine;
using System.Collections;

public class RodeManager : MonoBehaviour {
	GameObject car;
	Vector3 offSet;
	// Use this for initialization
	void Start () {
		car = GameObject.FindWithTag ("Player");
		offSet = transform.position- car.transform.position;
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.position =car.transform.position+ offSet;
	
	}
	void OnTriggerEnter(Collider other) {
		if (other.CompareTag ("Road")) {
			float widthOfRoad = other.bounds.size.z;
			Vector3 pos = other.transform.position;
			pos.z += widthOfRoad * 3;
			other.transform.position = pos;
			
		}


	}
}
