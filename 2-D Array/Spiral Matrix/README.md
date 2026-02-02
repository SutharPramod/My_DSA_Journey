# Spiral Matrix

## 🧩 Problem Statement

Given an `m x n` matrix, return all elements of the matrix in **spiral order**.

Starting from the top-left corner, traverse the matrix clockwise, moving right, down, left, and up repeatedly until all elements are visited.

---

## 📥 Input

- `matrix`: A 2D array of integers with `m` rows and `n` columns.

---

## 📤 Output

- Return an array containing all elements of the matrix in spiral order.

---

## 📌 Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 10`
- `-100 <= matrix[i][j] <= 100`

---

## 🧪 Examples

### Example 1
Input:
matrix = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]

Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]


### Example 2
Input:
matrix = [
[1, 2, 3, 4],
[5, 6, 7, 8],
[9, 10, 11, 12]
]

Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]


---

## 📝 Notes

- The traversal follows a clockwise spiral.
- Each element of the matrix must be visited exactly once.