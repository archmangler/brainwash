# 8-week outline (C-first)

Calendar is a **default**. The skill graph wins if mastery is late.

| Week | Theme | Exit (can do unaided) |
|------|--------|------------------------|
| 1 | Toolchain, types, control, functions, debugger | Write, compile, debug a 40-line program |
| 2 | Arrays, strings, pointers, `const` | Walk memory with pointers; no off-by-one on strings |
| 3 | Heap, structs, sanitizers, ownership | Allocate, use, free; explain who owns the buffer |
| 4 | Dynamic array, list, hash table, multi-file Make | Split a small library across `.c`/`.h` |
| 5 | Bits, files, preprocessor, errors, `clang -S` | Read a short assembly dump and match it to C |
| 6 | Function pointers, `void *`, arenas, UB catalogue | Spot 5 UB patterns; write a callback table |
| 7 | POSIX I/O, processes, memory cost | One `fork` program; one fd-based copier |
| 8 | Capstone | Tokenizer + tiny VM, or a small allocator |

## After week 8

- 15 minutes/day: due reviews + one kata (maintenance).
- Next program: C++ Institute track **or** a real assembly track, new graph, same protocol.

## Cert placement

See `certs/mapping.md`. No C++ Institute exam during this C graph. A C-aligned mock or CLA-style exam is the week-8 / week-12 milestone.
