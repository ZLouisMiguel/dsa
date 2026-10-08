# C++ DSA Course Structure

This repository is the practical workspace for rebuilding my C++ Data Structures and Algorithms knowledge and becoming capable of solving LeetCode problems independently.

The sequence follows the topic progression in the [GeeksforGeeks DSA Tutorial](https://www.geeksforgeeks.org/dsa/introduction-to-dsa/) and the [C++ DSA guide](https://www.geeksforgeeks.org/cpp/learn-dsa-in-cpp/). The repository examples are supporting material; the real measure of progress is whether I can recognize a pattern, explain the solution, implement it, and analyze its complexity without copying.

## Status legend

- **Review** — the repository contains related examples, but the topic must be refreshed and tested.
- **Partial** — some examples exist, but important patterns or implementations are missing.
- **Next** — this is a priority topic to study next.
- **Planned** — not started yet.
- **Practice** — problem-solving material rather than a course chapter.

## Learning sequence

### 00. Foundations — Review

Location: [`00-foundations/`](00-foundations/)

- [ ] C++ input/output, conditionals, loops, functions, references, pointers
- [ ] Classes, structs, constructors, templates, const-correctness
- [ ] Arrays, `std::string`, `std::vector`, `std::pair`
- [ ] STL containers: `vector`, `stack`, `queue`, `deque`, `set`, `map`, `unordered_map`
- [ ] Iterators, range-based loops, custom comparators, sorting with STL
- [ ] Time complexity and space complexity
- [ ] Big-O, Big-Theta, Big-Omega, and basic recurrence analysis

### 01. Mathematics and Recursion — Partial

Location: [`01-mathematics-recursion/`](01-mathematics-recursion/)

- [ ] Digit operations, divisibility, primes, factors, GCD, LCM
- [ ] Modular arithmetic and overflow awareness
- [ ] Basic recursion: base cases, recursive cases, call-stack tracing
- [ ] Recursion complexity and recurrence relations
- [ ] Factorial, power, Fibonacci, GCD, and tree recursion
- [ ] Introduction to divide and conquer

### 02. Arrays, Strings, and Matrices — Partial / Next

Location: [`02-arrays-strings/`](02-arrays-strings/)

- [ ] Traversal, insertion, deletion, rotation, and in-place updates
- [ ] Frequency counting and hashing with arrays or maps
- [ ] Prefix sums and difference arrays
- [ ] Two pointers
- [ ] Fixed-size sliding window
- [ ] Variable-size sliding window
- [ ] Subarrays, subsequences, and subarray sums
- [ ] Kadane’s algorithm
- [ ] Matrix traversal, rotation, spiral order, and grid modeling
- [ ] String normalization, parsing, frequency maps, and character windows

### 03. Searching and Sorting — Partial

Location: [`03-searching-sorting/`](03-searching-sorting/)

- [ ] Linear search
- [ ] Binary search and boundary handling
- [ ] Binary search on the answer
- [ ] Selection sort, insertion sort, bubble sort
- [ ] Merge sort and divide-and-conquer reasoning
- [ ] Quick sort and partitioning
- [ ] Counting, radix, and heap sort concepts
- [ ] Know when sorting is useful as a preprocessing step

### 04. Hashing — Review

Location: [`04-hashing/`](04-hashing/)

- [ ] `map` versus `unordered_map`
- [ ] Frequency tables and membership checks
- [ ] Duplicate detection and counting complements
- [ ] Two-sum-style lookups
- [ ] Grouping and canonical keys
- [ ] Prefix-sum plus hash-map problems
- [ ] Collision handling and basic custom hash-table design

### 05. Linked Lists — Next

Location: [`05-linked-lists/`](05-linked-lists/)

- [ ] Singly linked list operations
- [ ] Doubly linked lists
- [ ] Reversal, middle node, and fast/slow pointers
- [ ] Cycle detection and cycle entry
- [ ] Merge two sorted lists
- [ ] Remove the nth node from the end
- [ ] Linked-list sorting and merging
- [ ] Understand ownership and cleanup of dynamically allocated nodes

### 06. Stacks, Queues, and Deques — Partial

Location: [`06-stacks-queues/`](06-stacks-queues/)

- [ ] Array-backed and linked-list-backed stacks
- [ ] Array-backed and linked-list-backed queues
- [ ] Circular queues and deques
- [ ] Balanced parentheses and expression parsing
- [ ] Monotonic stack
- [ ] Next greater/smaller element
- [ ] Min stack and largest rectangle in a histogram
- [ ] BFS queue usage

### 07. Trees and Binary Search Trees — Partial

Location: [`07-trees/`](07-trees/)

- [ ] Tree terminology and recursive thinking
- [ ] Preorder, inorder, postorder, and level-order traversal
- [ ] Height, depth, node count, and tree properties
- [ ] Binary search tree search, insertion, and deletion
- [ ] Lowest common ancestor
- [ ] Balanced trees and diameter
- [ ] Path-sum and view-based problems
- [ ] Serialization and deserialization concepts

### 08. Heaps and Priority Queues — Planned

Location: [`08-heaps/`](08-heaps/)

- [ ] Min-heaps and max-heaps
- [ ] Array representation and heapify
- [ ] Insert, extract, and update operations
- [ ] Heap sort
- [ ] C++ `priority_queue`
- [ ] Top-k and kth-element problems
- [ ] Merge k sorted structures

### 09. Graphs — Partial

Location: [`09-graphs/`](09-graphs/)

- [ ] Adjacency matrix, adjacency list, and edge list
- [ ] BFS and DFS
- [ ] Connected components and reachability
- [ ] Cycle detection in directed and undirected graphs
- [ ] Topological sorting
- [ ] Bipartite graph checking
- [ ] Shortest paths: BFS, Dijkstra, and Bellman-Ford concepts
- [ ] Minimum spanning trees: Prim and Kruskal
- [ ] Disjoint-set union
- [ ] Grid problems as graphs

### 10. Greedy Algorithms — Planned

Location: [`10-greedy/`](10-greedy/)

- [ ] Recognizing greedy structure
- [ ] Activity and interval selection
- [ ] Sorting-based greedy solutions
- [ ] Exchange arguments and local-choice reasoning
- [ ] Greedy graph algorithms
- [ ] Know when greedy fails and DP is required

### 11. Backtracking — Planned

Location: [`11-backtracking/`](11-backtracking/)

- [ ] Decision trees and state restoration
- [ ] Subsets and subsequences
- [ ] Permutations and combinations
- [ ] Combination sum
- [ ] N-Queens and constraint search
- [ ] Pruning and duplicate handling

### 12. Dynamic Programming — Planned

Location: [`12-dynamic-programming/`](12-dynamic-programming/)

- [ ] Identify overlapping subproblems and optimal substructure
- [ ] Define state, transition, base case, and iteration order
- [ ] Memoization versus tabulation
- [ ] One-dimensional DP
- [ ] Grid DP
- [ ] 0/1 knapsack and unbounded knapsack
- [ ] Subsequence DP: LCS, LIS, and variants
- [ ] Partition and interval DP
- [ ] Space optimization

### 13. Advanced Structures — Planned

Location: [`13-advanced/`](13-advanced/)

- [ ] Tries
- [ ] Union-find / DSU
- [ ] Fenwick trees
- [ ] Segment trees
- [ ] Bit manipulation patterns
- [ ] Only move here after the core LeetCode patterns are comfortable

### Practice lane — Ongoing

Locations: [`practice/hackerrank/`](practice/hackerrank/) and [`practice/mixed/`](practice/mixed/)

Use these directories for challenge problems, language exercises, and problems that combine multiple course topics.

## Study loop for each topic

1. Study the GFG explanation and write a short summary in your own words.
2. Implement the core data structure or algorithm from memory.
3. Write down time complexity, space complexity, and important invariants.
4. Solve 3 easy problems to learn the pattern.
5. Solve 5–10 medium problems without immediately reading solutions.
6. If stuck, first write the brute-force solution and inspect the constraints.
7. After reading a solution, close it and reimplement the idea from memory.
8. Re-solve missed problems after 1 day, 3 days, and 7 days.
9. Record the mistake and the pattern in the problem notes.

## Problem-solving protocol

Before coding, answer:

1. What are the input constraints?
2. What is the brute-force approach?
3. What repeated work can be removed?
4. Which data structure gives the needed operation efficiently?
5. What invariant remains true during the algorithm?
6. What are the time and space complexities?
7. Which edge cases can break the implementation?

Spend roughly 20–30 focused minutes attempting a problem before consulting a hint. The goal is not to solve every problem immediately; it is to improve the quality of the reasoning process.

## Completion standard

A topic is considered solid when I can:

- Explain the main ideas without notes.
- Implement the core technique in C++ from memory.
- State the expected time and space complexity.
- Solve several easy and medium problems using the technique.
- Recognize when the technique does not apply.
- Re-solve previously missed problems later without copying.
