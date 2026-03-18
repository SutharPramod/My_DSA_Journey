# Largest Rectangle in Histogram

## Problem Statement

Given an array of integers `heights` representing the heights of bars in a histogram, where the width of each bar is `1`, find the **area of the largest rectangle** that can be formed within the histogram.

A rectangle can be formed using one or more consecutive bars, and its height is determined by the **minimum height among those bars**.

Return the **maximum possible rectangular area** that can be formed in the histogram.

---

## Input

An integer array `heights` of size `n`.


heights[i] = height of the ith bar in the histogram


---

## Output

Return a single integer representing the **largest rectangular area** that can be formed in the histogram.

---

## Constraints


1 ≤ n ≤ 10^5
0 ≤ heights[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


heights = [2,1,5,6,2,3]


**Output**


10


**Explanation**

The largest rectangle can be formed using the bars with heights `5` and `6`.

- Width = 2
- Minimum height = 5

Area = `5 × 2 = 10`.

---

### Example 2

**Input**


heights = [2,4]


**Output**


4


**Explanation**

Two possible rectangles:

- Using bar `2` → area = `2`
- Using bar `4` → area = `4`

Maximum area is `4`.

---

### Example 3

**Input**


heights = [6,2,5,4,5,1,6]


**Output**


12


**Explanation**

The largest rectangle is formed using bars `[5,4,5]`.

- Width = 3
- Minimum height = 4

Area = `4 × 3 = 12`.

---

## Notes

- Each bar in the histogram has a **fixed width of 1**.
- The rectangle must consist of **consecutive bars**.
- The height of the rectangle is limited by the **smallest bar in the selected range**.
- The result should represent the **maximum rectangular area** that can be formed within the histogram.