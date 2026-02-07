# 560. Subarray Sum Equals K

## 🧩 Problem Statement

Given an array of integers `nums` and an integer `k`, return the **total number of continuous subarrays** whose sum equals `k`.

A subarray is a contiguous part of an array.

---

## 📥 Input

- `nums`: An array of integers.
- `k`: An integer.

---

## 📤 Output

- Return an integer representing the number of subarrays whose sum is equal to `k`.

---

## 📌 Constraints

- `1 <= nums.length <= 2 * 10^4`
- `-1000 <= nums[i] <= 1000`
- `-10^7 <= k <= 10^7`

---

## 🧪 Examples

### Example 1
Input: nums = [1,1,1], k = 2
Output: 2


### Example 2
Input: nums = [1,2,3], k = 3
Output: 2


---

## 📝 Notes

- Subarrays must be contiguous.
- The array may contain negative numbers.