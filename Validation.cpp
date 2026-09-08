// File:        Validation.cpp
// Author:      Jacob Borton
// Project:     RPG Character Builder (console app)
// Purpose:     Implementation of input validation utility functions.

#include "Validation.h"
#include <iostream>

using namespace std;

// prompts the user until a valid integer within minVal and maxVal is entered
int getValidInt(string prompt, int minVal, int maxVal) {
    int value;
    cout << prompt;
    cin >> value;

    while (cin.fail() || value < minVal || value > maxVal) {
        cout << "Invalid input. Please enter a whole number between "
             << minVal << " and " << maxVal << ": ";
        cin.clear();           // clear the error flag
        cin.ignore(100, '\n'); // ignore the bad input
        cin >> value;
    }
    cin.ignore(100, '\n'); // clear leftover newline so getline() works next
    return value;
}

// returns true if type is "Warrior", "Mage", or "Rogue"
bool isValidType(string type) {
    if (type == "Warrior" || type == "Mage" || type == "Rogue") {
        return true;
    }
    else {
        return false;
    }
}

// prompts the user until they enter "y" or "n" (case-insensitive), returns true for "y"
bool getYesNo(string prompt) {
    string response;
    cout << prompt;
    getline(cin, response);

    while (response != "y" && response != "Y" && response != "n" && response != "N") {
        cout << "Please enter y or n: ";
        getline(cin, response);
    }

    return (response == "y" || response == "Y");
}
