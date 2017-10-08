using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeftTouch : MonoBehaviour {
   
    public OVRInput.Controller controller;

    // Use this for initialization


    // Update is called once per frame
    void Update()
    {
        transform.localPosition = OVRInput.GetLocalControllerPosition(OVRInput.Controller.LTouch);
        transform.localRotation = OVRInput.GetLocalControllerRotation(OVRInput.Controller.LTouch);
    }
}
