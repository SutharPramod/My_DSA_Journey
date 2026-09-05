# LeetCode 628. Maximum Product of Three Numbers

## Problem Statement
Given an integer array `nums`, find three numbers whose product is maximum and return the **maximum product**.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print a single integer representing the maximum product of three numbers.

## Constraints
- `3 <= nums.length <= 10^4`
- `-1000 <= nums[i] <= 1000`

## Examples

### Example 1
Input:
3
1 2 3

Output:
6

**Explanation:** The product of `1 * 2 * 3` is `6`.

### Example 2
Input:
4
1 2 3 4

Output:
24

**Explanation:** The product of `2 * 3 * 4` is `24`.

### Example 3
Input:
4
-100 -98 1 23

Output:
225400

**Explanation:** Multiplying two large negative numbers (`-100 * -98`) results in a large positive number (`9800`), which when multiplied by the largest positive number (`23`) gives `225400`.