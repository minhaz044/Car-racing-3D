using UnityEngine;
using System.Collections;

public class EnemyGenarator : MonoBehaviour {

	// Use this for initialization
	public GameObject[] Enemy;
	Transform car;
	public float maxPos;
	public float delayTime=3.5f;
	float timer ;
	int carIndex ;
	Vector3 offSet;

	void Start () {
		car = GameObject.FindWithTag ("Player").transform;
		timer = delayTime;
		offSet=car.transform.position-transform.position;

	
	}



	void Update () {
		
		transform.position = car.transform.position- offSet;
		timer -= Time.deltaTime;
		if(timer<=0)
		{
			enemy ();
		}
	}





	void enemy(){
		carIndex = Random.Range (0, 7);
		Vector3 carPos = new Vector3 (Random.Range (-maxPos, maxPos), transform.position.y, transform.position.z);
		Instantiate (Enemy [carIndex], carPos, transform.rotation);
		timer = delayTime;
		//Debug.Log ("in car");
	}

		
}
