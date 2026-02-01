# Search a 2D Matrix II

## 🧩 Problem Statement

Write an efficient algorithm that searches for a value `target` in an `m x n` integer matrix `matrix`.

The matrix has the following properties:

- Integers in each row are sorted in **ascending order** from left to right.
- Integers in each column are sorted in **ascending order** from top to bottom.

Given an integer `target`, return `true` if `target` is found in the matrix, otherwise return `false`.

---

## 📥 Input

- `matrix`: A 2D array of integers with `m` rows and `n` columns.
- `target`: An integer to search for.

---

## 📤 Output

- Return `true` if `target` exists in the matrix.
- Otherwise, return `false`.

---

## 📌 Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 300`
- `-10^9 <= matrix[i][j], target <= 10^9`

---

## 🧪 Examples

### Example 1
Input:
matrix = c
target = 5

Output: true


### Example 2
Input:
matrix = [
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
]
target = 20

Output: false


---

## 📝 Notes

- The matrix is sorted both row-wise and column-wise.
- The algorithm should be more efficient than brute force.