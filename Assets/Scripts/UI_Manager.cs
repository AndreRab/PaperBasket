using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;
using System;

[RequireComponent(typeof(Text))]
public class UI_Manager : MonoBehaviour
{
    public Text txt_available;
    public Text[] txt_count;
    public Text[] txt_bestscore;
    public Text[] txt_coins;
    public GameObject infText;
    public GameObject diedpanel;
    public GameObject StartPanel;
    public GameObject PausePanel;
    public GameObject newScoreText;
    public GameObject shop;
    private GameObject[] baskets;
    private GameObject startPaper;
    public GameObject[] SoundOn;
    public GameObject[] SoundOf;
    public AudioSource[] audios;

    public AudioListener listen;

    public GameObject[] papers;

    public InterstitialAds ad;
    public RewaedAds Rad;

    void Start() {
        Application.targetFrameRate = 60;
        Rad.LoadAd();
    }
    
    void Update()
    {
        txt_available.text = "Available papers: "+statics.avaliblePaper;

        foreach (Text txt in txt_count)
        {
            txt.text = "Score: "+statics.score;
        }

        foreach (Text txt in txt_bestscore)
        {
            txt.text = "Best score: "+statics.bestScore;
        }

        foreach (Text txt in txt_coins)
        {
            txt.text = "Coins: "+statics.coins;
        }

        if (statics.firstStart == false && statics.inShop == false){
            StartPanel.SetActive(false);
            infText.SetActive(true);
        }

        papers = GameObject.FindGameObjectsWithTag("Paper");
        
        if(papers.Length == 0 && statics.avaliblePaper < 1){
            statics.finishGame = true;
            PlayerPrefs.SetInt("Coins", statics.coins);

            if (statics.score > statics.bestScore) {
                statics.bestScore = statics.score;
                PlayerPrefs.SetInt("BestScore", statics.bestScore);
                newScoreText.SetActive(true);
            }
        }

        if (statics.avaliblePaper <= 0 && statics.finishGame == true){
            diedpanel.SetActive(true);
            infText.SetActive(false);
            closeBaskets();
        }
    }
    public void restartGame(){
        
        statics.scriptActive = true;
        statics.canSpawn = true;
        statics.canSpawnBasket = true;
        statics.canMoveBasket = false;
        statics.canReSpawnBasket = true;
        statics.hasOneInShoot = false;
        statics.finishGame = false;
        newScoreText.SetActive(false);
        ad.ShowAd();

        statics.score = 0;
        statics.prevScore = 0;
        statics.avaliblePaper = 5;

        diedpanel.SetActive(false);
        infText.SetActive(true);
    }

    public void newLife(){
        statics.scriptActive = true;
        statics.canSpawn = true;
        statics.canSpawnBasket = true;
        statics.canMoveBasket = false;
        statics.canReSpawnBasket = true;
        statics.hasOneInShoot = false;
        statics.finishGame = false;
        newScoreText.SetActive(false);
        statics.canReSpawnBasket = true;

        statics.avaliblePaper = 5;

        diedpanel.SetActive(false);
        infText.SetActive(true);
    }

    public void Pause() {
        PausePanel.SetActive(true);
        Time.timeScale = 0; 
    }

    public void Countinue(){
        PausePanel.SetActive(false);
        Time.timeScale = 1;
    }

    public void soundOf(){
        foreach (GameObject item in SoundOn)
        {
            item.SetActive(true);
        }

        foreach (GameObject item in SoundOf)
        {
            item.SetActive(false);
        }

        foreach (AudioSource audio in audios)
        {
            audio.enabled = false;
        }
    }

    public void soundOn(){
        foreach (GameObject item in SoundOn)
        {
            item.SetActive(false);
        }

        foreach (GameObject item in SoundOf)
        {
            item.SetActive(true);
        }
        
        foreach (AudioSource audio in audios)
        {
            audio.enabled = true;
        }
    }

