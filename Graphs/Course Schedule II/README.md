# Course Schedule II

## Problem Statement

There are a total of `n` courses labeled from `0` to `n - 1`. You are given a list of prerequisite pairs `prerequisites` where `prerequisites[i] = [a, b]` indicates that you must complete course `b` before taking course `a`.

Return a valid order in which you can complete all courses. If there are multiple valid orders, return any one of them. If it is impossible to finish all courses, return an empty list.

## Input

- The first line contains an integer `n`, the number of courses.
- The second line contains an integer `m`, the number of prerequisite pairs.
- The next `m` lines each contain two integers `a` and `b`, representing a prerequisite pair.

## Output

- Print a sequence of `n` integers representing a valid order of courses.
- If it is not possible to complete all courses, print an empty line.

## Constraints

- `1 ≤ n ≤ 10^5`
- `0 ≤ m ≤ 10^5`
- `0 ≤ a, b < n`
- All pairs `(a, b)` are distinct.

## Examples

### Example 1
Input:
4
4
1 0
2 0
3 1
3 2

Output:
0 1 2 3

### Example 2
Input:
2
1
1 0

Output:
0 1

### Example 3

Input:
2
2
1 0

Output:
0 1


## Notes

- The problem can be modeled as a directed graph.
- You need to find a valid topological ordering of the graph.
- If the graph contains a cycle, no valid ordering exists.