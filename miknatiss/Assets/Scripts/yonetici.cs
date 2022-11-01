using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;


public class yonetici : MonoBehaviour
{
    public static int transParantSayisiArti;
    public static int transParantSayisiEksi;
    GameObject OyunYoneticisi;
    GameObject EksiCemberDonme;
    GameObject ArtiCemberDonme;
   
    string sahne;
    int miknatisAdetArti;
    int miknatisAdetEksi;
    int vurulmakIstenilenDilimSayisiArti;
    int vurulmakIstenilenDilimSayisiEksi;
    GameObject yenidenOynaPanel;
    Animator artiAnim;
    Animator eksiAnim;
    bool kontrolOyunBitti;
    bool kontrol;
    bool kontrol2;
    bool kontrol4 = true;
    static bool kontrol3;
    GameObject sap;
    GameObject gap;
    GameObject dap;
    void Start()
    {
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
        
        EksiCemberDonme = GameObject.FindGameObjectWithTag("eksidonencember");
        ArtiCemberDonme = GameObject.FindGameObjectWithTag("artidonencember");
        
        sahne = OyunYoneticisi.GetComponent<oyunyoneticisi>().sonrakiSahneIsmi;
        miknatisAdetArti = OyunYoneticisi.GetComponent<oyunyoneticisi>().miknatisAdetArti;
        miknatisAdetEksi = OyunYoneticisi.GetComponent<oyunyoneticisi>().miknatisAdetEksi;
        vurulmakIstenilenDilimSayisiArti = OyunYoneticisi.GetComponent<oyunyoneticisi>().vurulmakIstenilenDilimSayisiArti;
        vurulmakIstenilenDilimSayisiEksi = OyunYoneticisi.GetComponent<oyunyoneticisi>().vurulmakIstenilenDilimSayisiEksi;
        yenidenOynaPanel = OyunYoneticisi.GetComponent<oyunyoneticisi>().yenidenOynaPanel;
        artiAnim = OyunYoneticisi.GetComponent<oyunyoneticisi>().artiAnim;
        eksiAnim = OyunYoneticisi.GetComponent<oyunyoneticisi>().eksiAnim;
        //kontrolOyunBitti = OyunYoneticisi.GetComponent<oyunyoneticisi>().kontroloyunBitti;
        sap = OyunYoneticisi.GetComponent<oyunyoneticisi>().sabitArkaPlan;
        gap = OyunYoneticisi.GetComponent<oyunyoneticisi>().gecmeArkaPlan;
        dap = OyunYoneticisi.GetComponent<oyunyoneticisi>().dusmeArkaPlan;
        yenidenOynaPanel.GetComponent<RectTransform>().localScale = Vector3.zero;
    }

    
    void Update()
    {
        if (oyunyoneticisi.kontroloyunBitti == true)
        {
            //gecme();
            Invoke("gecme", 0.5f);
        }
        else
        {
            CancelInvoke("gecme");
        }
        
           
        
        Invoke("gecmeme", 0.1f);
        

    }
    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "dilimeksi")
        {
            transParantSayisiArti++;
            Debug.Log("arti: " + transParantSayisiArti);
            Destroy(col.gameObject);
            
        }
        if (col.gameObject.tag == "dilimarti")
        {
            transParantSayisiEksi++;
            Debug.Log("eksi: " + transParantSayisiEksi);
            Destroy(col.gameObject);
           
        }
    }
    public void YeniLevel()
    {
        //sap.SetActive(false);
        //gap.SetActive(true);
        //dap.SetActive(false);

        //gap.GetComponent<CanvasGroup>().DOFade(1, 0.7f);
        //gap.GetComponent<RectTransform>().DOScale(1, 0.7f).SetEase(Ease.OutBack);
        //if (kontrol == true)
        //{
            ArkaPlan();
        //}
        EksiCemberDonme.GetComponent<eksicemberdonme>().hiz = 0;
        ArtiCemberDonme.GetComponent<articemberdonme>().hiz = 0;
        
        EksiCemberDonme.GetComponent<eksicemberdonme>().rastgeleHiz = 0;
        ArtiCemberDonme.GetComponent<articemberdonme>().rastgeleHiz = 0;
        

        //CancelInvoke("gecmeme");
        if (kontrol==true&& oyunyoneticisi.kontroloyunBitti == true)
        {
            //transParantSayisiArti = 0;
            //transParantSayisiEksi = 0;
            SceneManager.LoadScene(sahne);
            
        }
        transParantSayisiArti = 0;
        transParantSayisiEksi = 0;
    }
    public void Yeniden()
    {
        if (kontrol4 == true)
        {
           // Handheld.Vibrate();
            kontrol4 = false;
            
        }
        OyunYoneticisi.GetComponent<oyunyoneticisi>().levellText.enabled = false;
        kontrol4 = false;
        //Handheld.Vibrate();
        CancelInvoke("ArkaPlan");
        sap.SetActive(false);
        gap.SetActive(false);
        dap.SetActive(true);
        
        //dap.GetComponent<CanvasGroup>().DOFade(1, 0.1f).SetDelay(0.5f);
        //dap.GetComponent<RectTransform>().DOScale(1, 0.1f).SetEase(Ease.OutBack);
        EksiCemberDonme.GetComponent<eksicemberdonme>().hiz = 0;
        ArtiCemberDonme.GetComponent<articemberdonme>().hiz = 0;
        
        EksiCemberDonme.GetComponent<eksicemberdonme>().rastgeleHiz = 0;
        ArtiCemberDonme.GetComponent<articemberdonme>().rastgeleHiz = 0;
        
        if (kontrol2 == true)
        {
            //transParantSayisiArti = 0;
            //transParantSayisiEksi = 0;
            artiAnim.Play("artiOyunBittiAnim");
            eksiAnim.Play("eksiOyunBittiAnim");
            CancelInvoke("gecme");
            //SceneManager.LoadScene("0");
            yenidenOynaPanel.SetActive(true);
            yenidenOynaPanel.GetComponent<CanvasGroup>().DOFade(1, 1f).SetDelay(0.5f);
            yenidenOynaPanel.GetComponent<RectTransform>().DOScale(1, 1f).SetEase(Ease.OutBack);

            
        }
        transParantSayisiArti = 0;
        transParantSayisiEksi = 0;
    }
    void gecme()
    {
        if (miknatisAdetArti == 0 && miknatisAdetEksi == 0)
        {
            EksiCemberDonme.GetComponent<eksicemberdonme>().hiz = 0;
            ArtiCemberDonme.GetComponent<articemberdonme>().hiz=0;
            
            EksiCemberDonme.GetComponent<eksicemberdonme>().rastgeleHiz = 0;
            ArtiCemberDonme.GetComponent<articemberdonme>().rastgeleHiz = 0;
            
            if (vurulmakIstenilenDilimSayisiArti == transParantSayisiArti && vurulmakIstenilenDilimSayisiEksi == transParantSayisiEksi)
            {
                
                Debug.Log("yeni level");

                
                kontrol3 = true;
                if (oyunyoneticisi.kontroloyunBitti == true)
                {
                    Invoke("ArkaPlan", 0.65f);
                }
                
                Invoke("YeniLevel", 1f);
                kontrol = true;
                kontrol2 = false;
            }
            
           

        }
    }
    void gecmeme()
    {
        if (miknatisAdetArti == 0 && miknatisAdetEksi == 0)
        {
            EksiCemberDonme.GetComponent<eksicemberdonme>().hiz = 0;
            ArtiCemberDonme.GetComponent<articemberdonme>().hiz = 0;
            
            EksiCemberDonme.GetComponent<eksicemberdonme>().rastgeleHiz = 0;
            ArtiCemberDonme.GetComponent<articemberdonme>().rastgeleHiz = 0;
            
            if (vurulmakIstenilenDilimSayisiArti != transParantSayisiArti && vurulmakIstenilenDilimSayisiEksi != transParantSayisiEksi || vurulmakIstenilenDilimSayisiArti == transParantSayisiArti && vurulmakIstenilenDilimSayisiEksi != transParantSayisiEksi || vurulmakIstenilenDilimSayisiArti != transParantSayisiArti && vurulmakIstenilenDilimSayisiEksi == transParantSayisiEksi)
            {
                //Handheld.Vibrate();
                Debug.Log("level tekrar");
                kontrol3 = false;
                Invoke("Yeniden", 0.1f);
                kontrol = false;
                kontrol2 = true;
            }
            
            
        }
    }
    void ArkaPlan()
    {
        if (kontrol3 == true)
        {
            sap.SetActive(false);
            gap.SetActive(true);
            dap.SetActive(false);
        }
            
        
    }
    
}
