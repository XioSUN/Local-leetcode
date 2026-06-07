# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

C++ STL playground / competitive programming reference sheet. A single-file project (`main.cpp`) containing commented examples of common STL containers and algorithms. Comments are in Chinese.

## Build & Run

```bash
# Compile current file
g++ -std=c++17 -O2 -Wall main.cpp -o main

# Compile and run
g++ -std=c++17 -O2 -Wall main.cpp -o main && ./main
```

No build system (Makefile/CMake) — direct g++ compilation only.

## Architecture

Single-file structure. `main.cpp` is the only source file, organized into self-contained demonstration functions:

- `io_speedup()` — fast IO setup for competitive programming
- `input_patterns()` / `output_demo()` — IO patterns
- `vector_ops()`, `string_ops()`, `container_adapters()`, `deque_ops()` — container demos
- `set_ops()`, `map_ops()`, `pair_ops()`, `bitset_ops()` — associative containers & utilities
- `algo_ops()`, `numeric_ops()` — `<algorithm>` and `<numeric>` demos

Each function is independent — `main()` only calls `io_speedup()`. Uses `#include <bits/stdc++.h>` (GCC-only header).

## Development Environment

VS Code configured with:
- **Build**: `Ctrl+Shift+B` compiles active file
- **Build+Run**: "compile and run" task
- **Debug**: `F5` with gdb (pretty-printing enabled)
