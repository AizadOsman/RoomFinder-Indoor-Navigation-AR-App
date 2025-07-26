using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScManager : MonoBehaviour
{
    public string targetPanelName;
    public void LoadSceneAndSetPanel(string sceneName)
    {
        SceneData.TargetPanel = targetPanelName;
        SceneManager.LoadScene(sceneName);
    }
   
}
