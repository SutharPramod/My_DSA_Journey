# LeetCode 79. Word Search
## Problem Statement
Given an `m x n` grid of characters `board` and a string `word`, return `true` *if* `word` *exists in the grid*.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

## Input
- `board`: A 2D array of characters where `m == board.length` and `n == board[i].length`.
- `word`: A string containing only lowercase and uppercase English letters.

## Output
- Returns a boolean value (`true` or `false`) indicating whether the word can be found in the grid.

## Constraints
- `m == board.length`
- `n = board[i].length`
- `1 <= m, n <= 6`
- `1 <= word.length <= 15`
- `board` and `word` consists of only lowercase and uppercase English letters.

## Examples
### Example 1
Input: board = `[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]`, word = `"ABCCED"`
Output: `true`
**Explanation:** The word "ABCCED" is successfully formed by traversing sequentially adjacent cells in the board.

### Example 2
Input: board = `[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]`, word = `"SEE"`
Output: `true`
**Explanation:** The word "SEE" is successfully formed.