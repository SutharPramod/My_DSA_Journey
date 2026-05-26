# LeetCode 547. Number of Provinces

## Problem Statement
There are `n` cities. Some of them are connected, while some are not. If city `a` is connected directly with city `b`, and city `b` is connected directly with city `c`, then city `a` is connected indirectly with city `c`.

A **province** is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an `n x n` matrix `isConnected` where `isConnected[i][j] = 1` if the $i^{th}$ city and the $j^{th}$ city are directly connected, and `isConnected[i][j] = 0` otherwise.

Return the total number of **provinces**.

## Input
- The first line contains a single integer `n`, representing the number of cities.
- The next `n` lines each contain `n` space-separated integers (0 or 1), representing the adjacency matrix `isConnected`.

## Output
- Print a single integer representing the total number of provinces found.

## Constraints
- `1 <= n <= 200`
- `n == isConnected.length`
- `n == isConnected[i].length`
- `isConnected[i][j]` is `1` or `0`.
- `isConnected[i][i] == 1`
- `isConnected[i][j] == isConnected[j][i]`

## Examples

### Example 1
Input:
3
1 1 0
1 1 0
0 0 1

Output:
2

### Example 2
Input:
3
1 0 0
0 1 0
0 0 1

Output:
3

## Notes
- This problem is a classic application of finding **Connected Components** in an undirected graph.
- The input is provided as an adjacency matrix, where each row and column represent a node (city).
- A province is formed whenever a set of nodes can reach each other through edges. The goal is to count how many such disjoint sets exist.
- Traverse the graph using graph traversal techniques to visit all nodes in a single province before moving to an unvisited node to start counting the next province.