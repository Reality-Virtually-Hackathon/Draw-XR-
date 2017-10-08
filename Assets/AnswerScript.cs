using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnswerScript : MonoBehaviour {

    public string answer;
    public static AnswerScript instance;

	// Use this for initialization
	void Start () {
        instance = this;

        gameObject.SetActive(false);
	}

    public void ShowText(string a) {
        StartCoroutine(ShowMessage(a));
    }

	IEnumerator ShowMessage(string message)
	{
		this.GetComponent<Text>().text = message;
        this.gameObject.SetActive(true);

		yield return new WaitForSeconds(3f);

		this.gameObject.SetActive(false);
	}
}
