# LeetCode 1356. Sort Integers by The Number of 1 Bits

## Problem Statement
You are given an integer array `arr`. Sort the integers in the array in ascending order by the number of **1's** in their binary representation. 

In case of two or more integers having the same number of 1's, you must sort them in **ascending order** by their numerical value.

Return the array after sorting it.

## Input
- The first line contains an integer `n`, representing the number of elements in `arr`.
- The second line contains `n` space-separated integers representing `arr[]`.

## Output
- Print `n` space-separated integers representing the sorted array.

## Constraints
- `1 <= arr.length <= 500`
- `0 <= arr[i] <= 10^4`

## Examples

### Example 1
Input:
9
0 1 2 3 4 5 6 7 8

Output:
0 1 2 4 8 3 5 6 7

**Explanation:** 
- `0` has 0 bits (0)
- `1, 2, 4, 8` each have 1 bit (1, 10, 100, 1000) $\rightarrow$ sorted as `1, 2, 4, 8`
- `3, 5, 6` each have 2 bits (11, 101, 110) $\rightarrow$ sorted as `3, 5, 6`
- `7` has 3 bits (111)

### Example 2
Input:
8
1024 512 256 128 64 32 16 8

Output:
8 16 32 64 128 256 512 1024

**Explanation:** All integers have 1 bit in their binary representation, so they are sorted strictly by numerical value.