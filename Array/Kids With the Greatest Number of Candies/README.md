# LeetCode 1431. Kids With the Greatest Number of Candies

## Problem Statement
There are `n` kids with candies. You are given an integer array `candies`, where each `candies[i]` represents the number of candies the $i^{th}$ kid has, and an integer `extraCandies`, denoting the number of extra candies that you have.

Return a boolean array `result` of length `n`, where `result[i]` is `true` if, after giving the $i^{th}$ kid all the `extraCandies`, they will have the greatest number of candies among all the kids, or `false` otherwise.

Note that multiple kids can have the greatest number of candies.

## Input
- The first line contains two integers `n` and `extraCandies`, representing the number of kids and the number of extra candies you have.
- The second line contains `n` space-separated integers, representing the current number of candies each kid has.

## Output
- Print `n` space-separated boolean values (`true` or `false`), representing whether each kid can have the greatest number of candies.

## Constraints
- `n == candies.length`
- `2 <= n <= 100`
- `1 <= candies[i] <= 100`
- `1 <= extraCandies <= 50`

## Examples

### Example 1
Input:
5 3
2 3 5 1 3

Output:
true true true false true

### Example 2
Input:
5 1
4 2 1 1 2

Output:
true false false false false

### Example 3
Input:
3 10
12 1 12

Output:
true false true

## Notes
- To determine if a kid can have the greatest number of candies, their potential total (`candies[i] + extraCandies`) must be greater than or equal to the maximum number of candies *any* kid currently has in the original array.
- **Recommended Approach:** 
  1. Find the current maximum value in the `candies` array ($O(n)$ time).
  2. Iterate through the array again. For each kid, check if `candies[i] + extraCandies >= maxCandies`.
  3. Store the boolean result (`true`/`false`) for each check. This approach is highly efficient with a time complexity of $O(n)$ and an auxiliary space complexity of $O(1)$ (excluding the space required for the output array).