# LeetCode 1901. Find a Peak Element II

## Problem Statement
A **peak element** in a 2D grid is an element that is **strictly greater** than all of its adjacent neighbors to the left, right, top, and bottom.

Given a 0-indexed `m x n` matrix `mat` where no two adjacent cells are equal, find any peak element `mat[i][j]` and return its 0-indexed position `[i, j]`.

You must write an algorithm that runs in $O(m \log n)$ or $O(n \log m)$ time complexity.

Note:
- Elements outside the grid boundaries are assumed to have a value of `-1`.

## Input
- The first line contains two integers `m` and `n`, representing the matrix dimensions.
- The next `m` lines each contain `n` space-separated integers representing the matrix `mat`.

## Output
- Print two space-separated integers representing the row and column index `[i, j]` of any peak element.

## Constraints
- `m == mat.length`
- `n == mat[i].length`
- `1 <= m, n <= 500`
- `1 <= mat[i][j] <= 10^5`
- No two adjacent cells are equal.

## Examples

### Example 1
Input:
2 3
1 4 3
6 5 2

Output:
1 0

**Explanation:** Both 6 (at index `[1, 0]`) and 4 (at index `[0, 1]`) are peak elements. Returning `[1, 0]` or `[0, 1]` is valid.

### Example 2
Input:
3 3
10 20 15
21 30 14
7 16 32

Output:
1 1

**Explanation:** Both 30 (at index `[1, 1]`) and 32 (at index `[2, 2]`) are peak elements.