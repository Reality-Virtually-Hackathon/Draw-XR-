﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkManager : MonoBehaviour {

    public GameObject headPrefab;
	public GameObject l_armPrefab;
	public GameObject r_armPrefab;
    public GameObject hitArea;

	/// <summary>Connect automatically? If false you can set this to true later on or call ConnectUsingSettings in your own scripts.</summary>
	public bool AutoConnect = true;

	public byte Version = 1;

	/// <summary>if we don't want to connect in Start(), we have to "remember" if we called ConnectUsingSettings()</summary>
	private bool ConnectInUpdate = true;

	#if UNITY_EDITOR_OSX
	private Boolean isSpectator = true;
	#elif UNITY_IOS
	private Boolean isSpectator = true;
	#else
	private Boolean isSpectator = false;
	#endif

	public virtual void Start()
	{
		PhotonNetwork.ConnectUsingSettings(Version + "." + SceneManagerHelper.ActiveSceneBuildIndex);
	}

	// below, we implement some callbacks of PUN
	// you can find PUN's callbacks in the class PunBehaviour or in enum PhotonNetworkingMessage


	public virtual void OnConnectedToMaster()
	{
		Debug.Log("OnConnectedToMaster() was called by PUN. Now this client is connected and could join a room. Calling: PhotonNetwork.JoinRandomRoom();");
		PhotonNetwork.JoinRandomRoom();
	}

	public virtual void OnJoinedLobby()
	{
		Debug.Log("OnJoinedLobby(). This client is connected and does get a room-list, which gets stored as PhotonNetwork.GetRoomList(). This script now calls: PhotonNetwork.JoinRandomRoom();");
		PhotonNetwork.JoinRandomRoom();
	}

	public virtual void OnPhotonRandomJoinFailed()
	{
		Debug.Log("OnPhotonRandomJoinFailed() was called by PUN. No random room available, so we create one. Calling: PhotonNetwork.CreateRoom(null, new RoomOptions() {maxPlayers = 4}, null);");
		PhotonNetwork.CreateRoom(null, new RoomOptions() { MaxPlayers = 4 }, null);
	}

	// the following methods are implemented to give you some context. re-implement them as needed.

	public virtual void OnFailedToConnectToPhoton(DisconnectCause cause)
	{
		Debug.LogError("Cause: " + cause);
	}

	public void OnJoinedRoom()
	{
		Debug.Log("OnJoinedRoom() called by PUN. Now this client is in a room. From here on, your game would be running. For reference, all callbacks are listed in enum: PhotonNetworkingMessage");

        if (!isSpectator) {
			GameObject head = PhotonNetwork.Instantiate(headPrefab.name, RiftManager.Instance.head.transform.position, RiftManager.Instance.head.transform.rotation, 0); 
			GameObject lArm = PhotonNetwork.Instantiate(l_armPrefab.name, RiftManager.Instance.leftHand.transform.position, RiftManager.Instance.leftHand.transform.rotation, 0); 
			GameObject rArm = PhotonNetwork.Instantiate(r_armPrefab.name, RiftManager.Instance.rightHand.transform.position, RiftManager.Instance.rightHand.transform.rotation, 0);
        }
	}
}
