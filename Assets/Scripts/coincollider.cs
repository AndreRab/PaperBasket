using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coincollider : MonoBehaviour
{
    public GameObject coin;

    private void Start() {
        StartCoroutine(LetDestroy());
    }

    private void OnTriggerEnter2D(Collider2D hit) {
        if (hit.gameObject.tag == "Paper") {
            Destroy(coin);
            statics.coins = statics.coins + 1;
            statics.pickCoim = true;
        }
    }

    IEnumerator LetDestroy(){
        yield return new WaitForSeconds(5f);

        Destroy(coin);
    }
}
