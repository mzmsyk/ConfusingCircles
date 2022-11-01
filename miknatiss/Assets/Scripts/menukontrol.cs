using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class menukontrol : MonoBehaviour
{
    
    int kayitliLevel;
    bool kontrolBilgiPanel=true;
    public GameObject bilgiPanel;
    public  GameObject sesKapat;
    public  GameObject sesAc;
    GameObject OyunYoneticisi;
    GameObject Miknatis;
    public TextMeshProUGUI levelGosterme;
    void Start()
    {
        OyunYoneticisi = GameObject.FindGameObjectWithTag("oyunyoneticisi");
        
       kayitliLevel = PlayerPrefs.GetInt("kayit");
        Miknatis = GameObject.FindGameObjectWithTag("miknatis");
        
        levelGosterme.text = "Level: " + PlayerPrefs.GetInt("kayit").ToString();
        
        
    }

    
    void Update()
    {
        if (PlayerPrefs.GetInt("ses")==1)
        {
            sesKapat.SetActive(false);
            sesAc.SetActive(true);
        }
        else
        {
            sesKapat.SetActive(true);
            sesAc.SetActive(false);
        }
    }
    public void AnaMenu()
    {
        if (kayitliLevel == 0)
        {
            SceneManager.LoadScene(kayitliLevel + 1);
        }
        else
        {
            SceneManager.LoadScene(kayitliLevel);
        }
        
    }
    public void BigiPanel()
    {
        if (kontrolBilgiPanel == true)
        {

            
            bilgiPanel.SetActive(true);
            kontrolBilgiPanel = false;
        }
        
    }
    public void BilgiPanelKapat()
    {
        if (kontrolBilgiPanel == false)
        {
            
            bilgiPanel.SetActive(false);
            kontrolBilgiPanel = true;
        }
    }
    public void SesDurum(string durum)
    {
        if (durum=="kapali")
        {
            sesKapat.SetActive(false);
            sesAc.SetActive(true);
            PlayerPrefs.SetInt("ses", 1);
            
        }
        else if (durum == "acik")
        {
            sesKapat.SetActive(true);
            sesAc.SetActive(false);
            PlayerPrefs.SetInt("ses", 0);
            
        }

        
    }
    
}
