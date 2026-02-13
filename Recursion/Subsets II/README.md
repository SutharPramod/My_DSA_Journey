# Subsets II

## 🧩 Problem Statement

Given an integer array `nums` that may contain **duplicate elements**, return all possible **subsets (the power set)**.

The solution set must **not contain duplicate subsets**.  
Return the solution in **any order**.

---

## 📥 Input

- `nums`: An array of integers that may contain duplicates.

---

## 📤 Output

- Return a list of all possible unique subsets.

---

## 📌 Constraints

- `1 <= nums.length <= 10`
- `-10 <= nums[i] <= 10`

---

## 🧪 Examples

### Example 1
Input: nums = [1,2,2]
Output: [[],[1],[2],[1,2],[2,2],[1,2,2]]


### Example 2
Input: nums = [0]
Output: [[],[0]]


---

## 📝 Notes

- The input array may contain duplicates.
- The output must not contain duplicate subsets.
- The empty set is always included.