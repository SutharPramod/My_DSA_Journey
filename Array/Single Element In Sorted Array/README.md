# Single Element in a Sorted Array

## Problem Description
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in **$O(\log n)$** time and **$O(1)$** space.



---

## Examples

**Example 1:**
> **Input:** `nums = [1,1,2,3,3,4,4,8,8]`  
> **Output:** `2`

**Example 2:**
> **Input:** `nums = [3,3,7,7,10,11,11]`  
> **Output:** `10`

---

## Constraints
* `1 <= nums.length <= 10^5`
* `0 <= nums[i] <= 10^5`

---

## 💡 Key Logic: Index Parity
Because the array is sorted and pairs are present, the single element disrupts the expected index pattern:

1. **Before the single element**:
   - The first occurrence of a pair is at an **even** index.
   - The second occurrence is at an **odd** index.
2. **After the single element**:
   - The first occurrence of a pair is at an **odd** index.
   - The second occurrence is at an **even** index.

### Binary Search Strategy:
- If `mid` is **even**, its partner should be at `mid + 1`.
- If `mid` is **odd**, its partner should be at `mid - 1`.
- If these conditions are met, the single element is to the **right**. Otherwise, it is at `mid` or to the **left**.



---

## 🛠️ Implementation Hint (XOR trick)
To simplify the index check in your code, you can use:
`if (nums[mid] == nums[mid ^ 1])`
This check works for both even and odd indices to see if the pair is "intact."