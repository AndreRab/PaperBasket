using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paper : MonoBehaviour
{
    [SerializeField] private bool isPressed = false;

    [SerializeField] private float maxDistance = 3f;

    [SerializeField] private Rigidbody2D RigidPaper;
    [SerializeField] public Rigidbody2D ShootRigid; 

    public GameObject paperObject;
    private bool isTouch = true;
    private bool canRemove = false;

    private void Start()
    {
        RigidPaper = GetComponent<Rigidbody2D>(); 
        RigidPaper.GetComponent<SpringJoint2D>().enabled = true;
        //UnityEngine.Debug.Log(RigidPaper.position);
    }

    private void OnMouseDown(){
        if (statics.firstStart == true) {
            statics.firstStart = false;
        }
        
        if (isTouch == true) {
            isPressed = true;
            RigidPaper.isKinematic = true;
        }
    }

    private void OnMouseUp(){
        if (isTouch == true) {
            statics.avaliblePaper = statics.avaliblePaper - 1;
            isTouch = false;
        }
        
        isPressed = false;
        RigidPaper.isKinematic = false;
        statics.oneMoreStopper = false;
        
        StartCoroutine(LetGo());
    }

    private void Update(){
        if (isPressed == true && statics.scriptActive == true) {
            Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            if (Vector2.Distance(mousePos, ShootRigid.position) > maxDistance){
                RigidPaper.position = ShootRigid.position + (mousePos - ShootRigid.position).normalized * maxDistance;
            }
            else{
                RigidPaper.position = mousePos;
            }
        }
        if (RigidPaper.velocity == new Vector2(0, 0) && canRemove == true){
            StartCoroutine(LetDestroy());
        }

    }

    IEnumerator LetGo(){
        yield return new WaitForSeconds(0.1f);

        gameObject.GetComponent<SpringJoint2D>().enabled = false;
        statics.scriptActive = false;
        canRemove = true;
        
        yield return new WaitForSeconds(0.5f);

        statics.hasOneInShoot = false;

        yield return new WaitForSeconds(4f);

        Destroy(paperObject);
    }

    IEnumerator LetDestroy(){
        yield return new WaitForSeconds(3f);

        Destroy(paperObject);
    }
}