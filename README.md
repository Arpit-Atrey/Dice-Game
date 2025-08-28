# Dice Game

This is a simple C program that simulates a dice game. This project is my very first attempt to learn Git and GitHub.

## How to Run

You can build the project using CMake, which will place the build output in the `build/` folder.

### Using CMake (Recommended)

1. Make sure you have CMake and a C compiler (like GCC) installed.
2. Create a build directory and run CMake:
   ```sh
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```
3. Run the executable (from the `build` folder):
   ```sh
   ./Dice_Game.exe
   ```

### Manual Compilation (Optional)

If you want to compile manually without CMake:

```sh
gcc src/Dice_Game.c -o Dice_Game.exe
```

## Project Purpose

- Practice using Git for version control
- Learn how to push code to GitHub
- Get familiar with open source collaboration

## Files

- `.gitignore`: This file tells Git which files or patterns to ignore in the repository. For example, you can use it to prevent build files like executables (e.g., `a.exe`) or temporary files from being tracked by Git. This helps keep your repository clean and only includes source code and important files.
- `CMakeLists.txt`: The configuration file for CMake. It defines how the project is built and can be used to generate build files for different platforms and compilers.
- `build/`: This folder is ignored by Git (see `.gitignore`). It contains build outputs and temporary files generated during compilation, and should not be tracked in the repository.
- `src/`: This folder contains the source code for the dice game, including `Dice_Game.c`.
- `README.md`: This file

## Getting Started with Git and GitHub

1. Initialize a git repository:
   ```sh
   git init
   ```
2. Add your files:
   ```sh
   git add .
   ```
3. Commit your changes:
   ```sh
   git commit -m "Initial commit"
   ```
4. Create a repository on GitHub and follow the instructions to push your code.

---

Happy coding!
