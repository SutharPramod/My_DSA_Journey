# LeetCode 35. Search Insert Position

## Problem Statement
Given a sorted array of distinct integers `nums` and a `target` value, return the index if the `target` is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the sorted array `nums`.
- The third line contains an integer `target`.

## Output
- Print a single integer representing the index of the target if found, or its correct insertion index if it is missing.

## Constraints
- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` contains distinct values sorted in ascending order.
- `-10^4 <= target <= 10^4`

## Examples

### Example 1
Input:
4
1 3 5 6
5

Output:
2

**Explanation:** The target 5 is found at index 2.

### Example 2
Input:
4
1 3 5 6
2

Output:
1

**Explanation:** The target 2 is not in the array, but it fits perfectly between 1 and 3, which is at index 1.

### Example 3
Input:
4
1 3 5 6
7

Output:
4

**Explanation:** The target 7 is greater than all elements in the array, so it must be inserted at the very end of the array (index 4).