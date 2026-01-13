# Painter's Partition Problem

## 📝 Problem Description
You have `n` boards of varying lengths, where the length of the $i^{th}$ board is `boards[i]`. There are `k` painters available. Each painter takes **1 unit of time** to paint **1 unit of a board**.

The goal is to minimize the **maximum time** taken by any painter to finish their assigned boards, under these constraints:
1. A board cannot be split between two painters.
2. A painter can only paint **contiguous** sections of boards.
3. Every board must be painted.



---

## 💡 Examples

**Example 1:**
> **Input:** `boards = [10, 20, 30, 40]`, `k = 2`  
> **Output:** `60`  
> **Explanation:** > - Painter 1 paints [10, 20, 30] (Total: 60)  
> - Painter 2 paints [40] (Total: 40)  
> The maximum time is **60**. Any other split (like 30 and 70) would result in a higher maximum.

**Example 2:**
> **Input:** `boards = [10, 10, 10, 10]`, `k = 2`  
> **Output:** `20`

---

## ⚙️ Constraints
* `1 <= n <= 10^5`
* `1 <= boards[i] <= 10^6`
* `1 <= k <= 10^5`

---