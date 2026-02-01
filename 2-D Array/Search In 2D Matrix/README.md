# 74. Search a 2D Matrix

## 🧩 Problem Statement

You are given an `m x n` integer matrix `matrix` with the following properties:

- Each row is sorted in **non-decreasing order**.
- The first integer of each row is **greater than the last integer of the previous row**.

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
- `1 <= m, n <= 100`
- `-10^4 <= matrix[i][j], target <= 10^4`

---

## 🧪 Examples

### Example 1
Input:
matrix = [
[1, 3, 5, 7],
[10, 11, 16, 20],
[23, 30, 34, 60]
]
target = 3

Output: true


### Example 2
Input:
matrix = [
[1, 3, 5, 7],
[10, 11, 16, 20],
[23, 30, 34, 60]
]
target = 13

Output: false


---

## 📝 Notes

- The matrix can be treated as a single sorted array.
- Efficient searching is expected due to the sorted properties.