# LeetCode 1095. Find in Mountain Array

## Problem Statement
An array `arr` is a **mountain array** if and only if:
- `arr.length >= 3`
- There exists some index `i` ($0 < i < \text{arr.length} - 1$) such that:
  - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]` (strictly increasing left slope)
  - `arr[i] > arr[i + 1] > ... > arr[arr.length - 1]` (strictly decreasing right slope)

Given a mountain array `mountainArr` and an integer `target`, return the **minimum index** such that `mountainArr.get(index) == target`. If such an index does not exist, return `-1`.

You cannot access the array directly. You may only access the array using a `MountainArray` interface:
- `MountainArray.get(k)` returns the element at index `k` (0-indexed).
- `MountainArray.length()` returns the total length of the array.

Submissions making more than **100 calls** to `MountainArray.get` will be judged *Wrong Answer*.

## Input
- The first line contains an integer `n`, representing the array length.
- The second line contains `n` space-separated integers representing the hidden `mountainArr`.
- The third line contains an integer `target`.

## Output
- Print a single integer representing the minimum index where `target` occurs, or `-1` if it is not present.

## Constraints
- `3 <= mountain_arr.length() <= 10^4`
- `0 <= target <= 10^9`
- `0 <= mountain_arr.get(index) <= 10^9`

## Examples

### Example 1
Input:
7
1 2 3 4 5 3 1
3

Output:
2

**Explanation:** The target `3` exists at index `2` (left increasing slope) and index `5` (right decreasing slope). The minimum index is `2`.

### Example 2
Input:
6
0 1 2 4 2 1
3

Output:
-1

**Explanation:** `3` does not exist in `mountainArr`, so output `-1`.

## Notes