# RPG Character Builder (C++)

A simple command-line RPG character builder written in C++. I created this project while learning C++ to practice object-oriented programming, input validation, modular program structure, and working with dynamic collections.

## Overview

The program allows a user to create multiple RPG characters by entering a character name, selecting a character class, and assigning a health value.

Created characters are stored in a roster using a `std::vector`, and the completed roster is displayed at the end of the program.

## Features

* Create multiple RPG characters
* Choose from several character classes
* Assign character health within an allowed range
* Validate incorrect user input
* Store characters dynamically using `std::vector`
* Display a complete character roster
* Separate program functionality across multiple header and source files

## C++ Concepts Practiced

This project helped me practice several core C++ concepts, including:

* Classes and objects
* Constructors
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
Basic-RPG-character-builder/
│
├── GameCharacter.h
├── GameCharacter.cpp
├── Validation.h
├── Validation.cpp
└── main.cpp
```

### `GameCharacter.h` / `GameCharacter.cpp`

Defines the `GameCharacter` class and handles character information such as:

* Name
* Character type
* Health

### `Validation.h` / `Validation.cpp`

Contains reusable functions for validating user input and preventing invalid numerical selections.

### `main.cpp`

Controls the main program flow, creates characters, stores them in a vector, and displays the completed roster.

## Example Program Flow

```text
RPG Character Builder

Enter the number of characters you would like to create: 2

Character 1

Enter character name: Ragnar

Select character type:
1. Warrior
2. Mage
3. Archer

Selection: 1

Enter health: 100

Character created successfully.

Character 2

Enter character name: Merlin

Select character type:
1. Warrior
2. Mage
3. Archer

Selection: 2

Enter health: 85

Character created successfully.

Character Roster
----------------
Name: Ragnar
Class: Warrior
Health: 100

Name: Merlin
Class: Mage
Health: 85
```

## What I Learned

This project helped reinforce how a larger program can be separated into multiple files instead of placing all functionality inside `main.cpp`.

I also gained more experience with validating user input, creating reusable functions, designing a basic C++ class, and storing multiple objects inside a dynamic collection.

## Future Improvements

Possible improvements I may add as I continue learning C++ include:

* Additional character attributes such as attack, defense, and level
* More character classes
* Character editing and deletion
* Saving and loading characters from a file
* Improved string and whitespace validation
* Randomized character statistics
* A basic combat system
* Additional use of modern C++ practices

## Purpose

This repository is intended to document my progress learning C++ and demonstrate my understanding of programming fundamentals.

It is maintained as a personal portfolio and learning project rather than as a solution for academic coursework.

## Author

**Jacob Borton**

Business Administration / Cybersecurity student developing skills in programming, cybersecurity, and technology.
