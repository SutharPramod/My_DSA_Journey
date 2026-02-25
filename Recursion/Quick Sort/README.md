# Quick Sort

## 🧩 Problem Statement

Given an array `arr` of size `n`, sort the array using the **Quick Sort** algorithm.

Quick Sort is a **divide and conquer** algorithm that works as follows:

1. Select a **pivot** element from the array.
2. Partition the array such that:
   - Elements smaller than the pivot come before it.
   - Elements greater than the pivot come after it.
3. Recursively apply the same process to the left and right subarrays.

Return the sorted array.

---

## 📥 Input

- `arr`: An array of integers.
- `n`: The size of the array.

---

## 📤 Output

- Return the array sorted in **non-decreasing order**.

---

## 📌 Constraints

- `1 <= n <= 10^5`
- `-10^9 <= arr[i] <= 10^9`

---

## 🧪 Examples

### Example 1

Input: arr = [10,7,8,9,1,5]
Output: [1,5,7,8,9,10]


### Example 2

Input: arr = [4,3,2,1]
Output: [1,2,3,4]


---

## 📝 Notes

- The pivot selection strategy may vary.
- Average time complexity is O(n log n).
- Worst-case time complexity is O(n²).
- Sorting must be done using the Quick Sort approach.