# LeetCode 59. Spiral Matrix II

## Problem Statement
Given a positive integer `n`, generate an `n x n` square matrix filled with elements from `1` to `n^2` in **spiral order** (clockwise, starting from the top-left corner).

## Input
- A single line containing an integer `n`.

## Output
- Print the generated `n x n` matrix with space-separated integers for each row.

## Constraints
- `1 <= n <= 20`

## Examples

### Example 1
Input:
3

Output:
1 2 3
8 9 4
7 6 5

**Explanation:** The matrix is filled in a clockwise spiral sequence:
- Row 0 (left to right): 1 -> 2 -> 3
- Column 2 (top to bottom): 4 -> 5
- Row 2 (right to left): 6 -> 7
- Column 0 (bottom to top): 8
- Center element: 9

### Example 2
Input:
1

Output:
1