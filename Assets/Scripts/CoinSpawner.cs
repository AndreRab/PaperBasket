using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinSpawner : MonoBehaviour
{
    public GameObject coin;
    public AudioSource pickup;
  
    void Update()
    {

        if (statics.prevScore != statics.score) {
            System.Random rnd = new System.Random();
            if (rnd.Next(0, 8) > 2) {
                SpawnCoin();
            }

            statics.prevScore = statics.score;  
        }    

        if (statics.pickCoim == true){
            pickup.Play();
            statics.pickCoim = false;
        }
    }

    void SpawnCoin() {
        System.Random rnd = new System.Random();
        int x = rnd.Next(-2, 2);
        int y = rnd.Next(-1 , 4);
        var newCoin = Instantiate(coin, new UnityEngine.Vector2(x, y), Quaternion.identity);
    }
}
