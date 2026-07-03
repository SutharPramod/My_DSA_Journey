# LeetCode 73. Set Matrix Zeroes

## Problem Statement
Given an `m x n` integer matrix, if an element is `0`, set its entire row and column to `0`'s. You must do it **in-place**.

## Input
- The first line contains two integers `m` and `n`, representing the number of rows and columns respectively.
- The next `m` lines each contain `n` space-separated integers representing the elements of the matrix.

## Output
- Print the modified `m x n` matrix with space-separated integers for each row.

## Constraints
- `m == matrix.length`
- `n == matrix[0].length`
- `1 <= m, n <= 200`
- `-2^31 <= matrix[i][j] <= 2^31 - 1`

## Examples

### Example 1
Input:
3 3
1 1 1
1 0 1
1 1 1

Output:
1 0 1
0 0 0
1 0 1

### Example 2
Input:
3 4
0 1 2 0
3 4 5 2
1 3 1 5

Output:
0 0 0 0
0 4 5 0
0 3 1 0