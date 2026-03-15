# Next Greater Element

## Problem Statement

Given an array of integers `nums` of size `n`, for each element in the array find the **next greater element** to its right.

The **Next Greater Element (NGE)** for an element `nums[i]` is the first element to the right of `nums[i]` that is **strictly greater** than `nums[i]`.

If there is no greater element to the right, return `-1` for that position.

Return an array `result` of size `n` where `result[i]` represents the next greater element of `nums[i]`.

---

## Input

An integer array `nums` of size `n`.


nums[i] = value of the element at index i


---

## Output

Return an integer array `result` of size `n`.


result[i] = first element to the right of nums[i] that is greater than nums[i]
or -1 if no such element exists


---

## Constraints


1 ≤ n ≤ 10^5
-10^9 ≤ nums[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


nums = [4, 5, 2, 25]


**Output**


[5, 25, 25, -1]


**Explanation**

- Next greater element for `4` is `5`.
- Next greater element for `5` is `25`.
- Next greater element for `2` is `25`.
- `25` has no greater element to its right.

---

### Example 2

**Input**


nums = [13, 7, 6, 12]


**Output**


[-1, 12, 12, -1]


**Explanation**

- `13` has no greater element to its right.
- Next greater element for `7` is `12`.
- Next greater element for `6` is `12`.
- `12` has no greater element to its right.

---

### Example 3

**Input**


nums = [1, 3, 2, 4]


**Output**


[3, 4, 4, -1]


**Explanation**

- Next greater element for `1` is `3`.
- Next greater element for `3` is `4`.
- Next greater element for `2` is `4`.
- `4` has no greater element to its right.

---

## Notes

- The **next greater element must appear to the right** of the current element.
- If multiple greater elements exist, return the **first one encountered** while scanning to the right.
- The result array must have the **same length as the input array**.