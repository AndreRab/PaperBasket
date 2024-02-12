using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaperSpawner : MonoBehaviour
{
    public GameObject stockPaper;
    public GameObject Paper1;
    public GameObject Paper2;
    public GameObject Iphone;
    private UnityEngine.Vector2 start_position;

    private GameObject paper;
    private GameObject[] papers;

    private int N;

    void Start() {
        //PlayerPrefs.SetString("paper", statics.stockPaper);
        //PlayerPrefs.SetInt("PaperTypes", 1);
        statics.typePaper = PlayerPrefs.GetString("paper", statics.stockPaper); 
        changePaper();
    }

    // Update is called once per frame
    void Update()
    {
        if (statics.canChangeTypePaper == true) {
            changePaper();
            statics.canChangeTypePaper = false;
        }

        

        if (statics.canSpawn == true && statics.avaliblePaper > 0 && statics.hasOneInShoot == false && statics.oneMoreStopper == false) {
            UnityEngine.Debug.Log("bla");
            statics.hasOneInShoot = true;
            statics.oneMoreStopper = true;
            statics.canSpawn = false;
            var newPaper = Instantiate(paper, statics.start_position, Quaternion.identity);
            StartCoroutine(WaitAsec());
        }

    }

    void changePaper() {
        if (statics.typePaper == statics.stockPaper){
            paper = stockPaper;
        }

        else if (statics.typePaper == statics.Paper1){
            paper = Paper1;    
        }

        else if (statics.typePaper == statics.Paper2){
            paper = Paper2;
        }

        else if (statics.typePaper == statics.iphone){
            paper = Iphone;
        }
    }

    void deletePapers(GameObject[] papers, int n){
        for (int i = 1; i < n; i++){
            Destroy(papers[i]);
            statics.avaliblePaper ++;
        }
    }

    IEnumerator WaitAsec(){
        yield return new WaitForSeconds(0.55f);
        statics.hasOneInShoot = true;
    }
}
