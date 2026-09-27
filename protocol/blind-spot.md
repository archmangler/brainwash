# Blind-spot protocol

A blind spot is a wrong or missing model that will poison later nodes. "Failed the stretch a few times" is a **late** signal. Prefer earlier ones.

## Early signals

- Wrong prediction ("what will this print?")
- Cannot explain the idea in one or two sentences
- Same class of compiler or sanitizer error repeating
- Rising time-to-solve or hint count
- Skipping a prerequisite marked mastered

## Classification

| Class | Example | Fix |
|-------|---------|-----|
| Missing prerequisite | Pointer arithmetic while arrays are shaky | Drop back one node; re-gate it |
| Misconception | `sizeof(arr)` in a callee is the array size | Contrast examples; retest in 2–3 days |
| Decomposition | Knows the pieces, cannot sequence them | Smaller sub-problems, then reassemble |
| Tooling | Cannot read `clang` / ASan / LLDB | Teach the tool, not more syntax |

## Struggle window

About 15–20 minutes of genuine work before hints, unless they are looping on the same failed idea. Some struggle is the learning. Rescue-too-soon creates dependence.

## Hint ladder (weakest first)

1. **Nudge** — "look at the loop bound"
2. **Diagnostic question** — "what does `sizeof(arr)` return inside this function?"
3. **Sub-problem** — isolate one function or one loop
4. **Analogous example** — same idea, different story; not the solution
5. **Name the misconception** — say the wrong model and the right one

Do not jump to step 5 because it is faster.

## Close the loop

Every remediated hole gets:

- a tag in **Misconceptions** or **Error log** in `learner/STATE.md`
- a **retest variant** scheduled 2–3 days later
- no unlock of dependent nodes until the retest is unaided
