# LeetCode 448. Find All Numbers Disappeared in an Array

## Problem Statement
Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return an array of all the integers in the range `[1, n]` that do not appear in `nums`.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print space-separated integers representing all the missing numbers in ascending order. If no numbers are missing, output an empty line.

## Constraints
- `n == nums.length`
- `1 <= n <= 10^5`
- `1 <= nums[i] <= n`

## Examples

### Example 1
Input:
8
4 3 2 7 8 2 3 1

Output:
5 6

**Explanation:** 
- The array length `n = 8`, so the expected range is `[1, 8]`.
- The numbers `5` and `6` do not appear in `nums`.

### Example 2
Input:
2
1 1

Output:
2

**Explanation:** 
- The array length `n = 2`, so the expected range is `[1, 2]`.
- The number `2` is missing.