using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Eraser : MonoBehaviour {
    public OVRInput.Button buttonB;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (OVRInput.Get(buttonB))
        {
            Destroy(GameObject.Find("stroke"));
            Debug.Log("Clicking B");
        }
	}
}
