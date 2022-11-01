using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
//using GoogleMobileAds.Api;
//using System;

public class yenidenoynamenu : MonoBehaviour
{
    //private InterstitialAd gecis;
    //private InterstitialAd interstitial;
    public static int sayac;
    GameObject OyunYoneticisi;
//    private void RequestInterstitial()
//    {
//        MobileAds.Initialize(initStatus => { });
        
//        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
//#if UNITY_ANDROID
//        string adUnitId = "ca-app-pub-1132749028964973/9299513861";
//#elif UNITY_IPHONE
//        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
//#else
//        string adUnitId = "unexpected_platform";
//#endif

//        this.interstitial = new InterstitialAd(adUnitId);
//        AdRequest request = new AdRequest.Builder().Build();
//        this.interstitial.LoadAd(request);
//    }
    private void Start()
    {
        
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
        //RequestInterstitial();
        //gecis = new InterstitialAd("ca-app-pub-1132749028964973/5848720992");
        //AdRequest reklamIstegi = new AdRequest.Builder().Build();
        //gecis.LoadAd(reklamIstegi);
    }
    public void TekrarOyna()
    {
        
        // SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        SceneManager.LoadScene(PlayerPrefs.GetInt("kayit"));
        Debug.Log("basildi T");
        sayac++;
        if (sayac > 1)
        {
            sayac = 0;
        }
        //interstitial.Destroy();
        
    }
    public void AnaMenuDon()
    {
        sayac++;
        SceneManager.LoadScene("0");
        Debug.Log("basildi A");
        //interstitial.Destroy();
    }
    public void reklam()
    {
        SceneManager.LoadScene(PlayerPrefs.GetInt("kayit"));
        //interstitial.Destroy();
    }
    public void ReklamGoster()
    {
        //if (this.interstitial.IsLoaded())
        //{
            
        //    this.interstitial.Show();
        //}
            
        //gecis.Show();
            
        

    }
}
