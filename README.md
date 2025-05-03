# Tic-Tac-Toe (C++) – CS1 Honors Project

### 📝 Project Overview
This is a command-line implementation of the classic **Tic-Tac-Toe** game developed in C++ for the CS1 Honors Project at Las Positas College. The game supports two players and uses standard input/output to manage gameplay. It demonstrates core programming concepts such as control structures, arrays, loops, functions, and conditional logic.

---

### 🎮 Features
- Two-player turn-based game
- Real-time board updates after each move
- Input validation to prevent illegal moves
- Automatic screen clearing after each turn (platform-specific)
- Win and draw detection logic

---

### 🧠 Concepts Demonstrated
- **2D Arrays** for board representation
- **Functions** for modular code organization (`display_board`, `player_turn`, `gameover`, `clearScreen`)
- **Loops and conditionals** for game flow control
- **Recursion** for input correction
- **Preprocessor directives** (`#ifdef`, `#else`, `#endif`) for cross-platform compatibility

---

### 💻 How to Run

#### 🪟 On Windows:
1. Open **Visual Studio** or any C++ compiler
2. Paste the code into a `.cpp` file (e.g., `tic_tac_toe.cpp`)
3. Build and run the program
4. Use numbers 1–9 to make your moves

#### 🐧 On Linux/macOS:
1. Save the code to a `.cpp` file
2. Compile it with `g++`:
   ```bash
   g++ tic_tac_toe.cpp -o tic_tac_toe
   ./tic_tac_toe
