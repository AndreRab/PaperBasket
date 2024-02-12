using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class statics : MonoBehaviour
{
    public static bool scriptActive = true;
    public static bool isTouch = true;
    public static bool canSpawn = true;
    public static bool canReSpawnBasket = true;
    public static bool canSpawnBasket = true;
    public static bool canMoveBasket = false;
    public static bool hasOneInShoot = false;
    public static bool oneMoreStopper = false;
    public static bool finishGame = false;
    public static bool firstStart = true;
    public static bool wasAdd = false;
    public static bool inShop = false;

    public static int prevScore = 0;
    public static int score = 0;
    public static int avaliblePaper = 5;
    public static int bestScore;
    public static int coins; 

    public static string typePaper;
    public static int valuePaper;
    public static string stockPaper = "STOCK";
    public static string Paper1 = "PAPER1";
    public static string Paper2 = "PAPER2";
    public static string iphone = "IPHONE";

    public static bool canChangeTypePaper = false;

    public static string typeBasket;
    public static int valueBasket = 1;
    public static string stockBasket = "STOCKB";
    public static string Basket1 = "Basket1";


    public static bool canChangeTypeBasket = false;

    public static bool pickCoim = false;


    public static UnityEngine.Vector2 start_position;
    public static UnityEngine.Vector2 start_position_basket;

    private void Start() {
        bestScore = PlayerPrefs.GetInt("BestScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
        valuePaper = PlayerPrefs.GetInt("PaperTypes", 1);
        valueBasket = PlayerPrefs.GetInt("BasketTypes", 1);
    }

    private void Update() {
        if (score % 10 == 0 && score > 0 && wasAdd == false) {
            avaliblePaper = avaliblePaper + 3; 
            wasAdd = true;
        }
    }
}
