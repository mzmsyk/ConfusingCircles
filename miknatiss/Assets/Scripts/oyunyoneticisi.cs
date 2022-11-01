using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
public class oyunyoneticisi : MonoBehaviour
{
    GameObject MiknatisOlusturmaEksi;
    GameObject MiknatisOlusturmaArti;
    GameObject EksiCemberDonme;
    GameObject ArtiCemberDonme;
   
    public  AudioSource miknatisSes;
    public AudioSource cemberSes;
    public  bool miknatisSesKontrol = false;
    public bool kontrol = true;
    public TextMeshProUGUI levellText;
    public TextMeshProUGUI artiText;
    public TextMeshProUGUI eksiText;
    public int miknatisAdetArti;
    public int miknatisAdetEksi;
    public TextMeshProUGUI puannText;
    public TextMeshProUGUI yenidenOynaPanelLevel;
    
    public GameObject yenidenOynaPanel;
    public GameObject tekrar;
    public GameObject reklamTekrar;
    public GameObject tekrarAnaMenu;
    public GameObject reklamTekrarAnaMenu;
    public static int sayac;
    public GameObject sabitArkaPlan;
    public GameObject gecmeArkaPlan;
    public GameObject dusmeArkaPlan;
    
    
    float puan = 0;
    GameObject MiknatisArtiHareket;
    GameObject MiknatisEksiHareket;
    public int vurulmakIstenilenDilimSayisiArti;
    public int vurulmakIstenilenDilimSayisiEksi;
    
    public string sonrakiSahneIsmi;
    public Animator artiAnim;
    public Animator eksiAnim;
    public static bool kontroloyunBitti=true;

    void Start()
    {
        kontroloyunBitti = true;
        MiknatisOlusturmaEksi = GameObject.FindGameObjectWithTag("miknatisolustrumayerieksi");
        MiknatisOlusturmaArti = GameObject.FindGameObjectWithTag("miknatisolustrumayeriarti");
        EksiCemberDonme = GameObject.FindGameObjectWithTag("eksidonencember");
        ArtiCemberDonme = GameObject.FindGameObjectWithTag("artidonencember");
        
        MiknatisArtiHareket = GameObject.FindGameObjectWithTag("artiok");
        MiknatisEksiHareket = GameObject.FindGameObjectWithTag("eksiok");
        yonetici.transParantSayisiArti = 0;
        yonetici.transParantSayisiEksi = 0;
        levellText.text = "LEVEL: " + SceneManager.GetActiveScene().name;

        artiText.text = miknatisAdetArti.ToString();
        eksiText.text = miknatisAdetEksi.ToString();
        cemberSes = GetComponent<AudioSource>();

       // puannText.text = "PUAN: " + puan.ToString();
        PlayerPrefs.SetInt("kayit", int.Parse(SceneManager.GetActiveScene().name));
        yenidenOynaPanel.SetActive(false);

        sabitArkaPlan.SetActive(true);
        gecmeArkaPlan.SetActive(false);
        dusmeArkaPlan.SetActive(false);

        // yenidenOynaPanelLevel.text = "LEVEL: " + (int.Parse(sonrakiSahneIsmi) - 1).ToString();
        //yenidenOynaPanelLevel.text = "LEVEL: " + (PlayerPrefs.GetInt("kayit")).ToString();
        yenidenOynaPanelLevel.text = "LEVEL: " + SceneManager.GetActiveScene().name;
        yenidenOynaPanel.GetComponent<RectTransform>().localScale = Vector3.zero;
    }

