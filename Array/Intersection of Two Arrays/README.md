# LeetCode 349. Intersection of Two Arrays

## Problem Statement
Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must be **unique** and you may return the result in **any order**.

## Input
- The first line contains an integer `n1`, representing the number of elements in `nums1`.
- The second line contains `n1` space-separated integers representing the elements of `nums1`.
- The third line contains an integer `n2`, representing the number of elements in `nums2`.
- The fourth line contains `n2` space-separated integers representing the elements of `nums2`.

## Output
- Print space-separated integers representing the unique elements present in both arrays.

## Constraints
- `1 <= nums1.length, nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 1000`

## Examples

### Example 1
Input:
4
1 2 2 1
2
2 2

Output:
2

### Example 2
Input:
3
4 9 5
5
9 4 9 8 4

Output:
9 4

**Explanation:** `[4, 9]` is also accepted.