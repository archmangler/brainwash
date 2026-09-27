# Daily session protocol

Target: 60–75 minutes for the drill. Puzzle and project are separate blocks the same day.

## 0. Load context (tutor, 2 min)

Read `learner/STATE.md`. Note: current week/day, unlocked vs locked nodes, due reviews, open misconceptions, yesterday's puzzle/project outcome.

## 1. Retrieval warm-up (10 min)

Pick 2–3 items from the review queue (spaced retrieval). Forms:

- Predict output, then compile and run
- Write a 10–20 line function from memory
- Explain a concept in two sentences

Score each: unaided / hinted / failed. Failed items stay on the queue.

## 2. New concept (15 min)

One node (or a thin slice of a node). Order:

1. Short explanation (what it is, what it is not)
2. Worked example
3. Predict-then-run check

If the prediction is wrong, treat it as an early blind-spot signal. Do not wait for "several failed attempts" on the stretch problem.

## 3. Guided practice (20 min)

2–4 exercises under `exercises/` for the current day. Fade support:

- first: comments and a failing test
- last: blank function body, tests only

Run `make test WEEK=N DAY=N` when tests exist.

## 4. Fluency kata (10 min)

One file from `katas/`. Timer on. Blank file or wipe the body. No references.

Record time and pass/fail in `learner/STATE.md` under **Katas**.

```bash
make kata KATA=strlen
```

## 5. Stretch (15–25 min)

One problem just past current ability. Hint ladder applies (`protocol/blind-spot.md`).

If they fail the stretch after the ladder, classify the hole, schedule a variant in 2–3 days, and do **not** unlock the next node.

## 6. Reflection (5 min)

Learner: what was hard; one sentence in their own words.

Tutor updates:

- mastery ticks on nodes practised
- error log and misconception log
- review queue (due dates)
- tomorrow's intended node
- append a short entry to `learner/HISTORY.md`

## After the drill (same day, learner-owned)

1. **Puzzle:** `puzzles/` item for this week. No AI. Time-box 25–40 min. Log result in STATE.
2. **Project:** brief in `projects/`. Scope = unlocked nodes only. 60–90 min.
3. **Cert (if today is a light or exam-window day):** `certs/mapping.md`.
