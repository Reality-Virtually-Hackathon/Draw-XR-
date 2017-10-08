using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DrawList  {

    // Use this for initialization
    [SerializeField]
    public static string[] Categories;
    public static string[] IdomTopic;
    public static string[] JobTopic;
    public static string[] PlaceTopic;
	public static void Start ()
    {
        Categories = new string[] 
        {
            "Idoms",
            "Jobs",
            "Places"
        };

        IdomTopic = new string[]
        {
            "Have your cake and eat it too",
            "Grass is always greener on the other side",
            "Rainging cats and dogs",
            "A penny for your thoughts",
            "Beat around the bush",
            "Can't judge a book by it's cover",
            "Don't put all your eggs in one basket",
            "Let the cat out of the bad",
            "Miss the boat",
            "Once in a blue moon",
            "Piece of cake",
            "Speak of the devil",
            "Take it with a grain of salt",
            "Taste of your own medicine"
        };

        JobTopic = new string[]
        {
            "Baseball Player",
            "Plumber",
            "Teacher",
            "Police Officer",
            "Postal Carrier",
            "Veternarian",
            "Doctor",
            "President",
            "Artist",
            "DJ",
            "Programmer",
            "Scientist",
            "Firefighter",
            "BabySitter",
            "Bartender",
            "Priest",
            "Pilot",
            "Janitor",
            "Film Maker"
        };

        PlaceTopic = new string[]
        {
            "Home",
            "New York",
            "Rome",
            "Egypt",
            "Mars",
            "London",
            "Great Wall of China",
            "Atlantis",
            "International Space Station",
            "The Beach"
        };


	}
	
	
}
