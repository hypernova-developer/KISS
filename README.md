# KISS (Kernel Instruction Syntax Simplifier)

KISS is an ultra-fast, lightweight kernel instruction and syntax simplification utility written in modern C++. It focuses heavily on minimalism and speed, parsing complex, redundant low-level system commands and simplifying their syntax layout directly within the console environment.

## Features
- **Syntax Simplification:** Strips down verbose and complex kernel instruction structures.
- **Pure-Power Architecture:** Built with zero overhead and minimal namespace pollution.
- **Fast Parsing Vectors:** Processes raw system string tokens at native execution speeds.
- **Clean Architecture:** Fully written with explicit Allman-style formatting and encapsulated within a dedicated local namespace.

## Usage
Run the executable followed by the complex kernel/system command string you want to simplify:
```bash
./kiss "SYS_ALLOC --kernel-space --target-memory=0x7FFF"
```
