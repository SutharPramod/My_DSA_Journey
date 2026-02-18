# Rat in a Maze

## 🧩 Problem Statement

Consider a square matrix `maze` of size `n x n` consisting of only `0`s and `1`s, where:

- `1` represents an open cell
- `0` represents a blocked cell

A rat starts at the **top-left corner** `(0, 0)` and wants to reach the **bottom-right corner** `(n-1, n-1)`.

The rat can move in the following four directions:

- Down (`D`)
- Left (`L`)
- Right (`R`)
- Up (`U`)

Return **all possible paths** from start to destination in **lexicographical order**.  
If no path exists, return an empty list.

---

## 📥 Input

- `maze`: A 2D matrix of size `n x n` containing only `0`s and `1`s.
- `n`: Size of the matrix.

---

## 📤 Output

- Return a list of strings representing all valid paths.
- Each path is represented by a string consisting of characters `D`, `L`, `R`, and `U`.

---

## 📌 Constraints

- `1 <= n <= 10`
- `maze[i][j]` is either `0` or `1`
- The starting cell `(0,0)` must be `1` to have a valid path.

---

## 🧪 Examples

### Example 1
Input:
maze = [
[1, 0, 0, 0],
[1, 1, 0, 1],
[1, 1, 0, 0],
[0, 1, 1, 1]
]

Output:
["DDRDRR", "DRDDRR"]


### Example 2
Input:
maze = [
[1, 0],
[0, 1]
]

Output:
[]


---

## 📝 Notes

- The rat cannot visit the same cell more than once in a single path.
- Only cells with value `1` can be used.
- Paths should be returned in lexicographical order.