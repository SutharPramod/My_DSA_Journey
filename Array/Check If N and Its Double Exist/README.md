# LeetCode 1346. Check If N and Its Double Exist

## Problem Statement
Given an array `arr` of integers, check if there exist two indices `i` and `j` such that:
- `i != j`
- `0 <= i, j < arr.length`
- `arr[i] == 2 * arr[j]`

Return `true` if such i and j exist, or `false` otherwise.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `arr`.

## Output
- Print `true` if a number and its double exist at distinct positions in the array.
- Print `false` otherwise.

## Constraints
- `2 <= arr.length <= 500`
- `-10^3 <= arr[i] <= 10^3`

## Examples

### Example 1
Input:
4
10 2 5 3

Output:
true

**Explanation:** For $i = 0$ and $j = 2$, `arr[0] == 2 * arr[2]` ($10 = 2 \times 5$).

### Example 2
Input:
4
3 1 7 11

Output:
false

**Explanation:** There is no pair of elements where one is twice the value of the other.