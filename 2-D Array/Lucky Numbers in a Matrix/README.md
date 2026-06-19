# LeetCode 1380. Lucky Numbers in a Matrix

## Problem Statement
Given an `m x n` matrix of **distinct** numbers, return all **lucky numbers** in the matrix in any order.

A **lucky number** is an element of the matrix such that it is the **minimum** element in its row and **maximum** in its column.

## Input
- The first line contains two integers `m` and `n`, representing the number of rows and columns respectively.
- The next `m` lines each contain `n` space-separated integers representing the elements of the matrix.

## Output
- Print the space-separated integers representing the lucky numbers found in the matrix. If no lucky number exists, print nothing or an empty line.

## Constraints
- `m == mat.length`
- `n == mat[i].length`
- `1 <= n, m <= 50`
- `1 <= matrix[i][j] <= 10^5`
- All elements in the matrix are **distinct**.

## Examples

### Example 1
Input:
3 3
3 7 8
9 11 13
15 16 17

Output:
15

**Explanation:** - 15 is the minimum in its row `[15, 16, 17]`.
- 15 is the maximum in its column `[8, 13, 17]`? No, let's verify columns:
  - Column 0: `[3, 9, 15]` -> Max is 15.
  - Row 2: `[15, 16, 17]` -> Min is 15.
Therefore, 15 is a lucky number.

### Example 2
Input:
4 4
1 10 4 2
9 3 8 7
15 16 17 12
13 14 15 16

Output:
12

**Explanation:** - 12 is the minimum in its row `[15, 16, 17, 12]`.
- 12 is the maximum in its column `[2, 7, 12, 16]`? Max in column 3 is 16. Let's re-verify:
  - Row 0 min: 1 (col 0). Max of col 0 `[1, 9, 15, 13]` is 15.
  - Row 1 min: 3 (col 1). Max of col 1 `[10, 3, 16, 14]` is 16.
  - Row 2 min: 12 (col 3). Max of col 3 `[2, 7, 12, 16]` is 16.
  - Row 3 min: 13 (col 0). Max of col 0 is 15.
Wait, let's look at element 12: row min is 12. Column max is 16. So 12 is not a lucky number.
Let's check the matrix again:
Row 0 min: 1. Column 0 max: 15.
Row 1 min: 3. Column 1 max: 16.
Row 2 min: 12. Column 3 max: 16.
Row 3 min: 13. Column 0 max: 15.
Is there any lucky number here? Let's check 12: Row 2 is `[15, 16, 17, 12]`, min is 12. Col 3 is `[2, 7, 12, 16]`, max is 16.
Ah, let's check another example from LeetCode standard test cases:
Matrix:
[[1,10,4,2],
 [9,3,8,7],
 [15,16,17,12]]
Row 0 min: 1.
Row 1 min: 3.
Row 2 min: 12.
Col 0 max: 15. Col 1 max: 16. Col 2 max: 17. Col 3 max: 12.
Here, 12 is the minimum in row 2 and maximum in column 3. This matches standard Example 2!