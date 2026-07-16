# LeetCode 55. Jump Game

## Problem Statement
You are given an integer array `nums`. You are initially positioned at the array's **first index**, and each element in the array represents your maximum jump length at that position.

Return `true` if you can reach the last index, or `false` otherwise.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the maximum jump lengths from each position.

## Output
- Print `true` if it is possible to reach the last index.
- Print `false` if it is impossible to jump to or past the last index.

## Constraints
- `1 <= nums.length <= 10^4`
- `0 <= nums[i] <= 10^5`

## Examples

### Example 1
Input:
5
2 3 1 1 4

Output:
true

**Explanation:** Jump 1 step from index 0 to 1, then 3 steps to the last index.

### Example 2
Input:
5
3 2 1 0 4

Output:
false

**Explanation:** You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.