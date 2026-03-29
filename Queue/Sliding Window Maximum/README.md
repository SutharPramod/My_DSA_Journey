# Sliding Window Maximum

## Problem Statement

Given an integer array `nums` of size `n` and an integer `k`, there is a sliding window of size `k` that moves from the **left to the right** of the array.

At each position of the window, you can only see the `k` elements inside the window. Your task is to find the **maximum element** in each window.

Return an array `result` containing the maximum values of each sliding window.

---

## Input

- An integer array `nums` of size `n`.
- An integer `k` representing the size of the sliding window.


nums[i] = value of the element at index i


---

## Output

Return an integer array `result` where:


result[i] = maximum value in the window nums[i ... i + k - 1]


---

## Constraints


1 ≤ n ≤ 10^5
-10^9 ≤ nums[i] ≤ 10^9
1 ≤ k ≤ n


---

## Examples

### Example 1

**Input**


nums = [1,3,-1,-3,5,3,6,7]
k = 3


**Output**


[3,3,5,5,6,7]


**Explanation**

Window positions and their maximum values:

| Window        | Max |
|--------------|-----|
| [1, 3, -1]   | 3   |
| [3, -1, -3]  | 3   |
| [-1, -3, 5]  | 5   |
| [-3, 5, 3]   | 5   |
| [5, 3, 6]    | 6   |
| [3, 6, 7]    | 7   |

---

### Example 2

**Input**


nums = [1]
k = 1


**Output**


[1]


**Explanation**

Only one window exists, so the result contains the single element.

---

### Example 3

**Input**


nums = [9, 11]
k = 2


**Output**


[11]


**Explanation**

The only window contains both elements, and the maximum is `11`.

---

## Notes

- The window slides one position to the right at each step.
- You must compute the maximum for **each window efficiently**.
- The result array will have size `n - k + 1`.
- The solution should handle large inputs within time limits.