﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


public class PlayerSetup : NetworkBehaviour {
    [SerializeField]
    Behaviour[] componentsToDisable;
  
	// Use this for initialization
	void Start ()
    {
        if (!isLocalPlayer)
        {
            for (int i = 0; i < componentsToDisable.Length; i++)
            {
                componentsToDisable[1].enabled = false;
            }
           
           
        }
        else
        {
            Camera.main.gameObject.SetActive(false);
        }
       
	}
   
}
