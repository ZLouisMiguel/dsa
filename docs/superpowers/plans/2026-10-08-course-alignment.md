# Course-Aligned Repository Restructure Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Reorganize the C++ learning repository around the approved GeeksforGeeks DSA sequence, document the course path, and push the verified result to `origin/main`.

**Architecture:** Use numbered top-level course stages and retain independent examples inside the stage where they teach the relevant concept. Use Git-aware moves for existing files, README placeholders for not-yet-implemented topics, and keep the repository’s standalone-program model unchanged.

**Tech Stack:** C++17 examples, GNU Make-compatible Makefile, PowerShell on Windows, Git.

**Spec:** `docs/superpowers/specs/2026-10-08-course-alignment-design.md`

## Global Constraints

- Leave the untracked `hello-world.c` file untouched and uncommitted.
- Remove generated executables only through the Makefile’s `clean` target.
- Do not fix unrelated algorithm defects during the reorganization.
- Preserve existing examples through Git-aware renames wherever possible.
- Commit the completed work on `main` and push it to `origin/main`.

## Review Focus

- The Windows cleanup command must remove nested `.exe` files without touching source files.
- Every existing tracked source file must have exactly one intended destination after the moves.
- Mixed practice examples must remain accessible even when they do not map cleanly to one course topic.
- Placeholder directories must be represented by tracked files so the course structure survives Git checkout.
- Documentation paths and examples must match the final on-disk layout.

### Task 1: Record the approved design and prepare cleanup

**Files:**
- Create: `docs/superpowers/specs/2026-10-08-course-alignment-design.md`
- Create: `docs/superpowers/plans/2026-10-08-course-alignment.md`
- Modify: `makefile`

**Interfaces:**
- Produces: the approved layout and cleanup contract used by later tasks.

- [x] **Step 1: Write the design and implementation plan.**
- [x] **Step 2: Update the Makefile with a Windows PowerShell cleanup branch and retain the Unix `find` branch.**
- [x] **Step 3: Run `mingw32-make clean` and verify recursively that no `.exe` files remain.**
- [ ] **Step 4: Commit the planning and cleanup changes.**

Expected verification: `mingw32-make clean` exits with status 0 and a recursive executable search returns `none`.

### Task 2: Move existing examples into the course layout

**Files:**
- Move: existing source directories into the destinations defined by the spec.
- Create: tracked README placeholders for unimplemented course stages.

**Interfaces:**
- Consumes: the mapping rules in the spec.
- Produces: the final numbered course directory tree with all existing examples retained.

- [ ] **Step 1: Create the destination directories and placeholder README files.**
- [ ] **Step 2: Move `fundamentals`, `stl`, `modules-prac`, `recursion`, `sorting`, `mapsHash`, `stack`, `queue`, `trees`, and `graphs` using `git mv`.**
- [ ] **Step 3: Split clearly identifiable array/string/matrix examples from `randomQns`; move the remaining challenge examples to `practice/hackerrank`.**
- [ ] **Step 4: List tracked source files before and after the moves and compare the sets.**
- [ ] **Step 5: Commit the repository reorganization.**

Expected verification: no tracked source file is lost, every intended destination exists, and `git status` shows only the planned moves and documentation.

### Task 3: Write learner-facing course documentation

**Files:**
- Create: `COURSE_STRUCTURE.md`
- Modify: `README.md`

**Interfaces:**
- Consumes: the final directory tree from Task 2.
- Produces: a course checklist that names each phase, current repository coverage, missing topics, and the repeatable GFG-to-LeetCode study loop.

- [ ] **Step 1: Write the course phases in learning order.**
- [ ] **Step 2: Add repository mappings, status markers, and the problem-solving workflow.**
- [ ] **Step 3: Update the root README with the purpose, layout, cleanup command, and course document link.**
- [ ] **Step 4: Verify every path mentioned in both documents exists.**
- [ ] **Step 5: Commit the course documentation.**

Expected verification: all documented paths resolve and the course document distinguishes implemented, review-needed, and not-yet-implemented topics.

### Task 4: Full verification and push

**Files:**
- Modify: none beyond the preceding tasks.

- [ ] **Step 1: Run `mingw32-make clean` again.**
- [ ] **Step 2: Run the repository-wide C++17 syntax check over every `.cpp` file.**
- [ ] **Step 3: Verify the intended untracked `hello-world.c` remains untouched and no `.exe` files exist.**
- [ ] **Step 4: Review the complete diff and Git status.**
- [ ] **Step 5: Commit any final verification-only documentation adjustments if needed.**
- [ ] **Step 6: Push `main` to `origin/main` without force.**
- [ ] **Step 7: Fetch/check the remote branch and confirm it contains the pushed commit.**

Expected verification: cleanup succeeds, the syntax check reports only the pre-existing compile issue in `trees/tree.cpp` after its move, the intended untracked file remains uncommitted, and the remote branch points to the new commit.
