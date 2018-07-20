using UnityEngine;
using System.Collections;

public class CameraFollowing : MonoBehaviour {

	GameObject targetCar;
	Vector3 offSet;
	void Start () {
		targetCar = null;
		targetCar = GameObject.FindWithTag ("Player");
		offSet = transform.position-targetCar.transform.position;

	}
	void LateUpdate ()
	{
		
		transform.position = targetCar.transform.position+offSet;
	}
}


