// File:        main.cpp
// Author:      Jacob Borton
// Project:     RPG Character Builder (console app)
// Purpose:     Prompt the user for character details, validate the input,
//              demonstrate both constructors of the GameCharacter class,
//              and build a roster of characters the user can review at
//              the end.

#include <iostream>
#include <string>
#include <vector>
#include "GameCharacter.h"
#include "Validation.h"

using namespace std;

// prompts for one character's details and returns a fully-built GameCharacter
GameCharacter buildCharacter() {
    string tempName;
    string tempType;
    int tempHealth;

    // get the character's name
    cout << "Enter the character's name: ";
    getline(cin, tempName);
    // validate not blank
    while (tempName == "") {
        cout << "Name cannot be blank. Enter the character's name: ";
        getline(cin, tempName);
    }

    // get the character's type
    cout << "Enter the character's type (Warrior, Mage, or Rogue): ";
    getline(cin, tempType);
    // validate against the allowed types
    while (!isValidType(tempType)) {
        cout << "Invalid type. Enter Warrior, Mage, or Rogue: ";
        getline(cin, tempType);
    }

    // get the character's health
    tempHealth = getValidInt("Enter the character's health (1-100): ", 1, 100);

    return GameCharacter(tempName, tempType, tempHealth);
}

int main() {
    vector<GameCharacter> roster;

    // --- demonstrate the default constructor + setters on the first character ---
    cout << "Let's build your first character.\n\n";
    GameCharacter defaultCharacter;
    GameCharacter firstCharacter = buildCharacter(); // reuse the prompts, but assign via setters below
    defaultCharacter.setName(firstCharacter.getName());
    defaultCharacter.setType(firstCharacter.getType());
    defaultCharacter.setHealth(firstCharacter.getHealth());

    cout << "\nCharacter created with default constructor + setters:";
    defaultCharacter.displayCharacter();

    // --- demonstrate the parameterized constructor on the same details ---
    cout << "\nCharacter created with parameterized constructor:";
    firstCharacter.displayCharacter();

    roster.push_back(firstCharacter);

    // --- let the user keep adding characters using the parameterized constructor ---
    bool addAnother = getYesNo("\nAdd another character to the roster? (y/n): ");
    while (addAnother) {
        GameCharacter nextCharacter = buildCharacter();
        roster.push_back(nextCharacter);
        cout << "\nCharacter added:";
        nextCharacter.displayCharacter();
        addAnother = getYesNo("\nAdd another character to the roster? (y/n): ");
    }

    // --- display the full roster ---
    cout << "\n\n======= Full Character Roster (" << roster.size() << ") =======";
    for (int i = 0; i < roster.size(); i++) {
        roster[i].displayCharacter();
    }

    return 0;
}
