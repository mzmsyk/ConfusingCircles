using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class articemberdonme : MonoBehaviour
{
    public float hiz;
    public float rastgeleSure;
    public float rastgeleHiz;
    bool kontrol = true;
    bool kontrol2 = true;
    bool kontrol3 = false;
    void Start()
    {
        
    }

    void Update()
    {
        
        
            Dondurme();
        Invoke("dondurme3", rastgeleSure);
        if (kontrol3)
        {
            CancelInvoke("dondurme3");
            transform.Rotate(0, 0, rastgeleHiz * Time.deltaTime);
        }
        
            
        
    }
    void Dondurme()
    {
        
        if (kontrol)
        {
            transform.Rotate(0, 0, hiz * Time.deltaTime); 
        }
        
    }
    
    void dondurme3()
    {
        
        kontrol = false;
        
        if (kontrol2)
        {
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(0, 0, 0), 0.01f * Time.deltaTime);
            
        }
        kontrol2 = false;
        transform.Rotate(0, 0, rastgeleHiz * Time.deltaTime);
        kontrol3 = true;
    }
}
