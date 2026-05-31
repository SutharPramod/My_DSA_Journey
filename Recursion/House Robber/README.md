# LeetCode 198. House Robber

## Problem Statement
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

## Input
- The first line contains an integer `n`, representing the number of houses.
- The second line contains `n` space-separated integers, representing the amount of money in each house.

## Output
- Print a single integer representing the maximum amount of money that can be robbed.

## Constraints
- `1 <= n <= 100`
- `0 <= nums[i] <= 400`

## Examples

### Example 1
Input:
4
1 2 3 1

Output:
4

### Example 2
Input:
5
2 7 9 3 1

Output:
12

## Notes
- This is a optimization problem that can be solved using Dynamic Programming, as the decision at each house depends on the decisions made for the previous houses.
- At each house $i$, you have two choices:
    1. Rob the current house: In this case, you cannot rob house $i-1$, so your total money is `nums[i]` + maximum money robbed up to house $i-2$.
    2. Skip the current house: Your total money is the maximum money robbed up to house $i-1$.
- The state transition can be expressed as: `dp[i] = max(dp[i-1], nums[i] + dp[i-2])`.
- The problem demonstrates the "include-exclude" principle where the optimal solution for a larger problem is built from optimal solutions of its subproblems.