# Knight's Tour

## 🧩 Problem Statement

Given an `N x N` chessboard, place a knight on the board such that it visits every square **exactly once**.

A knight moves in an **L-shape**:
- 2 squares in one direction
- 1 square perpendicular to that direction

Your task is to determine whether a valid Knight’s Tour exists starting from a given position `(row, col)` and return the board configuration representing the move sequence.

If no solution exists, return `-1`.

---

## 📥 Input

- `N`: Size of the chessboard.
- `row`, `col`: Starting position of the knight (0-indexed).

---

## 📤 Output

- Return a 2D array of size `N x N` where:
  - Each cell contains the move number (starting from `0`)
  - Or return `-1` if no tour exists.

---

## 📌 Constraints

- `1 <= N <= 8`
- `0 <= row, col < N`

---

## 🧪 Examples

### Example 1

Input: grid = [[0,11,16,5,20],[17,4,19,10,15],[12,1,8,21,6],[3,18,23,14,9],[24,13,2,7,22]]
Output: true

### Example 2

Input: grid = [[0,3,6],[5,8,1],[2,7,4]]
Output: false

---

## 📝 Notes

- The knight must visit each cell exactly once.
- A complete tour contains exactly `N*N` moves.
- This is typically solved using backtracking.
- Optimization techniques like Warnsdorff’s Rule can improve performance.