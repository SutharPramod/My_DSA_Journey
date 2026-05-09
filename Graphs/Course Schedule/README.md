# Course Schedule

## Problem Statement

There are a total of `n` courses labeled from `0` to `n - 1`. You are given a list of prerequisite pairs `prerequisites` where `prerequisites[i] = [a, b]` indicates that you must complete course `b` before taking course `a`.

Determine if it is possible to finish all courses.

## Input

- The first line contains an integer `n`, the number of courses.
- The second line contains an integer `m`, the number of prerequisite pairs.
- The next `m` lines each contain two integers `a` and `b`, representing a prerequisite pair.

## Output

- Print `"true"` if it is possible to finish all courses, otherwise print `"false"`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `0 ≤ m ≤ 10^5`
- `0 ≤ a, b < n`
- All pairs `(a, b)` are distinct.

## Examples

### Example 1
Input:
2
1
1 0
Output:
true

### Example 2
Input:
2
2
1 0
0 1
Output:
false

### Example 3
Input:
4
3
1 0
2 1
3 2
Output:
true

## Notes

- The problem can be modeled as a directed graph.
- A cycle in the graph makes it impossible to complete all courses.
- You need to determine whether the directed graph contains a cycle.