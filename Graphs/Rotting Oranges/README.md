# Rotting Oranges

## Problem Statement

You are given an `m x n` grid where each cell can have one of the following values:

- `0` representing an empty cell,
- `1` representing a fresh orange,
- `2` representing a rotten orange.

Every minute, any fresh orange that is **4-directionally adjacent** (up, down, left, right) to a rotten orange becomes rotten.

Return the minimum number of minutes required so that no cell has a fresh orange. If it is impossible, return `-1`.

## Input

- The first line contains two integers `m` and `n`, representing the number of rows and columns.
- The next `m` lines each contain `n` space-separated integers (`0`, `1`, or `2`) representing the grid.

## Output

- Print a single integer representing the minimum number of minutes required to rot all oranges, or `-1` if impossible.

## Constraints

- `1 ≤ m, n ≤ 1000`
- `grid[i][j] ∈ {0, 1, 2}`

## Examples

### Example 1


Input:
3 3
2 1 1
1 1 0
0 1 1

Output:
4


### Example 2


Input:
3 3
2 1 1
0 1 1
1 0 1

Output:
-1


### Example 3


Input:
1 2
0 2

Output:
0


## Notes

- Rotting spreads simultaneously to all adjacent fresh oranges in each minute.
- Only 4-directional adjacency is considered (no diagonal spread).
- If there are no fresh oranges initially, the answer is `0`.