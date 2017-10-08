using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CopyScript : Photon.MonoBehaviour {

    public int index = 1;

    void Start() {
        GameObject spawn = GameObject.Find("SpawnArea");      

        if (spawn != null)
		{
		    transform.parent = spawn.transform;
		} 
	}

	// Update is called once per frame
	void Update () {
        if (photonView.isMine) {
            switch(index) {
                case 1:
					transform.position = RiftManager.Instance.head.transform.position;
					transform.rotation = RiftManager.Instance.head.transform.rotation;
                    break;
                case 2:
					transform.position = RiftManager.Instance.leftHand.transform.position;
					transform.rotation = RiftManager.Instance.leftHand.transform.rotation;
                    break;
                case 3:
					transform.position = RiftManager.Instance.rightHand.transform.position;
					transform.rotation = RiftManager.Instance.rightHand.transform.rotation;
                    break;
                case 4:
					transform.position = ARManager.Instance.head.transform.position;
					transform.rotation = ARManager.Instance.head.transform.rotation;
					break;
            } 
        }
	}
}
