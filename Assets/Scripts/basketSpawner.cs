using System;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class basketSpawner : MonoBehaviour
{
    public GameObject Basket;
    public Rigidbody2D RigidBasket;

    private UnityEngine.Vector2 start_position;
    private UnityEngine.Vector2 new_position;

    private UnityEngine.Quaternion start_rotation;
    private UnityEngine.Quaternion new_rotation;


    // Start is called before the first frame update
    void Start()
    {
        RigidBasket = GetComponent<Rigidbody2D>(); 
        start_position = RigidBasket.position;
        start_rotation = RigidBasket.transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        if (statics.canMoveBasket == true) {
            System.Random rnd = new System.Random();
            int random_value_position = rnd.Next(0, 7);
            int random_value_rotation = rnd.Next(0, 90);

            new_position = start_position + new UnityEngine.Vector2(0, random_value_position);
            new_rotation = start_rotation * UnityEngine.Quaternion.Euler(0, 0, random_value_rotation);

            Basket.transform.SetPositionAndRotation(new_position, new_rotation);
            statics.canMoveBasket = false;
        }

        if (statics.canReSpawnBasket == true) {
            Destroy(Basket);
        }
    }
}
