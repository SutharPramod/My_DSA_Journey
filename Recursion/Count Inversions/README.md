# Count Inversions

## 🧩 Problem Statement

Given an array `arr` of size `n`, count the number of **inversions** in the array.

An inversion is a pair of indices `(i, j)` such that:

- `i < j`
- `arr[i] > arr[j]`

Return the total number of inversions in the array.

---

## 📥 Input

- `arr`: An array of integers.
- `n`: The size of the array.

---

## 📤 Output

- Return an integer representing the total number of inversions.

---

## 📌 Constraints

- `1 <= n <= 10^5`
- `-10^9 <= arr[i] <= 10^9`

---

## 🧪 Examples

### Example 1

Input: arr = [2, 4, 1, 3, 5]
Output: 3
Explanation:
Inversions are:
(2,1), (4,1), (4,3)


### Example 2

Input: arr = [5, 4, 3, 2, 1]
Output: 10


---

## 📝 Notes

- A sorted array has 0 inversions.
- The maximum number of inversions occurs when the array is sorted in reverse order.
- Expected time complexity: O(n log n).
- Brute-force O(n²) solution may not pass large constraints.