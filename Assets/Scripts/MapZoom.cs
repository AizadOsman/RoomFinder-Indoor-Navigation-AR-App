using UnityEngine;
using UnityEngine.EventSystems;

public class MapZoom : MonoBehaviour, IScrollHandler
{
    public RectTransform content; // Assign your map RectTransform here
    public float zoomSpeed = 0.1f;
    public float maxZoom = 3f; // Maximum zoom scale

    private float minZoom; // Minimum zoom scale (calculated dynamically)
    private Vector3 originalScale; // To store the original scale

    void Start()
    {
        // Store the original scale of the content
        originalScale = content.localScale;

        // Set minZoom to the original scale's X (assuming uniform scaling)
        minZoom = originalScale.x;
    }

    void Update()
    {
        HandleTouchZoom();
    }

    // Mouse Scroll Zoom (For PC)
    public void OnScroll(PointerEventData eventData)
    {
        float scrollDelta = eventData.scrollDelta.y;
        Zoom(scrollDelta * zoomSpeed);
    }

    // Pinch-to-Zoom (For Mobile)
    private void HandleTouchZoom()
    {
        if (Input.touchCount == 2)
        {
            Touch touch1 = Input.GetTouch(0);
            Touch touch2 = Input.GetTouch(1);

            Vector2 touch1PrevPos = touch1.position - touch1.deltaPosition;
            Vector2 touch2PrevPos = touch2.position - touch2.deltaPosition;

            float prevMagnitude = (touch1PrevPos - touch2PrevPos).magnitude;
            float currentMagnitude = (touch1.position - touch2.position).magnitude;

            float difference = currentMagnitude - prevMagnitude;

            Zoom(difference * 0.01f); // Adjust multiplier for sensitivity
        }
    }

    // Apply Zoom
    private void Zoom(float delta)
    {
        Vector3 currentScale = content.localScale;
        float newScale = Mathf.Clamp(currentScale.x + delta, minZoom, maxZoom);

        content.localScale = new Vector3(newScale, newScale, 1);
    }
}