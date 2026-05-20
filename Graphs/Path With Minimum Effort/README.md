# Path With Minimum Effort

## Problem Statement

You are given an `m x n` grid `heights` where `heights[row][col]` represents the height of a cell.

You start from the top-left cell `(0, 0)` and want to travel to the bottom-right cell `(m - 1, n - 1)`.

You can move in four directions:

- Up
- Down
- Left
- Right

The **effort** of a path is defined as the maximum absolute difference in heights between two consecutive cells along the path.

Return the minimum effort required to travel from the top-left cell to the bottom-right cell.

## Input

- The first line contains two integers `m` and `n`, representing the number of rows and columns.
- The next `m` lines each contain `n` space-separated integers representing the grid `heights`.

## Output

- Print a single integer representing the minimum effort required.

## Constraints

- `1 ≤ m, n ≤ 1000`
- `1 ≤ heights[i][j] ≤ 10^6`

## Examples

### Example 1

```text
Input:
3 3
1 2 2
3 8 2
5 3 5

Output:
2
Example 2
Input:
3 3
1 2 3
3 8 4
5 3 5

Output:
1
Example 3
Input:
5 5
1 2 1 1 1
1 2 1 2 1
1 2 1 2 1
1 2 1 2 1
1 1 1 2 1

Output:
0

## Notes
- The effort of a path depends on the maximum height difference between adjacent cells in that path.
- A path with more steps may still have a smaller effort.
- Only 4-directional movement is allowed.