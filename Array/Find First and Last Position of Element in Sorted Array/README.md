# LeetCode 34. Find First and Last Position of Element in Sorted Array

## Problem Statement
Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with $O(\log n)$ runtime complexity.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the sorted array `nums`.
- The third line contains an integer `target`.

## Output
- Print two space-separated integers representing the first and last position of the `target`. If the target is not found, print `-1 -1`.

## Constraints
- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `nums` is a non-decreasing array.
- `-10^9 <= target <= 10^9`

## Examples

### Example 1
Input:
6
5 7 7 8 8 10
8

Output:
3 4

**Explanation:** The target 8 appears first at index 3 and last at index 4.

### Example 2
Input:
6
5 7 7 8 8 10
6

Output:
-1 -1

**Explanation:** The target 6 does not exist in the array, so we return `[-1, -1]`.

### Example 3
Input:
0

0

Output:
-1 -1