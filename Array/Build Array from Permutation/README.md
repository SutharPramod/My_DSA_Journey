# Build Array from Permutation

## Problem Statement

Given a zero-based permutation array `nums` of length `n`, build an array `ans` of the same length such that:

- `ans[i] = nums[nums[i]]` for each `0 ≤ i < n`

Return the resulting array `ans`.

A permutation array contains all integers from `0` to `n - 1` exactly once.

## Input

- The first line contains an integer `n`, the size of the permutation array.
- The second line contains `n` space-separated integers representing the array `nums`.

## Output

- Print the resulting array `ans` as space-separated integers.

## Constraints

- `1 ≤ n ≤ 1000`
- `0 ≤ nums[i] < n`
- All elements in `nums` are unique.

## Examples

### Example 1


Input:
6
0 2 1 5 3 4

Output:
0 1 2 4 5 3