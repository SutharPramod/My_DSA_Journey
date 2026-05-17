# Is Graph Bipartite?

## Problem Statement

Given an undirected graph with `n` vertices labeled from `0` to `n - 1`, determine whether the graph is **bipartite**.

A graph is bipartite if its vertices can be divided into two disjoint sets such that no two adjacent vertices belong to the same set.

The graph is provided as an adjacency list.

## Input

- The first line contains an integer `n`, the number of vertices.
- The next `n` lines describe the adjacency list:
  - The `i`-th line contains space-separated integers representing all vertices adjacent to vertex `i`.
  - If a vertex has no neighbors, the line will be empty.

## Output

- Print `"true"` if the graph is bipartite, otherwise print `"false"`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `0 ≤ total edges ≤ 2 × 10^5`
- `0 ≤ adjacency[i][j] < n`
- The graph may be disconnected.

## Examples

### Example 1


Input:
4
1 3
0 2
1 3
0 2

Output:
true


### Example 2


Input:
3
1 2
0 2
0 1

Output:
false


### Example 3


Input:
5
1
0
3 4
2 4
2 3

Output:
true


## Notes

- A graph is bipartite if it can be colored using two colors such that no adjacent nodes have the same color.
- The graph may contain multiple disconnected components, each of which must satisfy the bipartite condition.
- Self-loops make a graph non-bipartite.