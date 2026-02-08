# 287. Find the Duplicate Number

## 🧩 Problem Statement

Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive.

There is **only one repeated number** in `nums`. Return this repeated number.

You must solve the problem **without modifying** the array `nums` and using **constant extra space**.

---

## 📥 Input

- `nums`: An array of integers of size `n + 1`.

---

## 📤 Output

- Return the duplicated integer.

---

## 📌 Constraints

- `1 <= n <= 10^5`
- `nums.length == n + 1`
- `1 <= nums[i] <= n`
- Exactly one integer is repeated (it may appear more than once).

---

## 🧪 Examples

### Example 1
Input: nums = [1,3,4,2,2]
Output: 2


### Example 2
Input: nums = [3,1,3,4,2]
Output: 3


---

## 📝 Notes

- The array contains exactly one duplicated number.
- The duplicate number may appear multiple times.