# RPG Character Builder (C++)

A console-based C++ application that walks a user through creating and managing a roster of role-playing game characters, validating inputs, and outputting formatted character details.

---

## Encouragement for Learners

If you are just getting started with C++, welcome! Learning C++ can feel intimidating at first. Before taking my first C++ class, I was genuinely scared of how difficult it might be. However, through hands-on project builds like this, I managed to earn a 97% final grade in the course. If I can do it, I know you can too. Taking on practical projects is one of the most rewarding ways to build your confidence and master programming fundamentals.

Feel free to use this repository however you would like:

- **As a learning reference:** Use this codebase to cross-check your logic, object structure, or input-validation loops if you are working on a similar assignment.
- **As a practice playground:** Fork the repository, experiment with the code, add new features (such as inventory management or combat stats), or refactor it into your own custom creation.

---

## What It Demonstrates

- **Object-Oriented Design** — A `GameCharacter` class with private data members (`name`, `type`, `health`) accessed exclusively via getter and setter methods.
- **Multiple Constructors** — Demonstrates both a default constructor (paired with setters) and a parameterized constructor side-by-side.
- **Input Validation** — A dedicated `Validation` module that catches blank names, non-numeric input, out-of-range health values, and restricted character types (`Warrior`, `Mage`, `Rogue`).
- **Multi-File Structure** — Clean modular layout separating class declarations (`.h`), class definitions (`.cpp`), and helper utilities from `main.cpp`.
- **Dynamic Collections** — Leverages `std::vector<GameCharacter>` to store and print a custom-sized roster at runtime.

---

## Repository Files

| File | Purpose |
| --- | --- |
| `main.cpp` | Program entry point; manages prompts and builds the character roster |
| `GameCharacter.h` / `GameCharacter.cpp` | Class declaration and implementation for `GameCharacter` |
| `Validation.h` / `Validation.cpp` | Reusable input-validation functions |

---

## Build & Run

### Command Line (g++)

```bash
g++ -o CharacterBuilder main.cpp GameCharacter.cpp Validation.cpp
./CharacterBuilder
```

### Visual Studio (Windows)

**Installing Visual Studio**

If you do not have Visual Studio installed yet:

1. Download the free [Visual Studio Community Edition](https://visualstudio.microsoft.com/vs/community/).
2. During installation in the Visual Studio Installer, make sure to check the workload box for **Desktop development with C++**.

> **Beginner Tip:** If the interface feels overwhelming, search YouTube for "Visual Studio C++ beginner tutorial" to see how others set up their workspace. Don't be afraid to mess around with the buttons and menus — getting comfortable clicking around the IDE is one of the best ways to learn!

**Running the Project**

1. Open Visual Studio and select **Create a new project** → **C++ Console App** (or **Empty Project**).
2. In Solution Explorer, right-click **Header Files** → **Add > Existing Item...** and select `GameCharacter.h` and `Validation.h`.
3. Right-click **Source Files** → **Add > Existing Item...** and select `GameCharacter.cpp`, `Validation.cpp`, and `main.cpp`.
4. Press **Ctrl + F5** (or click **Start Without Debugging**) to compile and run.

---

## Sample Output

```
Enter the character's name: Phillip
Enter the character's type (Warrior, Mage, or Rogue): Rogue
Enter the character's health (1-100): 100

Character created with default constructor + setters:
--- Character Details ---
Name:   Phillip
Type:   Rogue
Health: 100

Character created with parameterized constructor:
--- Character Details ---
Name:   Phillip
Type:   Rogue
Health: 100
```
