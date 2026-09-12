# RPG Character Builder (C++)

A command-line RPG character builder written in C++. I created this project while learning C++ to practice object-oriented programming, input validation, modular program structure, constructors, and working with dynamic collections.

## Overview

The program allows a user to create RPG characters by entering a name, selecting a character type, and assigning a health value.

The available character types are:

* Warrior
* Mage
* Rogue

Health values must be between 1 and 100.

After creating the first character, the user can continue adding additional characters to a roster. The characters are stored using a `std::vector`, and the full roster is displayed when the user finishes.

## Features

* Create multiple RPG characters
* Choose between Warrior, Mage, and Rogue character types
* Assign health values from 1 to 100
* Validate invalid numerical input
* Validate character type selections
* Validate yes/no responses
* Prevent blank character names
* Store multiple characters using `std::vector`
* Display individual character information
* Display the complete character roster
* Demonstrate both default and parameterized constructors
* Separate program functionality across multiple header and source files

## C++ Concepts Practiced

This project helped me practice several core C++ concepts, including:

* Classes and objects
* Default and parameterized constructors
* Encapsulation
* Getters and setters
* Header and implementation files
* Functions
* Loops and conditional statements
* Input validation
* `std::vector`
* Console input and output
* Modular program design

## Project Structure

```text
Basic-RPG-character-builder-/
│
├── GameCharacter.h
├── GameCharacter.cpp
├── Validation.h
├── Validation.cpp
└── main.cpp
```

### `GameCharacter.h` / `GameCharacter.cpp`

Defines and implements the `GameCharacter` class.

Each character contains:

* Name
* Type
* Health

The class includes a default constructor, parameterized constructor, setter methods, getter methods, and a function for displaying character information.

### `Validation.h` / `Validation.cpp`

Contains reusable validation functions for:

* Checking numerical input and allowed ranges
* Confirming that a character type is Warrior, Mage, or Rogue
* Validating yes/no responses

### `main.cpp`

Controls the main program flow.

It prompts the user for character information, demonstrates both constructor approaches, stores characters in a `std::vector`, allows additional characters to be created, and displays the completed roster.

## Example Program Flow

```text
Let's build your first character.

Enter the character's name: Ragnar
Enter the character's type (Warrior, Mage, or Rogue): Warrior
Enter the character's health (1-100): 100

Character created with default constructor + setters:
--- Character Details ---
Name:   Ragnar
Type:   Warrior
Health: 100

Character created with parameterized constructor:
--- Character Details ---
Name:   Ragnar
Type:   Warrior
Health: 100

Add another character to the roster? (y/n): y
Enter the character's name: Merlin
Enter the character's type (Warrior, Mage, or Rogue): Mage
Enter the character's health (1-100): 85

Character added:
--- Character Details ---
Name:   Merlin
Type:   Mage
Health: 85

Add another character to the roster? (y/n): n


======= Full Character Roster (2) =======
--- Character Details ---
Name:   Ragnar
Type:   Warrior
Health: 100

--- Character Details ---
Name:   Merlin
Type:   Mage
Health: 85
```

## What I Learned

This project helped reinforce how a C++ program can be separated into multiple files instead of placing a
