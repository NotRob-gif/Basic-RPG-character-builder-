// File:        Validation.h
// Author:      Jacob Borton
// Project:     RPG Character Builder (console app)
// Purpose:     Utility functions for validating integer input, checking
//              whether a string is an allowed character type, and
//              confirming yes/no responses.

#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
using namespace std;

// prompts the user until a valid integer within minVal and maxVal is entered
int getValidInt(string prompt, int minVal, int maxVal);

// returns true if type is "Warrior", "Mage", or "Rogue"
bool isValidType(string type);

// prompts the user until they enter "y" or "n" (case-insensitive), returns true for "y"
bool getYesNo(string prompt);

#endif
