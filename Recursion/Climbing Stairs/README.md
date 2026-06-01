# LeetCode 70. Climbing Stairs

## Problem Statement
You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

## Input
- The input consists of a single line containing an integer `n`, representing the total number of steps to reach the top.

## Output
- Print a single integer representing the number of distinct ways to reach the top.

## Constraints
- `1 <= n <= 45`

## Examples

### Example 1
Input:
2

Output:
2

### Example 2
Input:
3

Output:
3

## Notes
- This problem exhibits an optimal substructure and overlapping subproblems properties, meaning the problem can be broken down into simpler subproblems.
- To reach the $n^{th}$ step, you can only arrive from either the $(n-1)^{th}$ step (by taking 1 step) or the $(n-2)^{th}$ step (by taking 2 steps). Thus, the total ways to reach step $n$ is the sum of the ways to reach step $n-1$ and step $n-2$.
- The subproblem dependency pattern matches the classic Fibonacci sequence structure where $W(n) = W(n-1) + W(n-2)$ with base cases $W(1) = 1$ and $W(2) = 2$.