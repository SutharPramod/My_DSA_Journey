# 37. Sudoku Solver

## 🧩 Problem Statement

Write a program to solve a **Sudoku** puzzle by filling the empty cells.

A Sudoku solution must satisfy all of the following rules:

- Each of the digits `1-9` must occur exactly once in each row.
- Each of the digits `1-9` must occur exactly once in each column.
- Each of the digits `1-9` must occur exactly once in each of the 9 `3 x 3` sub-boxes of the grid.

The `'.'` character indicates empty cells.

You may assume that the given Sudoku board has **only one solution**.

---

## 📥 Input

- `board`: A `9 x 9` 2D character array representing a partially filled Sudoku board.

---

## 📤 Output

- Modify the input `board` in-place to fill the empty cells and solve the puzzle.

---

## 📌 Constraints

- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit `'1'` to `'9'` or `'.'`
- It is guaranteed that the input board has exactly one solution.

---

## 🧪 Example

Input:
board = [
["5","3",".",".","7",".",".",".","."],
["6",".",".","1","9","5",".",".","."],
[".","9","8",".",".",".",".","6","."],
["8",".",".",".","6",".",".",".","3"],
["4",".",".","8",".","3",".",".","1"],
["7",".",".",".","2",".",".",".","6"],
[".","6",".",".",".",".","2","8","."],
[".",".",".","4","1","9",".",".","5"],
[".",".",".",".","8",".",".","7","9"]
]


---

## 📝 Notes

- The solution must satisfy all Sudoku rules.
- The board must be modified in-place.