using UnityEngine;
using System.Collections;

public class EnemyBehaviour : MonoBehaviour {


	float maxDistance=10f;
	public float speed = 10.0f;

	void Update(){
		
		if(!Physics.Raycast(transform.position,-transform.up,maxDistance))
		{
			Debug.Log ("Car Destroyer");
			Destroy(gameObject);
		}

	}
	   


	void LateUpdate () {

		transform.Translate(Vector3.right* speed * Time.fixedDeltaTime, Space.Self);

		
	
	}

}





		

