# LeetCode 1572. Matrix Diagonal Sum

## Problem Statement
Given a square matrix `mat`, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

- The **primary diagonal** involves elements `mat[i][i]` where `i` is the index of the row and column.
- The **secondary diagonal** involves elements `mat[i][n - 1 - i]` where `n` is the number of rows/columns.

## Input
- The first line contains an integer `n`, representing the number of rows and columns in the square matrix.
- The next `n` lines each contain `n` space-separated integers, representing the elements of the matrix.

## Output
- Print a single integer representing the total diagonal sum.

## Constraints
- `n == mat.length == mat[i].length`
- `1 <= n <= 100`
- `1 <= mat[i][j] <= 100`

## Examples

### Example 1
Input:
3
1 2 3
4 5 6
7 8 9

Output:
25

**Explanation:**
Diagonals sum: `1 + 5 + 9 + 3 + 7 = 25`.
Notice that element `mat[1][1] = 5` is counted only once because it belongs to both diagonals.

### Example 2
Input:
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1

Output:
8

### Example 3
Input:
1
5

Output:
5