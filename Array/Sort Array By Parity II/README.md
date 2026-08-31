# LeetCode 922. Sort Array By Parity II

## Problem Statement
Given an array of integers `nums` of **even length**, half of the integers in `nums` are **even**, and the other half are **odd**.

Sort the array so that whenever `nums[i]` is odd, `i` is **odd**, and whenever `nums[i]` is even, `i` is **even**.

Return **any answer array** that satisfies this condition.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print `n` space-separated integers representing the rearranged array where even indices hold even numbers and odd indices hold odd numbers.

## Constraints
- `2 <= nums.length <= 2 * 10^4`
- `nums.length` is even.
- Half of the integers in `nums` are even.
- `0 <= nums[i] <= 1000`

## Examples

### Example 1
Input:
4
4 2 5 7

Output:
4 5 2 7

**Explanation:** `[4, 5, 2, 7]`, `[4, 7, 2, 5]`, `[2, 5, 4, 7]`, `[2, 7, 4, 5]` are all accepted outputs.
- At index `0` (even): value `4` (even)
- At index `1` (odd): value `5` (odd)
- At index `2` (even): value `2` (even)
- At index `3` (odd): value `7` (odd)

### Example 2
Input:
2
2 3

Output:
2 3

**Explanation:** At index `0` is `2` (even) and at index `1` is `3` (odd).