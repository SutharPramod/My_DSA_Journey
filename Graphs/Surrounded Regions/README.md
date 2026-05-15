# Surrounded Regions

## Problem Statement

You are given an `m x n` board containing characters `'X'` and `'O'`.

Capture all regions that are **completely surrounded by `'X'`**.

A region is captured by flipping all `'O'`s into `'X'`s in that surrounded region.

- A region is considered surrounded if it is not connected to any `'O'` on the boundary (edges of the board).
- Any `'O'` connected (directly or indirectly via 4-directional adjacency) to a boundary `'O'` should **not** be flipped.

## Input

- The first line contains two integers `m` and `n`, representing the number of rows and columns.
- The next `m` lines each contain `n` space-separated characters (`'X'` or `'O'`) representing the board.

## Output

- Print the modified board after capturing all surrounded regions.

## Constraints

- `1 ≤ m, n ≤ 1000`
- `board[i][j] ∈ {'X', 'O'}`

## Examples

### Example 1


Input:
4 4
X X X X
X O O X
X X O X
X O X X

Output:
X X X X
X X X X
X X X X
X O X X


### Example 2


Input:
2 2
X X
X X

Output:
X X
X X


### Example 3


Input:
3 3
O O O
O O O
O O O

Output:
O O O
O O O
O O O


## Notes

- Only `'O'` regions fully surrounded by `'X'` should be flipped.
- Boundary-connected `'O'` cells remain unchanged.
- Connectivity is considered only in 4 directions (up, down, left, right).