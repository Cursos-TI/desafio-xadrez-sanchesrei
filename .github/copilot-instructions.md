# Chess Movement Simulation - AI Coding Guidelines

## Project Overview
This is a C program implementing chess piece movements across three difficulty levels using loops and recursion. The codebase focuses on demonstrating control structures rather than a full chess engine.

## Architecture
- **Single-file design**: All logic in `xadrez.c` with procedural C approach
- **Level-based progression**: Novice (basic loops) → Adventurer (nested loops) → Master (recursion + advanced loops)
- **Movement simulation**: Pieces move by printing direction strings in loops, not actual board state

## Key Patterns & Conventions

### Movement Implementation
- Use constants for movement distances (e.g., `const int BISPO = 5;`)
- Print directions using specific strings: "Cima", "Baixo", "Esquerda", "Direita"
- Diagonal movements combine directions: `printf("Cima, Direita\n");`
- Loop bounds: Use `<=` for inclusive counting (e.g., `for (int t = 0; t <= TORRE; t++)`)

### Loop Usage by Level
- **Novice**: One loop type per piece (while for Bishop, for for Rook, do-while for Queen)
- **Adventurer**: Nested loops for Knight L-shape movement
- **Master**: Recursive functions for simple pieces, nested loops with continue/break for Knight

### Code Structure
- Include `<stdio.h>` only
- Main function contains all logic
- Comments in Portuguese following README style
- Variable naming: Portuguese for pieces (TORRE, BISPO, RAINHA), English for counters

## Development Workflow
- **Build**: Use VS Code C/C++ extension task: `C/C++: gcc.exe build active file`
- **Run**: Execute generated `.exe` file
- **Debug**: Use cppdbg debugger with active file

## Common Pitfalls
- Off-by-one errors in loop conditions (e.g., printing 6 times instead of 5)
- Incorrect direction combinations for diagonals
- Missing loop nesting for Knight movement
- Forgetting to decrement counters in while loops

## References
- [README.md](README.md): Challenge requirements and level descriptions
- [xadrez.c](xadrez.c): Current implementation with examples of each level