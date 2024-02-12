using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paper1 : MonoBehaviour
{
    [SerializeField] private bool isPressed = false;

    [SerializeField] private float maxDistance = 3f;

    [SerializeField] private Rigidbody2D RigidPaper;
    [SerializeField] public Rigidbody2D ShootRigid; 

    public CircleCollider2D col;

    private Touch touch;
    public GameObject paperObject;
    private bool isTouch = true;
    private bool canRemove = false;

    private void Start()
    {
        RigidPaper = GetComponent<Rigidbody2D>(); 
        RigidPaper.GetComponent<SpringJoint2D>().enabled = true;
        //UnityEngine.Debug.Log(RigidPaper.position);
    }

    private void OnTouch(){
        if (statics.firstStart == true) {
            statics.firstStart = false;
        }
        
        if (isTouch == true) {
            isPressed = true;
            RigidPaper.isKinematic = true;
        }
    }

    private void OnEndTouch(){
        if (isTouch == true) {
            statics.avaliblePaper = statics.avaliblePaper - 1;
            isTouch = false;
        }
        
        isPressed = false;
        RigidPaper.isKinematic = false;
        
        StartCoroutine(LetGo());
    }

    private void Update(){
        if (Input.touchCount > 0) 
        {
            touch = Input.touches[0];
            if (touch.phase == TouchPhase.Began) {
                Ray ray = Camera.main.ScreenPointToRay(touch.position);
                RaycastHit hitInfo;

                if (Physics.Raycast(ray, out hitInfo)) {
                    if(hitInfo.collider.tag == "Paper"){
                        OnTouch();
                    }
                }
            }    

            if (touch.phase == TouchPhase.Ended){
                OnEndTouch();
            }
        }

        if (isPressed == true && statics.scriptActive == true) {
            Vector2 mousePos = Camera.main.ScreenToWorldPoint(touch.position);

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