using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawRight : MonoBehaviour
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

            stroke.AddComponent<MeshFilter>();
            stroke.AddComponent<MeshRenderer>();

            currLine = stroke.AddComponent<LineRenderer>();
            currLine.lineMaterial = new Material(lineMaterial);
            currLine.setWidth(width);

            numClicks++;

			photonView.RPC("AddStroke", PhotonTargets.Others, null);
		}
        else if (OVRInput.Get(button) && numClicks > 0)
        {
            currLine.AddPoint(controller.transform.position);


			photonView.RPC("DrawLine", PhotonTargets.Others, controller.transform.position);

			numClicks++;
        }
        else if (OVRInput.GetUp(button))
        {
            numClicks = 0;
            currLine = null;


			photonView.RPC("SetNull", PhotonTargets.Others, null);
        }
        if (currLine != null)
        {
            currLine.lineMaterial.color = ColorManager.Instance.GetCurrentColor();

            photonView.RPC("SetColor", PhotonTargets.Others, null);
        }

		if (OVRInput.GetUp(OVRInput.Button.SecondaryThumbstick))
		{
			width = width + 0.01f;
			photonView.RPC("IncreaseWidth", PhotonTargets.Others, null);
		}
		else if (OVRInput.Get(OVRInput.Button.SecondaryThumbstickDown))
		{
			width = width - 0.01f;
			if (width <= 0f)
			{
				width = 0f;
			}
			photonView.RPC("DecreaseWidth", PhotonTargets.Others, null);
		}
    }

    [PunRPC] 
    public void AddStroke() {
		GameObject stroke = new GameObject("stroke");

		stroke.AddComponent<MeshFilter>();
		stroke.AddComponent<MeshRenderer>();

		currLine = stroke.AddComponent<LineRenderer>();
		currLine.lineMaterial = new Material(lineMaterial);
		currLine.setWidth(width);
    }

	[PunRPC]
	public void DrawLine(Vector3 point)
	{
		currLine.AddPoint(point);
	}

    [PunRPC] 
    public void SetNull() {
        currLine = null;
    }

	[PunRPC]
	public void SetColor()
	{
		currLine.lineMaterial.color = ColorManager.Instance.GetCurrentColor();
	}

	[PunRPC]
	public void IncreaseWidth()
	{
		width = width + 0.01f;
	}

	[PunRPC]
	public void DecreaseWidth()
	{
		width = width - 0.01f;
		if (width <= 0f)
		{
			width = 0f;
		}
	}
}