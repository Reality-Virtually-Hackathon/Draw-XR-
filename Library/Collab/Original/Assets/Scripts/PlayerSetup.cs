using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


public class PlayerSetup : NetworkBehaviour {
    [SerializeField]

    Behaviour[] componentsToDisable;
    Behaviour[] arComponents;
  
	// Use this for initialization
	void Start ()
    {
        if (!isLocalPlayer)
        {
            for (int i = 0; i < componentsToDisable.Length; i++)
            {
                componentsToDisable[i].enabled = false;
            }
           
           
        }
        else
        {
            Camera.main.gameObject.SetActive(false);
        }

        #if UNITY_IOS
    		for (int i = 0; i < arComponents.Length; i++)
    		{
    			arComponents[i].enabled = false;
    		}            
        #endif

	}
   
}
