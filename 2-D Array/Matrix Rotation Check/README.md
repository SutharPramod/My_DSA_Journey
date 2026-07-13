# LeetCode 1886. Determine Whether Matrix Can Be Obtained By Rotation

## Problem Statement
Given two `n x n` binary matrices `mat` and `target`, return `true` if it is possible to make `mat` equal to `target` by rotating `mat` in **90-degree increments**, or `false` otherwise.

The matrix can be rotated 0, 90, 180, or 270 degrees clockwise to match the target.

## Input
- The first line contains an integer `n`, representing the number of rows and columns in the square matrices.
- The next `n` lines each contain `n` space-separated integers (0 or 1), representing the matrix `mat`.
- The next `n` lines each contain `n` space-separated integers (0 or 1), representing the matrix `target`.

## Output
- Print `true` if `mat` can be rotated to match `target`.
- Print `false` if it is impossible to match `target` regardless of the rotation.

## Constraints
- `n == mat.length == mat[i].length`
- `n == target.length == target[i].length`
- `1 <= n <= 10`
- `mat[i][j]` and `target[i][j]` are either `0` or `1`.

## Examples

### Example 1
Input:
3
0 1 1
1 0 1
0 0 1
0 0 0
1 0 1
1 1 1

Output:
true

**Explanation:** Rotating `mat` 90 degrees clockwise results in `target`.

### Example 2
Input:
2
0 1
1 1
1 0
0 1

Output:
false

**Explanation:** It is impossible to make `mat` equal to `target` by rotation.