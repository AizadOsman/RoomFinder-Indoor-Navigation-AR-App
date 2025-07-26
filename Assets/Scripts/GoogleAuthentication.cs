using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using Google;
using System.Threading.Tasks;
using UnityEngine.Networking;
using System.Net;

public class GoogleAuthentication : MonoBehaviour
{
    public string imageURL;
    public TMP_Text userNameTxt, userEmailTxt;
    public Image profilePic;
    public GameObject loginPanel, profilePanel, confirmationPanel, applicationCanvas, noteTakingPanel, manualMenuPanel, appTourPanel, RFTipsPanel, ARGuidePanel, MapPanel, MapFloor3Panel, MapFloor2Panel, MapFloor1Panel;
    private GoogleSignInConfiguration configuration;
    public string webClientId = "944453339117-mtvefe806edqhlut1kctjr180lbjlgk8.apps.googleusercontent.com";

    void Awake()
    {
        configuration = new GoogleSignInConfiguration
        {
            WebClientId = webClientId,
            RequestIdToken = true,
            UseGameSignIn = false,
            RequestEmail = true
        };
    }

    public void OnSignIn()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
            OnAuthenticationFinished, TaskScheduler.Default);
    }

    internal void OnAuthenticationFinished(Task<GoogleSignInUser> task)
    {
        if (task.IsFaulted)
        {
            using (IEnumerator<System.Exception> enumerator =
                task.Exception.InnerExceptions.GetEnumerator())
            {
                if (enumerator.MoveNext())
                {
                    GoogleSignIn.SignInException error =
                        (GoogleSignIn.SignInException)enumerator.Current;
                    Debug.LogError("Got Error: " + error.Status + " " + error.Message);
                }
                else
                {
                    Debug.LogError("Got unexpected exception?!?" + task.Exception);
                }
            }
        }
        else if (task.IsCanceled)
        {
            Debug.LogError("Cancelled");
        }
        else
        {
            StartCoroutine(UpdateUI(task.Result));
        }
    }

    IEnumerator UpdateUI(GoogleSignInUser user)
    {
        Debug.Log("Welcome: " + user.DisplayName + "!");

        userNameTxt.text = user.DisplayName;
        userEmailTxt.text = user.Email;
        imageURL = user.ImageUrl.ToString();

        UnityWebRequest request = UnityWebRequestTexture.GetTexture(imageURL);
        yield return request.SendWebRequest();
        Texture2D downloadedTexture = DownloadHandlerTexture.GetContent(request);
        Rect rect = new Rect(0, 0, downloadedTexture.width, downloadedTexture.height);
        Vector2 pivot = new Vector2(0.5f, 0.5f);
        profilePic.sprite = Sprite.Create(downloadedTexture, rect, pivot);

        loginPanel.SetActive(false);
        profilePanel.SetActive(true);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OnSignOut()
    {
        userNameTxt.text = "";
        userEmailTxt.text = "";

        imageURL = "";
        loginPanel.SetActive(true);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
        Debug.Log("Calling SignOut");
        GoogleSignIn.DefaultInstance.SignOut();
    }

    public void OpenConfirmationPanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(true);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenProfilePanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(true);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenApplicationCanvas()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(true);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenNoteTakingPanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(true);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenManualMenuPanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(true);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenAppTourPanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(true);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenRFTipsPanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(true);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenARGuidePanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(true);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenMapPanel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(true);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenMapFloor3Panel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(true);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenMapFloor2Panel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(true);
        MapFloor1Panel.SetActive(false);
    }

    public void OpenMapFloor1Panel()
    {
        loginPanel.SetActive(false);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);
        applicationCanvas.SetActive(false);
        noteTakingPanel.SetActive(false);
        manualMenuPanel.SetActive(false);
        appTourPanel.SetActive(false);
        RFTipsPanel.SetActive(false);
        ARGuidePanel.SetActive(false);
        MapPanel.SetActive(false);
        MapFloor3Panel.SetActive(false);
        MapFloor2Panel.SetActive(false);
        MapFloor1Panel.SetActive(true);
    }
}
