# Merge Sort

## 🧩 Problem Statement

Given an array `arr` of size `n`, sort the array using the **Merge Sort** algorithm.

Merge Sort is a **divide and conquer** algorithm that:

1. Divides the array into two halves,
2. Recursively sorts each half,
3. Merges the two sorted halves into a single sorted array.

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

Input: arr = [5,2,3,1]
Output: [1,2,3,5]


### Example 2

Input: arr = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]


---

## 📝 Notes

- The algorithm should follow the divide-and-conquer strategy.
- The expected time complexity is O(n log n).
- The merge operation combines two sorted arrays into one sorted array.