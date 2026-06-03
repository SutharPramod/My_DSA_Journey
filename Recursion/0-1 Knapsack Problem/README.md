# LeetCode [Classic] 0/1 Knapsack Problem

## Problem Statement
You are given `n` items, each with a specific weight and a specific value. You are also given a knapsack with a maximum weight capacity `W`. 

Your goal is to determine the maximum total value of items you can carry in the knapsack, such that the sum of the weights of the selected items is less than or equal to `W`. You cannot break items; you must either take the whole item (1) or leave it (0).

## Input
- The first line contains two integers `n` and `W`, representing the number of items and the maximum capacity of the knapsack.
- The second line contains `n` space-separated integers representing the values of the items.
- The third line contains `n` space-separated integers representing the weights of the items.

## Output
- Print a single integer representing the maximum total value possible within the given weight capacity.

## Constraints
- `1 <= n <= 1000`
- `1 <= W <= 1000`
- `1 <= value[i], weight[i] <= 1000`

## Examples

### Example 1
Input:
3 4
1 2 3
4 5 1

Output:
3

### Example 2
Input:
3 50
60 100 120
10 20 30

Output:
220