using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hitPaper : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D hit) {
        if (hit.gameObject.tag == "Paper") {

            statics.scriptActive = true;
            statics.canSpawn = true;
        }
    }
}
