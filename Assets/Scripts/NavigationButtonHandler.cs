using UnityEngine;
using UnityEngine.SceneManagement;

public class NavigationButtonHandler : MonoBehaviour
{
    public string targetPanelName = "ProfilePanel";

    public void OpenMainSceneWithTargetPanel()
    {
        SceneData.TargetPanel = targetPanelName;        
        SceneManager.LoadScene("MainScene");
    }
}
