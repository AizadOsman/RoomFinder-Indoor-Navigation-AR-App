using UnityEngine;

public class PanelManager : MonoBehaviour
{
    public GameObject loginPanel; // Assign in Inspector
    public GameObject profilePanel; // Assign in Inspector
    public GameObject confirmationPanel; // Assign in Inspector

    void Start()
    {
        // Deactivate all panels
        loginPanel.SetActive(true);
        profilePanel.SetActive(false);
        confirmationPanel.SetActive(false);

        // Activate the target panel if specified
        if (!string.IsNullOrEmpty(SceneData.TargetPanel))
        {
            switch (SceneData.TargetPanel)
            {
                case "LoginPanel":
                    loginPanel.SetActive(true);
                    break;
                case "ProfilePanel":
                    profilePanel.SetActive(true);
                    break;
                case "ConfirmationPanel":
                    confirmationPanel.SetActive(true);
                    break;
                default:
                    Debug.LogWarning("Unknown panel: " + SceneData.TargetPanel);
                    break;
            }
        }
    }
}
