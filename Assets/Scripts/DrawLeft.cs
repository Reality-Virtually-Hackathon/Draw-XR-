using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawLeft : MonoBehaviour
{

    public GameObject controller;
    public Material lineMaterial;
    public float width;
    public OVRInput.Button button;

    private LineRenderer currLine;
    private int numClicks = 0;
	private PhotonView photonView;

    void Start() {
        photonView = PhotonView.Get(this);
    }

    void Update()
    {
        if (OVRInput.Get(button) && numClicks == 0)
        {

            GameObject stroke = new GameObject("stroke");

            Debug.Log("Left is clicking");

            stroke.AddComponent<MeshFilter>();
            stroke.AddComponent<MeshRenderer>();

            currLine = stroke.AddComponent<LineRenderer>();
            currLine.lineMaterial = new Material(lineMaterial);
            currLine.setWidth(width);

            numClicks++;

            photonView.RPC("AddStroke_2", PhotonTargets.Others, null);
        }
        else if (OVRInput.Get(button) && numClicks > 0)
        {
            currLine.AddPoint(controller.transform.position);

            photonView.RPC("DrawLine_2", PhotonTargets.Others, controller.transform.position);

            numClicks++;
        }
        else if (OVRInput.GetUp(button))
        {
            numClicks = 0;
            currLine = null;

            photonView.RPC("SetNull_2", PhotonTargets.Others, null);
        }

        if (currLine != null)
        {
            currLine.lineMaterial.color = ColorManager2.Instance.GetCurrentColor();
            photonView.RPC("SetColor_2", PhotonTargets.Others, null);
        }

        if(OVRInput.GetUp(OVRInput.Button.PrimaryThumbstickUp))
        {
            width = width + 0.01f;
            photonView.RPC("IncreaseWidth_2", PhotonTargets.Others, null);
        }

        else if (OVRInput.Get(OVRInput.Button.PrimaryThumbstickDown))
        {
            width = width - 0.01f;
            if (width <= 0.01f)
            {
                width = 0.01f;
            }
            photonView.RPC("DecreaseWidth_2", PhotonTargets.Others, null);
        }
    }

	[PunRPC]
	public void AddStroke_2()
	{
		GameObject stroke = new GameObject("stroke");

		stroke.AddComponent<MeshFilter>();
		stroke.AddComponent<MeshRenderer>();

		currLine = stroke.AddComponent<LineRenderer>();
		currLine.lineMaterial = new Material(lineMaterial);
		currLine.setWidth(width);
	}

	[PunRPC]
	public void DrawLine_2(Vector3 point)
	{
		currLine.AddPoint(point);
	}

	[PunRPC]
	public void SetNull_2()
	{
		currLine = null;
	}

	[PunRPC]
	public void SetColor_2()
	{
		if (currLine != null)
		{
			currLine.lineMaterial.color = ColorManager.Instance.GetCurrentColor();
		}
	}

	[PunRPC]
	public void IncreaseWidth_2()
	{
		width = width + 0.01f;
	}

	[PunRPC]
	public void DecreaseWidth_2()
	{
		width = width - 0.01f;
		if (width <= 0.01f)
		{
			width = 0.01f;
		}
	}
}
