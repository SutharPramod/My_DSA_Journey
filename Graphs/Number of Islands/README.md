An island is formed by connecting adjacent lands horizontally or vertically (not diagonally). You may assume all four edges of the grid are surrounded by water.

## Input

- The first line contains two integers `m` and `n`, representing the number of rows and columns.
- The next `m` lines each contain `n` space-separated characters (`'1'` or `'0'`) representing the grid.

## Output

- Print a single integer representing the number of islands.

## Constraints

- `1 ≤ m, n ≤ 1000`
- `grid[i][j] ∈ {'0', '1'}`
- The grid may contain only land or only water.

## Examples

### Example 1


Input:
4 5
1 1 1 1 0
1 1 0 1 0
1 1 0 0 0
0 0 0 0 0

Output:
1


### Example 2


Input:
4 5
1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1

Output:
3


### Example 3


Input:
3 3
0 0 0
0 0 0
0 0 0

Output:
0


## Notes

- An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
- You can modify the grid during processing if needed.
- Diagonal connections do not count as part of the same island.