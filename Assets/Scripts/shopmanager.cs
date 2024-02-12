using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shopmanager : MonoBehaviour
{
    public GameObject buy1;
    public GameObject select1;
    public GameObject buy2;
    public GameObject select2;
    public GameObject buyIphone;
    public GameObject selectIphone;

    public GameObject buyRabau;
    public GameObject selectRabau;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (statics.valuePaper % 3 == 0)
        {
            buy1.SetActive(false);
            select1.SetActive(true);
        }

        if (statics.valuePaper % 5 == 0)
        {
            buy2.SetActive(false);
            select2.SetActive(true);
        }

        if (statics.valuePaper % 7 == 0)
        {
            buyIphone.SetActive(false);
            selectIphone.SetActive(true);
        }

        if (statics.valueBasket == 18) {
            buyRabau.SetActive(false);
            selectRabau.SetActive(true);
        }
    }
}
