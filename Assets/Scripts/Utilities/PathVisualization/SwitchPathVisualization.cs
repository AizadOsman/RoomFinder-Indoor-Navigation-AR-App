using UnityEngine;

public class SwitchPathVisualization : MonoBehaviour
{

    [SerializeField]
    private PathLineVisualization pathLineVis;
    [SerializeField]
    private PathArrowVisualization arrowLineVis;

    private int visualizationCounter = 0;
    private GameObject activeVisualization;

    private void Start()
    {
        activeVisualization = pathLineVis.gameObject;
    }

    public void NextLineVisualization()
    {
        visualizationCounter++;

        DisableAllPathVisuals();
        EnablePathVisualsByIndex(visualizationCounter);
    }

    private void DisableAllPathVisuals()
    {
        pathLineVis.gameObject.SetActive(false);
        arrowLineVis.gameObject.SetActive(false);
    }

    private void EnablePathVisualsByIndex(int visIndex)
    {
        switch (visIndex)
        {
            case 1:
                activeVisualization = arrowLineVis.gameObject;
                break;
            default:
                activeVisualization = pathLineVis.gameObject;
                visualizationCounter = 0;
                break;
        }

        activeVisualization.SetActive(true);
    }

    public void ToggleVisualVisibility()
    {
        activeVisualization.SetActive(!activeVisualization.activeSelf);
    }
}
