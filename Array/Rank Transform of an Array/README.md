# LeetCode 1331. Rank Transform of an Array

## Problem Statement
Given an array of integers `arr`, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:
- Rank is an integer starting from 1.
- The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
- Ranks should be as small as possible.

## Input
- The first line contains an integer `n`, representing the number of elements in `arr`.
- The second line contains `n` space-separated integers representing `arr[]`.

## Output
- Print `n` space-separated integers representing the rank-transformed array.

## Constraints
- `0 <= arr.length <= 10^5`
- `-10^9 <= arr[i] <= 10^9`

## Examples

### Example 1
Input:
4
40 10 20 30

Output:
4 1 2 3

**Explanation:** 
- `10` is the smallest element $\rightarrow$ rank 1.
- `20` is the second smallest $\rightarrow$ rank 2.
- `30` is the third smallest $\rightarrow$ rank 3.
- `40` is the largest element $\rightarrow$ rank 4.

### Example 2
Input:
3
100 100 100

Output:
1 1 1

**Explanation:** All elements are equal, so they all receive the minimum rank of 1.

### Example 3
Input:
6
37 12 28 9 100 56 80 5 12

Output:
5 3 4 2 8 6 7 1 3

**Explanation:** Sorting unique elements yields `[5, 9, 12, 28, 37, 56, 80, 100]` with ranks assigned from 1 to 8.