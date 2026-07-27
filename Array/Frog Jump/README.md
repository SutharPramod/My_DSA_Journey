# GeeksforGeeks / LeetCode Premium. Frog Jump

## Problem Statement
Given an integer array `height[]` where `height[i]` represents the height of the $i^{th}$ stair, a frog starts from the first stair (index 0) and wants to reach the last stair (index $n - 1$). 

From any stair $i$, the frog can jump to either the $(i+1)^{th}$ stair or the $(i+2)^{th}$ stair. The cost of a jump is the absolute difference in height between the two stairs: $|height[i] - height[j]|$.

Determine the minimum total cost required for the frog to reach the last stair.

## Input
- The first line contains an integer `n`, representing the number of stairs in the array.
- The second line contains `n` space-separated integers representing `height[]`.

## Output
- Print a single integer representing the minimum total cost to reach the last stair.

## Constraints
- `1 <= height.length <= 10^5`
- `0 <= height[i] <= 10^4`

## Examples

### Example 1
Input:
4
20 30 40 20

Output:
20

**Explanation:** Minimum cost is incurred when the frog jumps from stair 0 to 1, then 1 to 3:
- Jump 0 -> 1: cost = |30 - 20| = 10
- Jump 1 -> 3: cost = |20 - 30| = 10
Total Cost = 10 + 10 = 20

### Example 2
Input:
5
30 20 50 10 40

Output:
30

**Explanation:** Minimum cost is incurred when the frog jumps from stair 0 to 2, then 2 to 4:
- Jump 0 -> 2: cost = |50 - 30| = 20
- Jump 2 -> 4: cost = |40 - 50| = 10
Total Cost = 20 + 10 = 30