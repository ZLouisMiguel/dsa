# DSA Course-Aligned Repository Design

## Goal

Restructure the repository around the GeeksforGeeks DSA learning sequence so it can serve as a practical study workspace for rebuilding C++ DSA fundamentals and progressing toward independent LeetCode problem solving.

## Approved scope

- Remove all generated `.exe` files through the repository Makefile.
- Preserve existing learning examples by moving them with Git-aware renames.
- Organize the repository into numbered course stages.
- Add placeholders for course topics not yet implemented.
- Add `COURSE_STRUCTURE.md` as the learner-facing syllabus and progress checklist.
- Update `README.md` and the Makefile to describe and support the new layout.
- Leave the untracked `hello-world.c` file untouched and uncommitted.
- Do not fix unrelated algorithm defects as part of the reorganization.
- Commit the changes on `main` and push them to `origin/main`.

## Repository layout

```text
00-foundations/
  cpp/
  stl/
  modules/
01-mathematics-recursion/
  recursion/
02-arrays-strings/
  arrays/
  strings/
  matrices/
03-searching-sorting/
  searching/
  sorting/
04-hashing/
05-linked-lists/
06-stacks-queues/
  stack/
  queue/
07-trees/
08-heaps/
09-graphs/
10-greedy/
11-backtracking/
12-dynamic-programming/
13-advanced/
  tries/
  segment-tree/
  union-find/
practice/
  hackerrank/
  mixed/
```

## Mapping rules

- `fundamentals` moves to `00-foundations/cpp`.
- `stl` moves to `00-foundations/stl`.
- `modules-prac` moves to `00-foundations/modules`.
- `recursion` moves to `01-mathematics-recursion/recursion`.
- Relevant array, string, and matrix examples move out of `randomQns`; remaining mixed challenge examples move to `practice/hackerrank`.
- `sorting` moves to `03-searching-sorting/sorting`.
- `mapsHash` moves to `04-hashing`.
- Linked-list examples move to `05-linked-lists` where they are standalone; stack and queue implementations remain grouped under `06-stacks-queues`.
- `trees` moves to `07-trees`.
- `graphs` moves to `09-graphs`.
- Empty or not-yet-started course areas receive focused README placeholders rather than fabricated implementations.

## Build and cleanup behavior

The `clean` Makefile target must recursively remove `.exe` files on Windows with PowerShell and on Unix-like systems with `find`. The repository does not gain a full multi-target build system in this change because its examples are intentionally independent programs.

## Success criteria

- `mingw32-make clean` exits successfully and leaves no `.exe` files under the repository.
- Every tracked source file is present in the new course-aligned location.
- `COURSE_STRUCTURE.md` explains the sequence, current coverage, missing topics, and the problem-solving loop.
- C++ syntax checks still identify the known pre-existing source issues without introducing path-related failures.
- Git history records the reorganization and documentation changes on `main`, and `origin/main` contains the commit.
