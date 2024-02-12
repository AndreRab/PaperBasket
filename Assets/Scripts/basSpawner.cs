using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class basSpawner : MonoBehaviour
{
    public GameObject stockBasket;
    public GameObject RabauBasket;
    private GameObject basket;

    public Rigidbody2D Rigid;

    // Start is called before the first frame update
    void Start()
    {
        //PlayerPrefs.SetString("basket", statics.Basket1);
        //
        //
        statics.typeBasket = PlayerPrefs.GetString("basket", statics.stockBasket); 
        statics.start_position_basket = Rigid.position;
        changeBasket();
    }

    // Update is called once per frame
    void Update()
    {
        if (statics.canChangeTypeBasket == true) {
            changeBasket();
            statics.canChangeTypeBasket = false;
        }

        if (statics.canReSpawnBasket == true) {
            var newBasket = Instantiate(basket, statics.start_position_basket, Quaternion.identity);
            statics.canReSpawnBasket = false;
        }
    }

    void changeBasket() {
        if (statics.typeBasket == statics.stockBasket) {
            basket = stockBasket;
        }

        else if (statics.typeBasket == statics.Basket1){
            basket = RabauBasket;
        }
    }
}
