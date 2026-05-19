# Network Delay Time

## Problem Statement

You are given a network of `n` nodes labeled from `1` to `n`.

You are also given a list `times` where each element is represented as:

`times[i] = [u, v, w]`

This indicates that there is a directed edge from node `u` to node `v` with a travel time of `w`.

A signal is sent from a given node `k`. Determine the minimum time required for all nodes to receive the signal.

If it is impossible for all nodes to receive the signal, return `-1`.

## Input

- The first line contains two integers `n` and `m`, representing the number of nodes and edges.
- The next `m` lines each contain three integers `u`, `v`, and `w` representing a directed edge.
- The last line contains an integer `k`, the starting node.

## Output

- Print a single integer representing the minimum time required for all nodes to receive the signal.
- If some nodes cannot be reached, print `-1`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `1 ≤ m ≤ 2 × 10^5`
- `1 ≤ u, v ≤ n`
- `0 ≤ w ≤ 100`
- `1 ≤ k ≤ n`

## Examples

### Example 1


Input:
4 3
2 1 1
2 3 1
3 4 1
2

Output:
2


### Example 2


Input:
2 1
1 2 1
1

Output:
1


### Example 3


Input:
2 1
1 2 1
2

Output:
-1


## Notes

- The graph is directed.
- The signal travels along edges and accumulates travel time.
- The answer is the maximum shortest-path distance from the starting node to all other reachable nodes.
- If any node is unreachable, the result should be `-1`.