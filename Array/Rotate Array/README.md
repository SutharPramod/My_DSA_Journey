# LeetCode 189. Rotate Array

## Problem Statement
Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `nums`.
- The third line contains an integer `k`, representing the number of steps to rotate.

## Output
- Print `n` space-separated integers representing the elements of the array after the rotation.

## Constraints
- `1 <= nums.length <= 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`
- `0 <= k <= 10^5`

## Examples

### Example 1
Input:
7
1 2 3 4 5 6 7
3

Output:
5 6 7 1 2 3 4

**Explanation:**
- Rotate 1 step to the right: `[7, 1, 2, 3, 4, 5, 6]`
- Rotate 2 steps to the right: `[6, 7, 1, 2, 3, 4, 5]`
- Rotate 3 steps to the right: `[5, 6, 7, 1, 2, 3, 4]`

### Example 2
Input:
4
-1 -100 3 99
2

Output:
3 99 -1 -100

**Explanation:** - Rotate 1 step to the right: `[99, -1, -100, 3]`
- Rotate 2 steps to the right: `[3, 99, -1, -100]`