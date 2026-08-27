# LeetCode 1030. Matrix Cells in Distance Order

## Problem Statement
You are given four integers `rows`, `cols`, `rCenter`, and `cCenter`. You are at the cell `(rCenter, cCenter)` in a grid of size `rows x cols`.

Return the coordinates of all cells in the matrix, sorted by their **Manhattan distance** from `(rCenter, cCenter)` from the smallest distance to the largest distance. You may return the answer in **any order** that satisfies this condition.

The **Manhattan distance** between two cells `(r1, c1)` and `(r2, c2)` is $|r1 - r2| + |c1 - c2|$.

## Input
- The first line contains four space-separated integers `rows`, `cols`, `rCenter`, and `cCenter`.

## Output
- Print `rows * cols` lines, each containing two space-separated integers representing the cell coordinates `[r, c]`.

## Constraints
- `1 <= rows, cols <= 100`
- `0 <= rCenter < rows`
- `0 <= cCenter < cols`

## Examples

### Example 1
Input:
1 2 0 0

Output:
0 0
0 1

**Explanation:** The distances from `(0, 0)` to other cells are:
- `dist(0,0) = |0-0| + |0-0| = 0`
- `dist(0,1) = |0-0| + |0-1| = 1`
Sorting cells by distance gives `[[0, 0], [0, 1]]`.

### Example 2
Input:
2 2 0 1

Output:
0 1
0 0
1 1
1 0

**Explanation:** The distances from `(0, 1)` are:
- `dist(0,1) = 0`
- `dist(0,0) = 1`
- `dist(1,1) = 1`
- `dist(1,0) = 2`
`[[0,1], [0,0], [1,1], [1,0]]` or `[[0,1], [1,1], [0,0], [1,0]]` are both valid outputs.

### Example 3
Input:
2 3 1 2

Output:
1 2
0 2
1 1
0 1
1 0
0 0