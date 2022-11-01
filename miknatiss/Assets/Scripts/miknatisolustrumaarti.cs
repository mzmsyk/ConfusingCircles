using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class miknatisolustrumaarti : MonoBehaviour
{
    
    public GameObject miknatisArti;
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
            
            miknatisArti.transform.rotation = Quaternion.Euler(0, 0, 0);
            Instantiate(miknatisArti, transform.position, transform.rotation);
            
            OyunYoneticisi.GetComponent<oyunyoneticisi>().MiknatisAdetArtiTextGosterme();
            
            
            this.gameObject.SetActive(false);
            
            Invoke("Aktiflik", 0.1f);
        }
        

    }
    void Aktiflik()
    {
        this.gameObject.SetActive(true);
        
    }
}
