# 15. 3Sum

## 🧩 Problem Statement

Given an integer array `nums`, return **all unique triplets** `[nums[i], nums[j], nums[k]]` such that:

- `i != j`
- `i != k`
- `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set must **not contain duplicate triplets**.

---

## 📥 Input

- `nums`: An array of integers.

---

## 📤 Output

- Return a list of all unique triplets that sum to `0`.

---

## 📌 Constraints

- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

---

## 🧪 Examples

### Example 1
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]


### Example 2
Input: nums = []
Output: []


### Example 3
Input: nums = [0]
Output: []


---

## 📝 Notes

- The order of the output triplets does not matter.
- Duplicate triplets are not allowed in the result.