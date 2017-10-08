using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Color_Ui_Control : MonoBehaviour {

    public OVRInput.Controller controller;

    [SerializeField]
    private GameObject modObject;

    bool stickClicked = false;

    Renderer rend;

    public Material[] colors;

    float deadzone = 0.25f;
    Vector2 stickInput = Vector2.zero;
    float angle;
    bool selectOn = false;

    int colorWheelDivisions = 12;
    
    int wheelSection;



    int[] angles;

    // Use this for initialization
    void Start ()
    {
        rend = modObject.GetComponent<Renderer>();
		for(int i = 0; i< colorWheelDivisions; i++)
        {
            angles[i] = i * (360 / colorWheelDivisions);
        }
	}
	
	// Update is called once per frame
	void Update ()
    {

        if(OVRInput.Get(OVRInput.Button.PrimaryThumbstick, controller) && !selectOn && !stickClicked)    //If the thumbstick is pressed and not currently in selectmode 
        {
            stickClicked = true;
            selectOn = true;
            StartCoroutine(ColorSelect());
            Debug.Log("Coroutine started");
        }

        if (OVRInput.Get(OVRInput.Button.PrimaryThumbstick, controller) && selectOn && !stickClicked)    //If the thumbstick is pressed and not currently in selectmode 
        {
            stickClicked = true;
            selectOn = false;
            StopCoroutine(ColorSelect());
            Debug.Log("Coroutine ended");
        }

        if(!OVRInput.Get(OVRInput.Button.PrimaryThumbstick, controller))
        {
            stickClicked = false;
        }
        //Debug.Log(stickInput);
    }

    IEnumerator ColorSelect()
    {
        while (selectOn == true)
        {
            stickInput = new Vector2(OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).x, OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).y);
            Debug.Log(stickInput);
            if (stickInput.magnitude < deadzone)
            {
                stickInput = Vector2.zero;
                yield break;
            }
            angle = Vector2.Angle(Vector2.zero, stickInput);    //Get angle between Zero and current vector 2
            Debug.Log("Angle:" + angle);

            //angle = (Mathf.RoundToInt(angle / 10)) * 10;    //Round to the nearest

            for (int i = 0; i < colorWheelDivisions; i++)
            {
                {
                    wheelSection = i;
                    Debug.Log("Current Section:" + wheelSection);
                    rend.material = colors[wheelSection];
                }
            }
            yield return null;
        }
        
    }
}
