# LeetCode 494. Target Sum

## Problem Statement
You are given an integer array `nums` and an integer `target`.

You want to build an **expression** out of nums by adding one of the symbols `+` and `-` before each integer in `nums` and then concatenate all the integers.
- For example, if `nums = [2, 1]`, you can add `+` before 2 and `-` before 1 to form the expression `+2 - 1 = 1`.

Return the number of different expressions that you can build, which evaluate to `target`.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `nums`.
- The third line contains an integer `target`.

## Output
- Print a single integer representing the total number of valid expressions that evaluate exactly to `target`.

## Constraints
- `1 <= nums.length <= 20`
- `0 <= nums[i] <= 1000`
- `0 <= sum(nums[i]) <= 1000`
- `-1000 <= target <= 1000`

## Examples

### Example 1
Input:
5
1 1 1 1 1
3

Output:
5

**Explanation:** There are 5 ways to assign symbols to make the sum of nums be 3:
- `-1 + 1 + 1 + 1 + 1 = 3`
- `+1 - 1 + 1 + 1 + 1 = 3`
- `+1 + 1 - 1 + 1 + 1 = 3`
- `+1 + 1 + 1 - 1 + 1 = 3`
- `+1 + 1 + 1 + 1 - 1 = 3`

### Example 2
Input:
1
1
1

Output:
1