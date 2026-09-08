# RPG Character Builder (C++)

A console-based C++ application that walks a user through creating one or more role-playing game characters, validates every input, and prints a formatted roster back to the screen.

## What it demonstrates

- **Object-oriented design** — a `GameCharacter` class with private data members (`name`, `type`, `health`) accessed only through getters/setters.
- **Two constructors** — a default constructor paired with setters, and a parameterized constructor, both shown side-by-side for the same character.
- **Input validation** — a dedicated `Validation` module rejects blank names, non-numeric or out-of-range health values, and character types outside a fixed set (`Warrior`, `Mage`, `Rogue`), re-prompting until the input is valid.
- **Multi-file project structure** — class declaration/definition and utility functions are split into their own header/source files rather than living in one `main.cpp`.
- **Collections** — a `vector<GameCharacter>` lets the user build a roster of any size, then displays every character at the end.
