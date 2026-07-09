# LeetCode 1539. Kth Missing Positive Number

## Problem Statement
Given an array `arr` of positive integers sorted in a strictly increasing order, and an integer `k`.

Return the $k^{th}$ positive integer that is missing from this array.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `arr`.
- The third line contains an integer `k`.

## Output
- Print a single integer representing the $k^{th}$ missing positive integer.

## Constraints
- `1 <= arr.length <= 1000`
- `1 <= arr[i] <= 1000`
- `1 <= k <= 1000`
- `arr` is sorted in a strictly increasing order.

## Examples

### Example 1
Input:
5
2 3 4 7 11
5

Output:
9

**Explanation:** The missing positive integers are [1, 5, 6, 8, 9, 10, 12, 13, ...]. The 5th missing positive integer is 9.

### Example 2
Input:
4
1 2 3 4
2

Output:
6

**Explanation:** The missing positive integers are [5, 6, 7, ...]. The 2nd missing positive integer is 6.