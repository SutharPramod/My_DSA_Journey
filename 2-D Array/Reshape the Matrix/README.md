# LeetCode 566. Reshape the Matrix

## Problem Statement
In MATLAB, there is a handy function called `reshape` which can reshape an `m x n` matrix into a new one with a different size `r x c` keeping its original data.

You are given an `m x n` matrix `mat` and two integers `r` and `c` representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same **row-traversing** order as they were.

If the `reshape` operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

## Input
- The first line contains two integers `m` and `n`, representing the number of rows and columns of the original matrix.
- The next `m` lines each contain `n` space-separated integers, representing the elements of `mat`.
- The last line contains two integers `r` and `c`, representing the rows and columns of the desired reshaped matrix.

## Output
- Print the reshaped `r x c` matrix with space-separated integers for each row. If reshaping is invalid, print the original `m x n` matrix instead.

## Constraints
- `m == mat.length`
- `n == mat[i].length`
- `1 <= m, n <= 100`
- `-1000 <= mat[i][j] <= 1000`
- `1 <= r, c <= 300`

## Examples

### Example 1
Input:
2 2
1 2
3 4
1 4

Output:
1 2 3 4

**Explanation:** The original 2x2 matrix is flattened and reshaped into a 1x4 matrix sequentially.

### Example 2
Input:
2 2
1 2
3 4
2 4

Output:
1 2
3 4

**Explanation:** A 2x2 matrix has 4 elements. It is impossible to reshape it into a 2x4 matrix (which requires 8 elements), so the original matrix is returned.