using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{

    public int timeLeft = 5;
    public Text countdownText;
    private PhotonView photonView;

    // Use this for initialization
    void Start()
    {
        photonView = PhotonView.Get(this);
        StartCoroutine("LoseTime");
    }

    // Update is called once per frame
    void Update()
    {
        countdownText.text = ("Time Left = " + timeLeft);

        if (timeLeft <= 0)
        {
            StopCoroutine("LoseTime");
            countdownText.text = "Times Up!";
            
        }
    }

    public void StartTimer() {
        
    }

    IEnumerator LoseTime()
    {
        while (true)
        {
            yield return new WaitForSeconds(1);
            timeLeft--;
			photonView.RPC("SetTime", PhotonTargets.Others, timeLeft.ToString());
        }
    }



}
