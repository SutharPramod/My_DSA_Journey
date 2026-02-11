# Binary Search

## 🧩 Problem Statement

Given an array of integers `nums` which is sorted in **ascending order**, and an integer `target`, write a function to search for `target` in `nums`.

If `target` exists, return its index. Otherwise, return `-1`.

You must write an algorithm with **O(log n)** runtime complexity.

---

## 📥 Input

- `nums`: A sorted array of integers.
- `target`: An integer.

---

## 📤 Output

- Return the index of `target` if it exists in `nums`.
- Otherwise, return `-1`.

---

## 📌 Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i], target <= 10^4`
- All integers in `nums` are unique.
- `nums` is sorted in ascending order.

---

## 🧪 Examples

### Example 1
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4


### Example 2
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1


---

## 📝 Notes

- The array is guaranteed to be sorted.
- The expected time complexity is logarithmic.