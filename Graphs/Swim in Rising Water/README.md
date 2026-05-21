# Swim in Rising Water

## Problem Statement

You are given an `n x n` integer grid `grid` where each value represents the elevation at that cell.

Initially, the water level is `0`. At any time `t`, the water depth everywhere is `t`.

You can swim from one cell to another 4-directionally adjacent cell if both cells have elevation less than or equal to the current water level.

Return the minimum time required to reach the bottom-right cell `(n - 1, n - 1)` starting from the top-left cell `(0, 0)`.

## Input

- The first line contains an integer `n`, representing the size of the grid.
- The next `n` lines each contain `n` space-separated integers representing the elevation grid.

## Output

- Print a single integer representing the minimum time required to reach the destination.

## Constraints

- `1 ≤ n ≤ 100`
- `0 ≤ grid[i][j] < n²`
- All values in the grid are unique.

## Examples

### Example 1

```text
Input:
2
0 2
1 3

Output:
3
Example 2
Input:
5
0 1 2 3 4
24 23 22 21 5
12 13 14 15 16
11 17 18 19 20
10 9 8 7 6

Output:
16
Example 3
Input:
3
0 1 2
5 4 3
6 7 8

Output:
8

## Notes
- You may move only in 4 directions: up, down, left, and right.
- The water level increases uniformly over time.
- The answer is the minimum possible maximum elevation encountered along a valid path.