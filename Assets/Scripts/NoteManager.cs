using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class NoteManager : MonoBehaviour
{
    public TMP_InputField noteInputField;
    public Transform notesContainer; // Parent object for the note items
    public GameObject notePrefab; // Prefab for each note item
    public Button saveButton;

    private string filePath; // Path where notes will be saved
    private List<string> notes; // List to store individual notes
    private int editingIndex = -1; // Index to track which note is being edited

    private void Start()
    {
        // Set file path
        filePath = Application.persistentDataPath + "/notes.txt";

        // Load existing notes
        LoadNotes();

        // Set button listeners
        saveButton.onClick.AddListener(SaveNote);
    }

    //function to save note
    public void SaveNote()
    {
        string newNote = noteInputField.text; // Get the text from the InputField

        if (!string.IsNullOrEmpty(newNote))
        {
            if (editingIndex >= 0) // If editing an existing note
            {
                notes[editingIndex] = newNote; // Replace the note at the editing index
                editingIndex = -1; // Reset editing mode
            }
            else
            {
                notes.Add(newNote); // Add new note to the list
            }

            SaveNotesToFile(); // Save the updated notes list to the file
            noteInputField.text = ""; // Clear the InputField
            LoadNotes(); // Reload and update the display
        }
    }

    //Function to load notes from the file
    private void LoadNotes()
    {
        // Load notes from the file
        notes = new List<string>(LoadNotesFromFile().Split('\n'));
        notes.RemoveAll(string.IsNullOrEmpty); // Remove empty entries

        // Clear existing UI elements in the container
        foreach (Transform child in notesContainer)
        {
            Destroy(child.gameObject);
        }

        // Populate the UI with notes
        for (int i = 0; i < notes.Count; i++)
        {
            int index = i; // Local copy for the closure

            // Instantiate a new note item
            GameObject noteItem = Instantiate(notePrefab, notesContainer);

            // Set the note text
            TMP_Text noteText = noteItem.transform.Find("NoteText").GetComponent<TMP_Text>();
            noteText.text = notes[index];

            // Set up the Edit button
            Button editButton = noteItem.transform.Find("EditButton").GetComponent<Button>();
            editButton.onClick.AddListener(() => EditNoteUI(index));

            // Set up the Delete button
            Button deleteButton = noteItem.transform.Find("DeleteButton").GetComponent<Button>();
            deleteButton.onClick.AddListener(() => DeleteNoteUI(index));
        }
    }

    // Function to save notes to the file
    private void SaveNotesToFile()
    {
        File.WriteAllText(filePath, string.Join("\n", notes));
    }

    // Helper function to load notes from the file
    private string LoadNotesFromFile()
    {
        return File.Exists(filePath) ? File.ReadAllText(filePath) : "";
    }

    // Function to delete a note
    public void DeleteNoteUI(int index)
    {
        notes.RemoveAt(index); // Remove the note from the list
        SaveNotesToFile(); // Save the updated notes list
        LoadNotes(); // Reload and update the display
    }

    // Function to edit a note
    public void EditNoteUI(int index)
    {
        editingIndex = index; // Set the editing index
        noteInputField.text = notes[index]; // Populate the InputField with the note's content
    }

}




