# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Local LeetCode practice repo (本地刷题专用仓). Comments and docs are in Chinese. Two parts:

- `main.cpp` — single-file C++ STL playground: commented demos of common containers and algorithms
- `key_point.md` — 华为科目一 exam topic checklist: LeetCode problems grouped by pattern (双指针、滑动窗口、二分法、树、DFS/BFS、自定义排序、优先排序)

## Build & Run

```bash
g++ -std=c++17 -O2 -Wall main.cpp -o main && ./main
```

Caveats:

- Works with both GCC and Apple clang (on this Mac `/usr/bin/g++` is clang): `main.cpp` selects `<bits/stdc++.h>` via `__has_include` when available and otherwise falls back to individual standard headers.
- CMake (CLion, builds into `cmake-build-debug/`) requires C++17. No `cmake` on the CLI PATH — use the CLion-bundled binary `/Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake` when configuring from a terminal.

No tests or linter.

## Code Conventions

Demo functions come in pairs:

- `xxx_ops()` — reference example with inline comments
- `xxx_ops_xio()` — hands-on rewrite of the same operations, written from memory as practice

When practising, `main()` calls the `_xio` variant currently being worked on (right now `algo_ops_xio()`); reference functions stay uncalled. New practice work follows this naming pattern.

## Development Environment

- VS Code (`.vscode/`): `Ctrl+Shift+B` compiles the active file, "compile and run" task builds+runs, `F5` debugs with gdb
- CLion config in `.idea/` (untracked, along with `cmake-build-debug/`)
