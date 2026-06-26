# Perfect Sum Problem

## Problem Statement
Given an array `arr` of non-negative integers and an integer `target`, count the total number of subsets of the given array whose elements sum up exactly to `target`.

Since the answer can be quite large, outputs are generally expected modulo $10^9 + 7$ in some competitive programming variations, but here we will focus on the core count.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `arr`.
- The third line contains an integer `target`.

## Output
- Print a single integer representing the total number of unique subsets that sum up to `target`.

## Constraints
- `1 <= n <= 100`
- `0 <= arr[i] <= 1000`
- `0 <= target <= 10^4`

## Examples

### Example 1
Input:
4
1 2 3 3
3

Output:
3

**Explanation:** There are 3 subsets that sum up to 3:
1. `[1, 2]` (at indices 0 and 1)
2. `[3]` (at index 2)
3. `[3]` (at index 3)

### Example 2
Input:
5
1 1 1 1 1
2

Output:
10

**Explanation:** Choosing any 2 elements out of the 5 items gives a sum of 2. The total combinations can be calculated as $\binom{5}{2} = 10$.