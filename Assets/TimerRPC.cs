using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerRPC : MonoBehaviour {
    
    public GameObject timerText;

	// Use this for initialization
	void Start () {
        timerText.GetComponent<Text>().text = "100";
	}
	
	[PunRPC]
	public void SetTime(string time)
	{
        timerText.GetComponent<Text>().text = time;
	}
}
