// File:        GameCharacter.cpp
// Author:      Jacob Borton
// Project:     RPG Character Builder (console app)
// Purpose:     Implementation of the GameCharacter class methods.

#include "GameCharacter.h"
#include "Validation.h"
#include <iostream>

using namespace std;

// default constructor: "Unknown" type, 0 health
GameCharacter::GameCharacter() {
    name = "Unknown";
    type = "Unknown";
    health = 0;
}

// parameterized constructor: sets all three attributes at once using the setters
GameCharacter::GameCharacter(string n, string t, int h) {
    setName(n);
    setType(t);
    setHealth(h);
}

// assigns the name
void GameCharacter::setName(string n) {
    name = n;
}

// assigns the type, must be Warrior, Mage, or Rogue
void GameCharacter::setType(string t) {
    if (isValidType(t)) {
        type = t;
    }
    else {
        type = "Unknown";
        cout << "Invalid type. Type must be Warrior, Mage, or Rogue. Setting type to Unknown.\n";
    }
}

// assigns the health, must be between 1 and 100
void GameCharacter::setHealth(int h) {
    if (h >= 1 && h <= 100) {
        health = h;
    }
    else {
        health = 0;
        cout << "Invalid health. Health must be between 1 and 100. Setting health to 0.\n";
    }
}

// getter methods
string GameCharacter::getName() {
    return name;
}

string GameCharacter::getType() {
    return type;
}

int GameCharacter::getHealth() {
    return health;
}

// outputs the character's information
void GameCharacter::displayCharacter() {
    cout << "\n--- Character Details ---\n";
    cout << "Name:   " << name << "\n";
    cout << "Type:   " << type << "\n";
    cout << "Health: " << health << "\n";
}
