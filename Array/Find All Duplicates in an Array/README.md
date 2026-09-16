# LeetCode 442. Find All Duplicates in an Array

## Problem Statement
Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]` and each integer appears **once** or **twice**, return an array of all the integers that appear **twice**.

You must write an algorithm that runs in $O(n)$ time and uses only constant extra space.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print space-separated integers representing all numbers that appear twice. If no elements appear twice, output an empty line.

## Constraints
- `n == nums.length`
- `1 <= n <= 10^5`
- `1 <= nums[i] <= n`
- Each element in `nums` appears **once** or **twice**.

## Examples

### Example 1
Input:
8
4 3 2 7 8 2 3 1

Output:
[2 3]

**Explanation:** The integers 2 and 3 appear twice in the array.

### Example 2
Input:
3
1 1 2

Output:
[1]

**Explanation:** The integer 1 appears twice in the array.

### Example 3
Input:
1
1

Output:[]

**Explanation:** All elements appear once, so the output is empty.