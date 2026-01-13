# Book Allocation Problem

## 📝 Problem Description
You are given `n` books, where the $i^{th}$ book has `pages[i]` number of pages. You are also given `m` students.

The books are arranged in **ascending order** of their pages (or a given sequence). You have to allocate books to `m` students such that:
1. Each student gets at least one book.
2. Each book is allocated to exactly one student.
3. **The allocation must be contiguous.**
4. The **maximum number of pages assigned to a student is minimized**.

Return the minimum possible value of this maximum sum. If it is not possible to assign books (e.g., more students than books), return `-1`.



---

## 💡 Examples

**Example 1:**
> **Input:** `pages = [12, 34, 67, 90]`, `m = 2`  
> **Output:** `113`  
> **Explanation:** > Possible allocations:
> - [12] and [34, 67, 90] → Max = 191
> - [12, 34] and [67, 90] → Max = 157
> - [12, 34, 67] and [90] → Max = 113
> The minimum of these maximums is **113**.

**Example 2:**
> **Input:** `pages = [5, 17, 100, 11]`, `m = 4`  
> **Output:** `100`

---

## ⚙️ Constraints
* `1 <= n <= 10^5`
* `1 <= pages[i] <= 10^9`
* `1 <= m <= 10^5`

---