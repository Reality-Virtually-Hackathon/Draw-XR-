using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RiftManager : MonoBehaviour {

    public GameObject head;
    public GameObject leftHand;
    public GameObject rightHand; 

    public static RiftManager Instance;

    void Awake() {
        if (Instance == null) {
            Instance = this;
        }
    }

    void OnDestroy() {
        if (Instance == this) {
            Instance = null;
        }
    }
}
