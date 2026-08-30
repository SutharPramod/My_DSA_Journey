# LeetCode 905. Sort Array By Parity

## Problem Statement
Given an integer array `nums`, move all the **even integers** at the beginning of the array followed by all the **odd integers**.

Return **any array** that satisfies this condition.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print `n` space-separated integers representing the array where all even numbers precede all odd numbers.

## Constraints
- `1 <= nums.length <= 5000`
- `0 <= nums[i] <= 5000`

## Examples

### Example 1
Input:
4
3 1 2 4

Output:
2 4 3 1

**Explanation:** The outputs `[2, 4, 3, 1]`, `[4, 2, 1, 3]`, `[2, 4, 1, 3]`, and `[4, 2, 3, 1]` are all accepted.

### Example 2
Input:
1
0

Output:
0