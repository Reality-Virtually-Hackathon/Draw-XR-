using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Collections;

namespace VRTK.Examples
{

    public class MyUiActions : MonoBehaviour
    {
        public GameObject artistInstuctions;
        public GameObject catagorySelect;

        public static int catagoryChoice = 0;


        public void PlayButton()
        {
            artistInstuctions.SetActive(false);
            catagorySelect.SetActive(true);

        }

        public void idoms()
        {
            catagoryChoice = 0;
        }

        public void jobs()
        {
            catagoryChoice = 1;
        }

        public void places()
        {
            catagoryChoice = 2;
        }
    }
}