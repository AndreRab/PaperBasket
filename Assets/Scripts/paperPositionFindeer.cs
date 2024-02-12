using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paperPositionFindeer : MonoBehaviour
{
    public Rigidbody2D Rigid;
    // Start is called before the first frame update
    void Start()
    {
        Rigid = GetComponent<Rigidbody2D>();
        statics.start_position = Rigid.position;         
    }
}
