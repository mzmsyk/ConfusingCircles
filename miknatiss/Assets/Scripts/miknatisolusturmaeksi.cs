using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class miknatisolusturmaeksi : MonoBehaviour
{
    public GameObject miknatisEksi;
    public GameObject objeEksi;
    GameObject OyunYoneticisi;
    public bool kontrol = true;
    void Start()
    {
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
        
    }

    
    void Update()
    {
        
        if (Input.GetMouseButtonDown(0)&&kontrol)
        {
            miknatisEksi.transform.rotation = Quaternion.Euler(0,0,180);
            Instantiate(miknatisEksi, transform.position, transform.rotation);
           
            OyunYoneticisi.GetComponent<oyunyoneticisi>().MiknatisAdetEksiTextGosterme();
            
            objeEksi.SetActive(false);
            
            Invoke("Aktiflik", 0.1f);
        }
       
        
    }
    void Aktiflik()
    {
        this.gameObject.SetActive(true);
        
        
    }
}
