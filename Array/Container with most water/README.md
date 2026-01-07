# 11. Container With Most Water

## Problem Description
You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the $i^{th}$ line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return *the maximum amount of water a container can store*.

**Notice** that you may not slant the container.



---

## Examples

**Example 1:**
> **Input:** `height = [1,8,6,2,5,4,8,3,7]`  
> **Output:** `49`  
> **Explanation:** The above vertical lines are represented by array `[1,8,6,2,5,4,8,3,7]`. In this case, the max area of water the container can contain is 49 (between the line at index 1 and index 8).

**Example 2:**
> **Input:** `height = [1,1]`  
> **Output:** `1`

---

## Constraints
* `n == height.length`
* `2 <= n <= 10^5`
* `0 <= height[i] <= 10^4`

---

## 💡 Logic & Intuition
The area of a container is limited by the **shorter line**. To find the maximum area:
1. Use two pointers: one at the **start** (`left`) and one at the **end** (`right`) of the array.
2. Calculate the area: `Area = min(height[left], height[right]) * (right - left)`.
3. Move the pointer pointing to the **shorter line** inward, as this is the only way to potentially find a taller line and a larger area.