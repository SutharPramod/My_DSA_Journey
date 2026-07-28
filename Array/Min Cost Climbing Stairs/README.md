# LeetCode 746. Min Cost Climbing Stairs

## Problem Statement
You are given an integer array `cost` where `cost[i]` is the cost of $i^{th}$ step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index `0`, or the step with index `1`.

Return the **minimum cost** to reach the top of the floor (beyond the last index of the array).

## Input
- The first line contains an integer `n`, representing the number of steps in the array.
- The second line contains `n` space-separated integers representing `cost[]`.

## Output
- Print a single integer representing the minimum cost to reach the top of the staircase.

## Constraints
- `2 <= cost.length <= 1000`
- `0 <= cost[i] <= 999`

## Examples

### Example 1
Input:
3
10 15 20

Output:
15

**Explanation:** You will start at index 1:
- Pay 15 and climb two steps to reach the top.
Total cost = 15.

### Example 2
Input:
10
1 100 1 1 1 100 1 1 100 1

Output:
6

**Explanation:** You will start at index 0:
- Step 0: Pay 1, climb two steps to index 2.
- Step 2: Pay 1, climb two steps to index 4.
- Step 4: Pay 1, climb two steps to index 6.
- Step 6: Pay 1, climb two steps to index 8.
- Step 8: Pay 1, climb one step to index 9.
- Step 9: Pay 1, climb one step to reach the top.
Total cost = 6.