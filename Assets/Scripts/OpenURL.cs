using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenURL : MonoBehaviour
{
    public void OpenFeedback()
    {
        Application.OpenURL("https://docs.google.com/forms/d/e/1FAIpQLSdSkNmGXAJ6zCJwqnbtanie99cS3aZpIwCmEr6rlhYgt8yYvA/viewform");
        Debug.Log("Open Feedback Form");
    }

    public void OpenContact()
    {
        Application.OpenURL("https://linktr.ee/AizadOsman");
        Debug.Log("Open Linktree link");
    }
}
