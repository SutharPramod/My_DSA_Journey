# LeetCode 416. Partition Equal Subset Sum

## Problem Statement
Given an integer array `nums`, return `true` if you can partition the array into two subsets such that the sum of the elements in both subsets is equal, or `false` otherwise.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `nums`.

## Output
- Print `true` if the array can be partitioned into two subsets with equal sums.
- Print `false` otherwise.

## Constraints
- `1 <= nums.length <= 200`
- `1 <= nums[i] <= 100`

## Examples

### Example 1
Input:
4
1 5 11 5

Output:
true

**Explanation:** The array can be partitioned as `[1, 5, 5]` and `[11]`. Both subsets sum up to 11.

### Example 2
Input:
4
1 2 3 5

Output:
false

**Explanation:** The total sum of the array is 11, which cannot be divided into two equal integer halves.