using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class SetNavigationTarget : MonoBehaviour
{
    [SerializeField]
    private TMP_Dropdown navigationTargetDropDown;
    [SerializeField]
    private List<Target> navigationTargetObjects = new List<Target>();
    [SerializeField]
    private Slider navigationYOffset;

    private NavMeshPath path; // current calculated path
    private LineRenderer line; // linerenderer to display path
    private Vector3 targetPosition = Vector3.zero; // current target position

    private int currentFloor = 1;

    private bool lineToggle = false;

    private void Start()
    {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();
        line.enabled = lineToggle;
    }

    private void Update()
    {
        if (lineToggle && targetPosition != Vector3.zero)
        {
            NavMesh.CalculatePath(transform.position, targetPosition, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            Vector3[] calculatedPathAndOffset = AddLineOffset();
            line.SetPositions(calculatedPathAndOffset);
        }
    }

    public void SetCurrentNavigationTarget(int selectedValue)
    {
        targetPosition = Vector3.zero;
        string selectedText = navigationTargetDropDown.options[selectedValue].text;
        Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(selectedText.ToLower()));
        if (currentTarget != null)
        {
            if (line.enabled)
            {
                ToggleVisibility();
            }

            //check if floor is changing
            //if yes, lead to elevator
            //if no navigate
            
           // targetPosition = currentTarget.PositionObject.transform.position;
        }
    }

    public void ToggleVisibility()
    {
        lineToggle = !lineToggle;
        line.enabled = lineToggle;
    }

    public void ChangeActiveFloor(int floorNumber)
    {
        currentFloor = floorNumber;
        SetNavigationTargetDropDownOptions(currentFloor);
    }

    private Vector3[] AddLineOffset()
    {
        if (navigationYOffset.value == 0)
        {
            return path.corners;
        }

        Vector3[] calculatedLine = new Vector3[path.corners.Length];
        for (int i=0; i<path.corners.Length; i++)
        {
            calculatedLine[i] = path.corners[i] + new Vector3(0, navigationYOffset.value, 0);
        }
        return calculatedLine;
    }

    private void SetNavigationTargetDropDownOptions(int floorNumber)
    {
        navigationTargetDropDown.ClearOptions();
        navigationTargetDropDown.value = 0;

        if (line.enabled)
        {
            ToggleVisibility();
        }

        if(floorNumber == 3)
        {
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Bilik Perbincangan 1 & 2"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Natrah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Iqbal"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nor Aziah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Zambri"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Huda"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Azhar"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Miss Wan Athirah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Suzana"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Rozianawaty"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Ariza"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Afdal"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Wan Faezah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Fariza Hanis"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Syaripah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Azlin"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Maslina"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Ezzatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Fauziah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Mudiana"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Suriyati"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Zatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Kamalia"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Emma"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Marina"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Anitawati"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Jasber"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Rogayah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norisan"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Saidatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Fauziah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norjan"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Shuzlina"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Sofianita"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Shamimi"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Azliza"));
        }
        if(floorNumber == 2)
        {
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof. Zaidah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Ruhaila"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norzeatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Jasni"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts. Dr. Mohd Zahid"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Siti Mariam"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Haslizatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Noraini"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norasiah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Suriyani"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts. Dr. Saidatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Marshima"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norshahida"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Ridhwan & Sir Taufiq"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Izzad"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Ali"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Azizian"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts. Dr. Surya"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Tajul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Razif"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nor Ashikin"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof. Ts. Dr. Wan Abdul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Siti Khatijah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Mansir"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Azlan Ismail"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Nasirah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Tengku Zatul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Nur Atiqah Sia"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ms Hana & Ms Hanin"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norhaslinda"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Zainura"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof Madya Dr Haryani"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Bilik Guna Sama"));
        }
        if (floorNumber == 1)
        {
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Siti Nur Kamaliah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Rosanita"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Siti Arpah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norzilah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Azizi"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Fakariah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Zarina"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof Madya Dr Yusof"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Kamarul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norkhushaini"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Erny"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Mohsen"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nor Azimah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nurshahrily"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts Dr Razulaimi"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Shapina"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Zaridah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Kamarul"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Farah Aqilah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Yuzi"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Noor Hayati"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Sharifah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Ahmad Faiz"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Afiza"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norizan"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Hayati"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Mohd Suffian"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Sharifalillah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Noor Latiffah"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Suzana Ahmad"));
            navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Bilik Rehat"));
        }
    }

}
