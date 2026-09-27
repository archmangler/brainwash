# Week 1 / Day 1 — Toolchain and integers

**Nodes:** W1.1 (unlocking), first look at W1.2.

## Predict (warm-up)

Without running, write what you think this prints, then compile it:

```c
#include <stdio.h>
int main(void) {
    printf("%d\n", (int)sizeof(int));
    return 0;
}
```

On this machine the answer is a number of bytes, not "the maximum int". If you said 32767 or 2^31-1, that is a type-vs-range mix-up: log it.

## Guided

1. `ex_saturate.c` — `saturate_add` must not wrap past 100.
2. Tests: `make test WEEK=01 DAY=01`

## Kata

`strlen` — see `katas/strlen.c` (`make kata KATA=strlen`).

## Stretch

Write `clamp` in `ex_saturate.c` if the add is already clean: clamp `x` into `[lo, hi]`.
