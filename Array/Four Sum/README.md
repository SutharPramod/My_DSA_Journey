# 18. 4Sum

## 🧩 Problem Statement

Given an array of integers `nums` and an integer `target`, return **all unique quadruplets**  
`[nums[a], nums[b], nums[c], nums[d]]` such that:

- `a`, `b`, `c`, and `d` are **distinct indices**
- `nums[a] + nums[b] + nums[c] + nums[d] == target`

The solution set must **not contain duplicate quadruplets**.

---

## 📥 Input

- `nums`: An array of integers.
- `target`: An integer.

---

## 📤 Output

- Return a list of all unique quadruplets that sum to `target`.

---

## 📌 Constraints

- `1 <= nums.length <= 200`
- `-10^9 <= nums[i], target <= 10^9`

---

## 🧪 Examples

### Example 1
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]


### Example 2
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]


---

## 📝 Notes

- The order of elements inside a quadruplet does not matter.
- Duplicate quadruplets are not allowed in the output.