# Skill graph (C track)

A node is **mastered** after three unaided solves of different variants, including one at least two days later. Do not unlock a node until all prerequisites are mastered.

Status lives in `learner/STATE.md`. This file is the map.

Levels: `locked` | `unlocking` | `mastered`

## Week 1 — Foundation

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W1.1 | Toolchain: compile, warnings as errors, run, `make` | — |
| W1.2 | Types, sizes, integer representation, signed vs unsigned | W1.1 |
| W1.3 | Control flow: `if`, loops, `switch` | W1.2 |
| W1.4 | Functions, prototypes, stack frames (mental model) | W1.3 |
| W1.5 | Debugger: breakpoint, step, inspect locals (LLDB) | W1.1 |

## Week 2 — Memory as addresses

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W2.1 | Arrays and indexing | W1.4 |
| W2.2 | C strings, null terminator, `strlen`/`strcpy` hazards | W2.1 |
| W2.3 | Pointers, `*` and `&`, pointer arithmetic | W2.1 |
| W2.4 | `const`, passing pointers into functions | W2.3 |

## Week 3 — Ownership

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W3.1 | Stack vs heap | W2.4 |
| W3.2 | `malloc` / `free`, NULL checks | W3.1 |
| W3.3 | Structs, arrays of structs | W1.4 |
| W3.4 | Sanitizers (ASan/UBSan) as a habit | W3.2 |
| W3.5 | Who owns which buffer | W3.2, W3.3 |

## Week 4 — Data structures and files

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W4.1 | Dynamic array | W3.5 |
| W4.2 | Singly linked list | W3.5 |
| W4.3 | Hash table (chaining, simple) | W4.1 or W4.2 |
| W4.4 | Headers, multiple `.c` files, Make | W1.4 |

## Week 5 — Bits, I/O, the machine

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W5.1 | Bitwise ops, masks, shifts | W1.2 |
| W5.2 | File I/O (`fopen` / `read` style as taught) | W3.5 |
| W5.3 | Preprocessor: include guards, macros (when not to) | W4.4 |
| W5.4 | Error handling conventions | W3.5 |
| W5.5 | Read `clang -S` for a small function | W1.4, W2.3 |

## Week 6 — Abstraction and UB

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W6.1 | Function pointers | W1.4, W2.3 |
| W6.2 | Generic code with `void *` (and why it is dangerous) | W6.1, W3.2 |
| W6.3 | Arena / bump allocator (small) | W3.5 |
| W6.4 | Catalogue of undefined behaviour | W3.4, W2.3 |

## Week 7 — Systems slice

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W7.1 | POSIX file descriptors, `read`/`write` | W5.2 |
| W7.2 | Processes / `fork` (mental model + one program) | W1.4 |
| W7.3 | Cost of memory, cache-aware loops (observe, don't overclaim) | W2.1, W3.1 |

## Week 8 — Capstone

| ID | Skill | Prerequisites |
|----|--------|----------------|
| W8.1 | Capstone: tokenizer + tiny VM **or** small allocator | W4.*, W5.*, W6.4 |

## Later tracks (not this graph)

- **C++ track:** after W3.5 and W4.4 are mastered. New graph (RAII, types, templates).
- **Assembly track:** W5.5 expands into a real ISA course; not a parallel 8-week dump during C.

## Locked-skill rule

Projects, puzzles, and cert study may not introduce a locked node unless the tutor adds it and drills it first.
