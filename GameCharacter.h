// File:        GameCharacter.h
// Author:      Jacob Borton
// Project:     RPG Character Builder (console app)
// Purpose:     Header file defining the GameCharacter class.

#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <string>
using namespace std;

class GameCharacter {
private:
    string name;
    string type;
    int health;

public:
    // constructors
    GameCharacter();                          // default: "Unknown" type, 0 health
    GameCharacter(string n, string t, int h);  // parameterized

    // setter methods
    void setName(string n);
    void setType(string t);   // must be Warrior, Mage, or Rogue
    void setHealth(int h);    // must be between 1 and 100

    // getter methods
    string getName();
    string getType();
    int getHealth();

    // display function
    void displayCharacter();
};

#endif
