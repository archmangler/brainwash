# brainwash

A daily, AI-led C fluency program. The tutor leads an incremental path. You write every line of solution code. The compiler, sanitizers, and tests are the judge of correctness.

Home: https://github.com/archmangler/brainwash.git

## The four daily pieces

| Piece | Role | AI during the block |
|-------|------|---------------------|
| **Drill** (60–75 min) | Acquisition, diagnosis, spaced review | Leads; hint ladder after a struggle window |
| **Puzzle** (25–40 min) | One C problem, unassisted | None |
| **Project** (60–90 min) | Small program using unlocked skills | Scope only; no implementation |
| **Cert** (phase exam) | External syllabus + date | Maps objectives onto the skill graph |

The drill is inviolable. If time is short, shrink the project, not the drill or the puzzle.

## Quick start

1. Open this folder in Cursor.
2. Read [AGENTS.md](AGENTS.md) (the tutor reads this every session).
3. Open [learner/STATE.md](learner/STATE.md) and fill the header if it is still blank.
4. Start a chat: `Begin today's brainwash session.`
5. The tutor reads state, runs the [daily protocol](protocol/daily-session.md), and updates state at the end.

```bash
make test          # run the exercise harness
make kata KATA=strlen
```

## Layout

```
AGENTS.md                 Tutor operating rules (read first)
protocol/                 Session, hints, time budget
curriculum/               Skill graph + 8-week outline
learner/                  Persistent memory (state, history)
exercises/                Guided drills with tests
katas/                    Timed blank-file fluency drills
puzzles/                  Unassisted daily problems
projects/                 Scoped daily project briefs
certs/                    Certification mapping
harness/                  Test helpers + sanitizer flags
```

## Time budget (standard day)

- Drill: 60–75 min
- Puzzle: 25–40 min
- Project: 60–90 min
- Cert study: 0 most days; 20–30 min on light days; heavier in the exam window

See [protocol/time-budget.md](protocol/time-budget.md).

## Ground truth

Builds use `-Wall -Wextra -Werror` plus AddressSanitizer and UndefinedBehaviorSanitizer when the platform supports them. The tutor explains what the tools report. It does not override them.
