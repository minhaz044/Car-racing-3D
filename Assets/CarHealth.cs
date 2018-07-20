using UnityEngine;
using System.Collections;

public class CarHealth : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	

	void OnCollisionEnter(Collision collision) {
		if(collision.gameObject.CompareTag("Enemy") && collision.relativeVelocity.magnitude >2 )
		{

			Time.timeScale= 0f;
			Destroy (collision.gameObject);

		}

			

			
		}
	
}
