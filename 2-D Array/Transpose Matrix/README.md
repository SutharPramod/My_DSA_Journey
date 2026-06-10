# LeetCode 867. Transpose Matrix

## Problem Statement
Given a 2D integer array `matrix`, return the transpose of `matrix`.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

## Input
- The first line contains two integers `m` and `n`, representing the number of rows and columns in the matrix respectively.
- The next `m` lines each contain `n` space-separated integers, representing the elements of the matrix.

## Output
- Print the transposed matrix, which will have `n` rows and `m` columns, with space-separated integers for each row.

## Constraints
- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 1000`
- `1 <= m * n <= 10^5`
- `-10^9 <= matrix[i][j] <= 10^9`

## Examples

### Example 1
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
1 4 7
2 5 8
3 6 9

### Example 2
Input:
2 3
1 2 3
4 5 6

Output:
1 4
2 5
3 6

## Notes
- Transposing a matrix requires transforming a grid of dimensions `m x n` into a new grid of dimensions `n x m`.
- The element at position `[i][j]` in the original matrix will move to position `[j][i]` in the transposed matrix.
- **Recommended Approach:** Create a new 2D array/vector with dimensions `n` rows and `m` columns. Use a nested loop where the outer loop iterates through the rows `i` from `0` to `m-1` and the inner loop iterates through the columns `j` from `0` to `n-1`. Assign `transposed[j][i] = matrix[i][j]`. This takes $O(m \times n)$ time complexity and $O(m \times n)$ space complexity to store the output matrix.