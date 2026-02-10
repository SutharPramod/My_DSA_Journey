# Check if Array Is Sorted

## 🧩 Problem Statement

Given an array `arr` of size `n`, check whether the array is **sorted in non-decreasing order**.

Return `true` if the array is sorted, otherwise return `false`.

---

## 📥 Input

- `arr`: An array of integers.
- `n`: An integer representing the size of the array.

---

## 📤 Output

- Return `true` if the array is sorted in non-decreasing order.
- Otherwise, return `false`.

---

## 📌 Constraints

- `1 <= n <= 10^5`
- `-10^9 <= arr[i] <= 10^9`

---

## 🧪 Examples

### Example 1
Input: arr = [1, 2, 2, 3, 4]
Output: true


### Example 2
Input: arr = [1, 3, 2]
Output: false


---

## 📝 Notes

- An array with equal adjacent elements is considered sorted.
- The array must be checked from left to right.