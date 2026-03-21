# Trapping Rainwater

## Problem Statement

Given an array `height` of non-negative integers representing the elevation map where the width of each bar is `1`, compute how much **rainwater can be trapped** after it rains.

Water can be trapped between bars if there are taller bars on both the **left** and **right** sides. The amount of water trapped at any index depends on the **minimum height of the tallest bars on both sides**.

Return the **total amount of rainwater** that can be trapped.

---

## Input

An integer array `height` of size `n`.


height[i] = height of the ith bar


---

## Output

Return a single integer representing the **total units of water** that can be trapped.

---

## Constraints


1 ≤ n ≤ 2 * 10^5
0 ≤ height[i] ≤ 10^9


---

## Examples

### Example 1

**Input**


height = [0,1,0,2,1,0,1,3,2,1,2,1]


**Output**


6


**Explanation**

The elevation map traps water between the bars. The total amount of trapped water across all positions is **6 units**.

---

### Example 2

**Input**


height = [4,2,0,3,2,5]


**Output**


9


**Explanation**

Water is trapped between the bars where taller bars exist on both sides. The total trapped water is **9 units**.

---

### Example 3

**Input**


height = [3,0,2,0,4]


**Output**


7


**Explanation**

Water accumulates between the bars at positions where the surrounding bars are taller. The total trapped water is **7 units**.

---

## Notes

- Each bar has a **width of 1 unit**.
- Water can only be trapped if there are **taller bars on both sides**.
- The amount of water trapped at a position depends on the **minimum of the tallest bars on the left and right minus the height of the current bar**.
- If the result is negative at any position, treat it as `0`.