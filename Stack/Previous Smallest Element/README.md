# Previous Smallest Element

## Problem Statement

Given an integer array `nums` of size `n`, find the **previous smallest element** for each element in the array.

The **Previous Smallest Element (PSE)** for an element `nums[i]` is defined as the **closest element to the left of index `i` that is strictly smaller than `nums[i]`**.

If no such element exists to the left, return `-1` for that position.

Return an array `result` of size `n` where `result[i]` represents the previous smallest element of `nums[i]`.

---

## Input

An integer array `nums` of size `n`.


nums[i] = value of the element at index i


---

## Output

Return an integer array `result` of size `n`.


result[i] = closest element to the left of nums[i] that is smaller than nums[i]
or -1 if no such element exists


---

## Constraints


1 ≤ n ≤ 10^5
-10^9 ≤ nums[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


nums = [4, 5, 2, 10, 8]


**Output**


[-1, 4, -1, 2, 2]


**Explanation**

| Index | Element | Previous Smallest |
|------|---------|-------------------|
| 0 | 4  | -1 |
| 1 | 5  | 4  |
| 2 | 2  | -1 |
| 3 | 10 | 2  |
| 4 | 8  | 2  |

---

### Example 2

**Input**


nums = [1, 6, 4, 10, 2, 5]


**Output**


[-1, 1, 1, 4, 1, 2]


**Explanation**

- `1` has no smaller element to the left.
- `6` → previous smallest is `1`.
- `4` → previous smallest is `1`.
- `10` → previous smallest is `4`.
- `2` → previous smallest is `1`.
- `5` → previous smallest is `2`.

---

### Example 3

**Input**


nums = [5, 4, 3, 2, 1]


**Output**


[-1, -1, -1, -1, -1]


**Explanation**

Each element has no smaller element to its left.

---

## Notes

- The previous smallest element must appear **to the left** of the current element.
- If multiple smaller elements exist, return the **closest one to the current index**.
- If no smaller element exists on the left side, the result should be `-1`.
- The output array must have the **same length as the input array**.