# learncpp

Minimal repository for learncpp.com exercises with clear chapter/lesson separation.

## Structure

```
chapters/
  chapter-01/
    lesson-01/
    lesson-02/
  chapter-02/
    lesson-01/
```

## Shortcuts (VS Code)

The tasks in `.vscode/tasks.json` and `.vscode/launch.json` always act on the **file open in the active editor**. The executable is written to `build/<file name without extension>`.

| Shortcut | Action | Task / configuration |
| --- | --- | --- |
| `Ctrl+Shift+B` | Compile + link the active file (debug, `-ggdb -O0`) | `g++ build active file (debug)` |
| `F5` | Compile + link, then run under the debugger (gdb) | `Debug active file (gdb)` |
| `Ctrl+F5` | Compile + link, then run without debugging | `Debug active file (gdb)` |
| `Ctrl+Shift+P` → *Tasks: Run Test Task* | Compile + link, then run in a dedicated terminal | `run active file` |
| `Ctrl+Shift+P` → *Tasks: Run Task* | Choose any task, e.g. the optimized build | `g++ build active file (release)` |

Compilation and linking happen in a single `g++` call (no intermediate `.o` files), with `-std=c++20` and strict warnings treated as errors (`-Wall -Wextra -Weffc++ -Wconversion -Wsign-conversion -pedantic-errors -Werror`).

> `build/` is git-ignored: after a fresh clone, create it with `mkdir -p build` before the first build.

### From the terminal

```sh
# compile + link
g++ -std=c++20 -ggdb -O0 -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror \
    chapters/chapter-00/lesson-07/main.cpp -o build/main

# run
./build/main
```
