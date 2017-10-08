using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TopicButton : MonoBehaviour {

    public Text Category;
    public Text Topic;
    public string[] getCategories = DrawList.Categories;
    public string[] arr;
    // Use this for initialization
    public void Start ()
    {
        Random rnd = new Random();
    }
	
	// Update is called once per frame
	void Update ()
    {
		
	}

    public void OnTriggerEnter(Collider hand)
    {
        if(hand.tag == "RHand")
        {
            chooseCategory();
        }
    }

    public void chooseCategory()
    {
       

        int rndInt = Random.Range(0,getCategories.Length);
        string Cat = getCategories[rndInt];
        Topic.text = Cat;
        
    }
}
