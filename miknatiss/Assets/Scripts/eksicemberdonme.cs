using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class eksicemberdonme : MonoBehaviour
{
    public float hiz;
    public float rastgeleHiz;
    public int miknatisDondurmeArti;
    bool kontrol2 = false;
    GameObject OyunYoneticisi;
    bool kontrol = true;
    void Start()
    {
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
    }

    
    void Update()
    {
        Dondurme();
        if (OyunYoneticisi.GetComponent<oyunyoneticisi>().miknatisAdetArti <= miknatisDondurmeArti)
        {
            Dondurme2();
        }
    }
    void Dondurme()
    {
        if (kontrol)
        {
            transform.Rotate(0, 0, hiz * Time.deltaTime);
        }
       
    }
    void Dondurme2()
    {
        kontrol = false;
        if (kontrol2)
        {
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(0, 0, 0), 0.01f * Time.deltaTime);
        }
        kontrol2 = false;
        transform.Rotate(0, 0, rastgeleHiz * Time.deltaTime);
    }
}