    public void shopOn(){

        diedpanel.SetActive(false);

        if (statics.finishGame == true) {
            diedpanel.SetActive(false);
        }
        
        else if (statics.firstStart == true) {
            StartPanel.SetActive(false);
        }
        papers = GameObject.FindGameObjectsWithTag("Paper");
        foreach (GameObject paper in papers) {
           Destroy(paper);   
        }

        Time.timeScale = 0;
        shop.SetActive(true);
        statics.inShop = true;
    }

    public void shopOf(){
        //startPaper.SetActive(true);
        shop.SetActive(false);
        StartPanel.SetActive(true);

        Time.timeScale = 1;
        statics.inShop = false;
        statics.canChangeTypePaper = true;
        statics.canSpawn = true;
        statics.hasOneInShoot = false;
        statics.oneMoreStopper = false;
    }

    public void chooseDefaultPaper() {
        statics.typePaper = statics.stockPaper;
        PlayerPrefs.SetString("paper", statics.stockPaper);
    }

    public void choosePaper1() {
        if (statics.valuePaper % 3 == 0){
            PlayerPrefs.SetString("paper", statics.Paper1);
            statics.typePaper = statics.Paper1;
        }

        else{
            if (statics.coins > 74){
                statics.typePaper = statics.Paper1;
                statics.coins = statics.coins - 75;
                PlayerPrefs.SetInt("Coins", statics.coins);
                PlayerPrefs.SetString("paper", statics.Paper1);

                statics.valuePaper = statics.valuePaper * 3;
                PlayerPrefs.SetInt("PaperTypes", statics.valuePaper * 3); 
            }
        }
    }

    public void choosePaper2() { 
        if (statics.valuePaper % 5 == 0){
            PlayerPrefs.SetString("paper", statics.Paper2);
            statics.typePaper = statics.Paper2;
        }

        else{
            if (statics.coins > 74){
                statics.typePaper = statics.Paper2;
                statics.coins = statics.coins - 75;
                PlayerPrefs.SetInt("Coins", statics.coins);
                PlayerPrefs.SetString("paper", statics.Paper2);

                statics.valuePaper = statics.valuePaper * 5;
                PlayerPrefs.SetInt("PaperTypes", statics.valuePaper * 5); 
            }
        }
    }

    public void chooseIphone() {
        if (statics.valuePaper % 7 == 0){
            statics.typePaper = statics.iphone;
            PlayerPrefs.SetString("paper", statics.iphone);
        }

        else{
            if (statics.coins > 149){
                statics.typePaper = statics.iphone;
                statics.coins = statics.coins - 150;
                PlayerPrefs.SetInt("Coins", statics.coins);
                PlayerPrefs.SetString("paper", statics.iphone);

                statics.valuePaper = statics.valuePaper * 7;
                PlayerPrefs.SetInt("PaperTypes", statics.valuePaper * 7); 
            }
        }
    }

    public void chooseDefaultBasket() {
        statics.typeBasket = statics.stockBasket;
        PlayerPrefs.SetString("basket", statics.stockBasket);
        closeBaskets();
        statics.canChangeTypeBasket = true;
        statics.canReSpawnBasket = true;
    }

    public void chooseRabauBasket() {
        if (statics.valueBasket % 18 == 0){
            PlayerPrefs.SetString("basket", statics.Basket1);
            statics.typeBasket = statics.Basket1;
            PlayerPrefs.SetString("basket", statics.Basket1);
            closeBaskets();
            statics.canChangeTypeBasket = true;
            statics.canReSpawnBasket = true;
        }

        else{
            if (statics.coins > 249){
                statics.typeBasket = statics.Basket1;
                PlayerPrefs.SetString("basket", statics.Basket1);
                closeBaskets();
                statics.canChangeTypeBasket = true;
                statics.canReSpawnBasket = true;
                statics.coins = statics.coins - 250;
                PlayerPrefs.SetInt("Coins", statics.coins);
                PlayerPrefs.SetString("basket", statics.Basket1);

                statics.valueBasket = statics.valueBasket * 18;
                PlayerPrefs.SetInt("BasketTypes", statics.valueBasket); 
            }
        }
    }

    public void closeBaskets(){
        baskets = GameObject.FindGameObjectsWithTag("Basket");
        foreach (GameObject basket in baskets) {
           Destroy(basket);
        }
    }
}
