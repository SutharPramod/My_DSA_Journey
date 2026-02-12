# Subsets

## 🧩 Problem Statement

Given an integer array `nums` of **unique elements**, return all possible **subsets (the power set)**.

The solution set must **not contain duplicate subsets**.  
You may return the solution in **any order**.

---

## 📥 Input

- `nums`: An array of unique integers.

---

## 📤 Output

- Return a list of all possible subsets.

---

## 📌 Constraints

- `1 <= nums.length <= 10`
- `-10 <= nums[i] <= 10`
- All elements of `nums` are unique.

---

## 🧪 Examples

### Example 1
Input: nums = [1,2,3]
Output: [[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]]


### Example 2
Input: nums = [0]
Output: [[],[0]]


---

## 📝 Notes

- A subset is any combination of elements from the array.
- The empty set is also considered a valid subset.