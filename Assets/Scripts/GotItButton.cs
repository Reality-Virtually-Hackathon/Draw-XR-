using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class GotItButton : MonoBehaviour {

    public Text gotIt;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnTriggerEnter(Collider other)
    {
        if(other.tag == "RHand" )
        {
            Debug.Log("Colliding");
            gotIt.text = "Got It!";
            

        }
        StartCoroutine("Wait");
        
    }

    IEnumerator Wait()
    {
        yield return new WaitForSeconds(2);
        gotIt.text = "";
    }
}
