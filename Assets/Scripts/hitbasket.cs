using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hitbasket : MonoBehaviour
{
    private GameObject paper;
    public AudioSource pickup;
    public GameObject basket;

    private void OnTriggerEnter2D(Collider2D hit) {
        if (hit.gameObject.tag == "Paper") {
            //UnityEngine.Debug.Log("hit the basket");
            paper = hit.gameObject;
            StartCoroutine(LetDestroy());

            statics.scriptActive = true;
        }
    }

    IEnumerator LetDestroy(){
        yield return new WaitForSeconds(0.5f);
        Destroy(paper);
        statics.canMoveBasket = true;
        statics.canSpawn = true;
        statics.score = statics.score + 1;
        statics.avaliblePaper = statics.avaliblePaper + 1;
        statics.wasAdd = false;
        if (pickup.enabled == true)
        {
            pickup.Play();
        }
        //Destroy(basket);

        yield return new WaitForSeconds(0.1f);

    }
}