    void Update()
    {

        if (Input.GetMouseButtonDown(0)&&miknatisSesKontrol==false)
        {
            
                miknatisSes.Play();
           
        }
        if (PlayerPrefs.GetInt("ses") == 1)
        {
            miknatisSes.GetComponent<AudioSource>().mute = false;
        }
        else
        {
            miknatisSes.GetComponent<AudioSource>().mute = true;
        }

    }
    public void PuanGosterText()
    {
        puan += 50;

        //puannText.text = "PUAN: " + puan.ToString();
    }
    public void MiknatisAdetArtiTextGosterme()
    {
        miknatisAdetArti--;


        if (miknatisAdetArti >= 0)
        {

            artiText.text = miknatisAdetArti + "";

        }

        if (miknatisAdetArti <= 0)
        {
            MiknatisOlusturmaArti.GetComponent<miknatisolustrumaarti>().enabled = false;
            ArtiCemberDonme.GetComponent<articemberdonme>().enabled = false;
            
            miknatisSesKontrol = true;
        }


    }

    public void MiknatisAdetEksiTextGosterme()
    {
        miknatisAdetEksi--;


        if (miknatisAdetEksi >= 0)
        {

            eksiText.text = miknatisAdetEksi + "";
        }

        if (miknatisAdetEksi <= 0)
        {
            MiknatisOlusturmaEksi.GetComponent<miknatisolusturmaeksi>().enabled = false;
            EksiCemberDonme.GetComponent<eksicemberdonme>().enabled = false;
            miknatisSesKontrol = true;
        }


    }
    public void OyunBitti()
    {
        //Handheld.Vibrate();
        levellText.enabled = false;
        sayac++;
        if (sayac == 2)
        {
            tekrar.SetActive(false);
            reklamTekrar.SetActive(true);
            sayac = 0;
        }
        if(sayac != 2)
        {
            tekrar.SetActive(true);
            reklamTekrar.SetActive(false);
        }
        kontroloyunBitti = false;
        EksiCemberDonme.GetComponent<eksicemberdonme>().enabled = false;
        ArtiCemberDonme.GetComponent<articemberdonme>().enabled = false;
        
        MiknatisOlusturmaEksi.GetComponent<miknatisolusturmaeksi>().enabled = false;
        MiknatisOlusturmaArti.GetComponent<miknatisolustrumaarti>().enabled = false;
        MiknatisOlusturmaArti.GetComponent<miknatisolustrumaarti>().enabled = false;
        MiknatisOlusturmaEksi.GetComponent<miknatisolusturmaeksi>().enabled = false;
        EksiCemberDonme.GetComponent<eksicemberdonme>().hiz = 0;
        ArtiCemberDonme.GetComponent<articemberdonme>().hiz = 0;
        
        EksiCemberDonme.GetComponent<eksicemberdonme>().rastgeleHiz = 0;
        ArtiCemberDonme.GetComponent<articemberdonme>().rastgeleHiz = 0;
        
        kontrol = false;
        if (MiknatisOlusturmaEksi.GetComponent<miknatisolusturmaeksi>().enabled == false && MiknatisOlusturmaArti.GetComponent<miknatisolustrumaarti>().enabled == false)
        {
            miknatisSesKontrol = true;
        }

        StartCoroutine(bekleme());

    }
    public void SesCember()
    {
        cemberSes.Play();
    }

    IEnumerator bekleme()
    {
        artiAnim.Play("artiOyunBittiAnim");
        eksiAnim.Play("eksiOyunBittiAnim");
        sabitArkaPlan.SetActive(false);
        gecmeArkaPlan.SetActive(false);
        dusmeArkaPlan.SetActive(true);
        
        //dusmeArkaPlan.GetComponent<CanvasGroup>().DOFade(1, 0.7f);
        //dusmeArkaPlan.GetComponent<RectTransform>().DOScale(1, 0.7f).SetEase(Ease.OutBack);
        yield return new WaitForSeconds(0.001f);
        
        
        yenidenOynaPanel.SetActive(true);

        yenidenOynaPanel.GetComponent<CanvasGroup>().DOFade(1, 1f).SetDelay(0.5f);
        yenidenOynaPanel.GetComponent<RectTransform>().DOScale(1, 1f).SetEase(Ease.OutBack);
        //yonetici.transParantSayisiArti = 0;
        //yonetici.transParantSayisiEksi = 0;
    }

    

}
