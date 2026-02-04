# 2965. Find Missing and Repeated Values

## 🧩 Problem Statement

You are given a **0-indexed** 2D integer matrix `grid` of size `n x n` containing numbers from `1` to `n²`.

Each number appears **exactly once**, except:
- One number appears **twice** (repeated value)
- One number is **missing**

Return a **0-indexed integer array** `[repeated, missing]`.

---

## 📥 Input

- `grid`: A 2D integer matrix of size `n x n`.

---

## 📤 Output

- Return an integer array of size `2` where:
  - The first element is the **repeated** number
  - The second element is the **missing** number

---

## 📌 Constraints

- `2 <= n <= 50`
- `grid.length == n`
- `grid[i].length == n`
- `1 <= grid[i][j] <= n²`
- Exactly one number is repeated and one number is missing

---

## 🧪 Examples

### Example 1
Input:
grid = [[1,3],[2,2]]

Output: [2,4]


### Example 2
Input:
grid = [[9,1,7],[8,9,2],[3,4,6]]

Output: [9,5]


---

## 📝 Notes

- The matrix contains all numbers from `1` to `n²` except one missing value.
- One value appears more than once.