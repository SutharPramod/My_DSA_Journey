# Next Greater Element II

## Problem Statement

Given a **circular integer array** `nums` of size `n`, find the **next greater element** for each element in the array.

The **Next Greater Element (NGE)** for an element `nums[i]` is the first element encountered while traversing **to the right (cyclically)** that is **strictly greater** than `nums[i]`.

Since the array is **circular**, after reaching the last element, the search continues from the beginning of the array.

If no such greater element exists, return `-1` for that position.

Return an array `result` of size `n` where `result[i]` represents the next greater element of `nums[i]`.

---

## Input

An integer array `nums` of size `n`.


nums[i] = value of the element at index i


---

## Output

Return an integer array `result` of size `n`.


result[i] = next greater element of nums[i] when traversing cyclically,
or -1 if no such element exists


---

## Constraints


1 ≤ n ≤ 10^5
-10^9 ≤ nums[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


nums = [1, 2, 1]


**Output**


[2, -1, 2]


**Explanation**

- For `1` (index 0) → next greater element is `2`.
- For `2` → no greater element exists in the circular traversal.
- For `1` (index 2) → next greater element is `2` after wrapping around.

---

### Example 2

**Input**


nums = [3, 8, 4, 1, 2]


**Output**


[8, -1, 8, 2, 3]


**Explanation**

- `3` → next greater is `8`.
- `8` → no greater element exists.
- `4` → next greater is `8` after circular traversal.
- `1` → next greater is `2`.
- `2` → next greater is `3` after wrapping around.

---

### Example 3

**Input**


nums = [5, 4, 3, 2, 1]


**Output**


[-1, 5, 5, 5, 5]


**Explanation**

Since the array is circular, elements can find greater elements by wrapping around to the beginning.

---

## Notes

- The array must be treated as **circular**, meaning after the last index you continue from index `0`.
- The next greater element must be **strictly greater** than the current element.
- If no greater element exists during the full circular traversal, return `-1` for that eleme