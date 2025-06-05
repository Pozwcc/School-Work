#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int convertToUpperCase(string &inputText, string &outputText) {
    cout << "Enter a text to convert to uppercase: ";
    cin >> inputText;
    
    // Convert the input text to uppercase
    outputText = inputText;
    transform(outputText.begin(), outputText.end(), outputText.begin(), ::toupper);
    
    cout << "Uppercase text: " << outputText << endl;
    
    return 0;
}

int reverseString() {
    string inputText;
    cout << "Enter a text to reverse: ";
    cin >> inputText;
    string reversedText = inputText;
    reverse(reversedText.begin(), reversedText.end());
    
    cout << "Reversed text: " << reversedText << endl;
    
    // Check if the text reads the same forwards and backwards
    if (inputText == reversedText) {
        cout << "The text is a palindrome." << endl;
    } else {
        // print nothing
    }


     return 0;
    }

    int main() {
        string inputText, outputText;
        cout << "Choose software function: " << endl;
        cout << "1. Convert text to uppercase" << endl;
        cout << "2. Reverse a text" << endl;
        cout << "--------------------------------" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        
        if (choice == 1) {
            convertToUpperCase(inputText, outputText);
        } else if (choice == 2) {
            reverseString();
        } else if (choice != 1 && choice != 2) {
            cout << "Invalid choice selected. Please rerun the program." << endl;
            return 1; // Exits the terminal with an error code
        }
        cout << "Exiting..." << endl;
        cout << "--------------------------------" << endl;
        return 0;
    }
    
   
