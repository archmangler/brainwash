# Start here

If chat output is missing, this file is the same briefing.

## What this repo is

`brainwash` is the home of the C fluency program we designed:

1. Daily **AI-led drill** (the spine)
2. Daily **unassisted puzzle**
3. Daily **small project** on unlocked skills
4. A **cert** as a phase exam, not a third syllabus

## What to do now

1. In Cursor: **File → Open Folder…** → `/Users/traiano/Desktop/Code/brainwash`
2. Open `learner/STATE.md` and put your name and start date in **Identity**
3. New chat in that workspace: `Begin today's brainwash session.`
4. The tutor must follow `AGENTS.md`

## Commands

```bash
cd /Users/traiano/Desktop/Code/brainwash
make test WEEK=01 DAY=01    # expected FAIL until you implement TODOs
make kata KATA=strlen       # same
```

Day 1 work is in `exercises/week-01/day-01/`.
