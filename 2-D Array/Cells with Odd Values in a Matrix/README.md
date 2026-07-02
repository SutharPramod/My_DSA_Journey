# LeetCode 1252. Cells with Odd Values in a Matrix

## Problem Statement
There is an `m x n` matrix that is initialized to all `0`s. There is also a 2D array `indices` where each `indices[i] = [ri, ci]` represents a 0-indexed location to perform an increment operation on the matrix.

For each location `[ri, ci]`, you should:
1. Increment all the cells on row `ri`.
2. Increment all the cells on column `ci`.

Given `m`, `n`, and `indices`, return the number of odd-valued cells in the matrix after applying all increments.

## Input
- The first line contains two integers `m` and `n`, representing the dimensions of the matrix.
- The second line contains an integer `k`, representing the number of increment operations.
- The next `k` lines each contain two space-separated integers `ri` and `ci`.

## Output
- Print a single integer representing the total count of cells with an odd value.

## Constraints
- `1 <= m, n <= 50`
- `1 <= indices.length <= 100`
- `0 <= ri < m`
- `0 <= ci < n`

## Examples

### Example 1
Input:
2 3
2
0 1
1 1

Output:
6

**Explanation:**
Initial matrix = `[[0,0,0],[0,0,0]]`.
After `indices[0] = [0, 1]`: `[[1,2,1],[0,1,0]]`.
After `indices[1] = [1, 1]`: `[[1,3,1],[1,3,1]]`.
Total odd numbers = 6.

### Example 2
Input:
2 2
2
1 1
0 0

Output:
0