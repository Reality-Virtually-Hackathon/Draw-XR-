using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class DrawManager2 : MonoBehaviour
{

    public GameObject controller;
    public Material lineMaterial;
    public float width;
    public OVRInput.Button button;

    private LineRenderer currLine;
    private int numClicks = 0;
    private GameObject stroke;
    public GameObject[] strokes;

    // Update is called once per frame
   
    void Update()
    {
        
        if (OVRInput.Get(button) && numClicks == 0)
        {
            stroke = new GameObject("stroke");
            

            stroke.AddComponent<MeshFilter>();
            stroke.AddComponent<MeshRenderer>();

            currLine = stroke.AddComponent<LineRenderer>();
            currLine.lineMaterial = new Material(lineMaterial);
            currLine.setWidth(width);
            numClicks++;

        }
        else if (OVRInput.Get(button) && numClicks > 0)
        {
            currLine.AddPoint(controller.transform.position);
            numClicks++;
        }
        else if (OVRInput.GetUp(button))
        {
            numClicks = 0;
            currLine = null;
        
        }
        if (currLine != null)
        {
            currLine.lineMaterial.color = ColorManager2.Instance.GetCurrentColor();
        }

        
    }

    //void LineParent() //NEEDS WORK ONLY ONE STROKE PARENTING
    //{
    //    if (OVRInput.GetDown(OVRInput.Button.SecondaryIndexTrigger) || OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger))
    //    {
    //        GameObject LineParent = GameObject.Find("LineParent");
    //        GameObject Strokes = GameObject.Find("stroke");
    //        Strokes.gameObject.transform.parent = LineParent.transform;
    //    }
    //}
}