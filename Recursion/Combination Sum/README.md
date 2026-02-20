# 39. Combination Sum

## 🧩 Problem Statement

Given an array of **distinct integers** `candidates` and a target integer `target`, return a list of all **unique combinations** of `candidates` where the chosen numbers sum to `target`.

You may return the combinations in **any order**.

The same number may be chosen from `candidates` an **unlimited number of times**.

Two combinations are unique if the frequency of at least one of the chosen numbers is different.

---

## 📥 Input

- `candidates`: An array of distinct integers.
- `target`: An integer.

---

## 📤 Output

- Return a list of all unique combinations where the numbers sum to `target`.

---

## 📌 Constraints

- `1 <= candidates.length <= 30`
- `2 <= candidates[i] <= 40`
- All elements of `candidates` are distinct.
- `1 <= target <= 40`

---

## 🧪 Examples

### Example 1

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]


### Example 2

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]


### Example 3

Input: candidates = [2], target = 1
Output: []


---

## 📝 Notes

- Each number in `candidates` may be used unlimited times.
- The solution set must not contain duplicate combinations.