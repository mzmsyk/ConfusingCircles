using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class miknatisartihareket : MonoBehaviour
{
    Rigidbody2D fizik;
    public float hiz;
    bool kontrol = false;
    GameObject OyunYoneticisi;
    
   
   
   

    void Start()
    {
        fizik = GetComponent<Rigidbody2D>();
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
        
       
    }


    void FixedUpdate()
    {
        
        if (!kontrol)
        {
            
           fizik.MovePosition(fizik.position + Vector2.down * Time.fixedDeltaTime * hiz);
            
        }
        
        
    }
    void Update()
    {
        
        
    }
        
    
    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.tag == "eksidonencember")
        {
           
            
           
            OyunYoneticisi.GetComponent<oyunyoneticisi>().PuanGosterText();
            kontrol = true;
            transform.SetParent(col.transform);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().SesCember();
           

            
        }
            if (col.gameObject.tag == "artiok")
            {

            oyunyoneticisi.kontroloyunBitti = false;
                OyunYoneticisi.GetComponent<oyunyoneticisi>().OyunBitti();
            //yonetici.transParantSayisiArti = 0;
            //yonetici.transParantSayisiEksi = 0;
        }
            if (col.gameObject.tag == "dilimeksi")
            {
                Destroy(col.gameObject);
                
            }
        
    }
    
    
    
}
