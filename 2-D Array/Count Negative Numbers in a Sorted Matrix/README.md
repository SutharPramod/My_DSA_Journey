# LeetCode 1351. Count Negative Numbers in a Sorted Matrix

## Problem Statement
Given a `m x n` matrix `grid` which is sorted in non-increasing order both row-wise and column-wise, return the total number of **negative numbers** present in the matrix.

## Input
- The first line contains two space-separated integers `m` and `n`, representing the number of rows and columns in the matrix respectively.
- The next `m` lines each contain `n` space-separated integers representing the elements of the matrix.

## Output
- Print a single integer representing the total count of negative numbers in the grid.

## Constraints
- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 100`
- `-100 <= grid[i][j] <= 100`

## Examples

### Example 1
Input:
4 4
4 3 2 -1
3 2 1 -1
1 1 -1 -2
-1 -1 -2 -3

Output:
8

**Explanation:** There are 8 negative numbers in the matrix: `[-1, -1, -1, -2, -1, -1, -2, -3]`.

### Example 2
Input:
2 2
3 2
1 0

Output:
0

**Explanation:** There are no negative numbers in the matrix.