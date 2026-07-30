# LeetCode 81. Search in Rotated Sorted Array II

## Problem Statement
There is an integer array `nums` sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, `nums` is **rotated** at an unknown pivot index `k` (`0 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (0-indexed). For example, `[0,1,2,4,4,4,5,6,7]` might be rotated at pivot index 5 and become `[4,5,6,7,0,1,2,4,4]`.

Given the array `nums` after the rotation and an integer `target`, return `true` if `target` is in `nums`, or `false` if it is not in `nums`.

You must decrease the overall operation steps as much as possible.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the rotated sorted array `nums`.
- The third line contains an integer `target`.

## Output
- Print `true` if `target` exists in `nums`, or `false` otherwise.

## Constraints
- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is guaranteed to be rotated at some pivot.
- `-10^4 <= target <= 10^4`

## Examples

### Example 1
Input:
7
2 5 6 0 0 1 2
0

Output:
true

**Explanation:** The target 0 is present in the array at indices 3 and 4.

### Example 2
Input:
7
2 5 6 0 0 1 2
3

Output:
false

**Explanation:** The target 3 is not present in the array.