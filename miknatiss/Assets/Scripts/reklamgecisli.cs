using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using UnityEngine.SceneManagement;
using System;

public class reklamgecisli : MonoBehaviour
{
    //private InterstitialAd gecis;
    private InterstitialAd interstitial;
    public static int sayac;
    GameObject OyunYoneticisi;
    private void RequestInterstitial()
    {
        MobileAds.Initialize(initStatus => { });
        
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-1132749028964973/5848720992";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
#else
        string adUnitId = "unexpected_platform";
#endif

        this.interstitial = new InterstitialAd(adUnitId);
        AdRequest request = new AdRequest.Builder().Build();
        this.interstitial.LoadAd(request);
    }
    void Start()
    {
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
        RequestInterstitial();
              //testId                                        //reelId
        //gecis = new InterstitialAd("ca-app-pub-1132749028964973/5848720992");   //ca-app-pub-3940256099942544/1033173712     //ca-app-pub-8574404735764386/7014716597   /// ca-app-pub-1132749028964973/5848720992
        //AdRequest reklamIstegi = new AdRequest.Builder().Build();
        //gecis.LoadAd(reklamIstegi);

    }
    public void Update()
    {
        if (yenidenoynamenu.sayac == 1)
        {
            OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrar.SetActive(false);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrar.SetActive(true);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrarAnaMenu.SetActive(false);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrarAnaMenu.SetActive(true);

            //Invoke("sdsds", 2f);
        }
        if(yenidenoynamenu.sayac!=1)
        {
            OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrar.SetActive(true);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrar.SetActive(false);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrarAnaMenu.SetActive(true);
            OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrarAnaMenu.SetActive(false);
        }
    }
    public void ReklamGoster()
    {
        sayac++;
        //if (sayac == 2)
        //{
        //    gecis.Show();
        //    sayac = 0;
        //}
        
    }
    public void reklam()
    {
        //gecis.Show();
        if (this.interstitial.IsLoaded())
        {
            
            this.interstitial.Show();
            
        }
        yenidenoynamenu.sayac = 0;
        yenidenoynamenu.sayac--;
       sayac = 0;
        //sayac = 0;
        OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrar.SetActive(true);
        OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrar.SetActive(false);
        OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrarAnaMenu.SetActive(true);
        OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrarAnaMenu.SetActive(false);
    }
    public void reklam2()
    {
        //Invoke("fdfd", 5f);
        //if (sayac != 2)
        //{
        //    SceneManager.LoadScene(PlayerPrefs.GetInt("kayit"));
        //}
    }
    public void reklam3()
    {
        // gecis.Show();
        if (this.interstitial.IsLoaded())
        {
            
            this.interstitial.Show();
        }
        yenidenoynamenu.sayac = 0;
        yenidenoynamenu.sayac--;
        sayac = 0;
        OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrarAnaMenu.SetActive(true);
        OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrarAnaMenu.SetActive(false);
        OyunYoneticisi.GetComponent<oyunyoneticisi>().tekrar.SetActive(true);
        OyunYoneticisi.GetComponent<oyunyoneticisi>().reklamTekrar.SetActive(false);
    }
    void fdfd()
    {
        if (yenidenoynamenu.sayac != 1)
        {
            SceneManager.LoadScene(PlayerPrefs.GetInt("kayit"));
            interstitial.Destroy();
        }
    }
}
