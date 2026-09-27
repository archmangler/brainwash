# Exercises

Guided drill problems. The learner fills in `TODO` bodies. Tests live in `test_*.c` (they `#include` the exercise `.c` or call exported functions).

```bash
make test WEEK=01 DAY=01
```

## Layout

```
exercises/week-WW/day-DD/
  README.md       # what today's node is
  ex_*.c          # implementation (learner)
  test_*.c        # harness (do not weaken these to "pass")
```

New days: copy `week-01/day-01` and change the functions. Do not add locked-graph topics.
