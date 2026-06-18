# LeetCode 832. Flipping an Image

## Problem Statement
Given an `n x n` binary matrix `image`, flip the image **horizontally**, then **invert** it, and return the resulting image.

- **To flip an image horizontally** means that each row of the image is reversed. For example, flipping `[1, 1, 0]` horizontally results in `[0, 1, 1]`.
- **To invert an image** means that each `0` is replaced by `1`, and each `1` is replaced by `0`. For example, inverting `[0, 1, 1]` results in `[1, 0, 0]`.

## Input
- The first line contains an integer `n`, representing the number of rows and columns in the square matrix.
- The next `n` lines each contain `n` space-separated integers (either `0` or `1`).

## Output
- Print the resulting `n x n` matrix with space-separated integers for each row.

## Constraints
- `n == image.length`
- `n == image[i].length`
- `1 <= n <= 20`
- `images[i][j]` is either `0` or `1`.

## Examples

### Example 1
Input:
3
1 1 0
1 0 1
0 0 0

Output:
1 0 0
0 1 0
1 1 1

**Explanation:**
1. Reverse each row: `[[0,1,1], [1,0,1], [0,0,0]]`
2. Invert the image: `[[1,0,0], [0,1,0], [1,1,1]]`

### Example 2
Input:
4
1 1 0 0
1 0 0 1
0 1 1 1
1 0 1 0

Output:
1 1 0 0
0 1 1 0
0 0 0 1
1 0 1 0