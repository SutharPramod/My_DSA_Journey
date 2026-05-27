# LeetCode 1584. Min Cost to Connect All Points

## Problem Statement
You are given an array `points` representing integer coordinates of some points on a 2D-plane, where `points[i] = [xi, yi]`.

The cost of connecting two points `[xi, yi]` and `[xj, yj]` is the **manhattan distance** between them: `|xi - xj| + |yi - yj|`, where `|val|` denotes the absolute value of `val`.

Return the minimum cost to make all points connected. All points are connected if there is exactly one simple path between any two points.

## Input
- The first line contains an integer `n`, representing the number of points.
- The next `n` lines each contain two integers `xi` and `yi`, representing the coordinates of the $i^{th}$ point.

## Output
- Print a single integer representing the minimum cost to connect all points.

## Constraints
- `1 <= n <= 1000`
- `-10^6 <= xi, yi <= 10^6`
- All pairs `(xi, yi)` are distinct.

## Examples

### Example 1
Input:
5
0 0
2 2
3 10
5 2
7 0

Output:
20

### Example 2
Input:
2
3 12
-2 5

Output:
18

## Notes
- This problem is a classic variation of the **Minimum Spanning Tree (MST)** problem.
- The "points" are the nodes of a complete graph where every point has an edge to every other point.
- The weights of the edges are determined by the Manhattan distance formula provided in the statement.
- The goal is to find a subset of edges that connects all nodes with the minimum total edge weight and no cycles.
- Standard algorithms for solving MST, such as Prim's Algorithm or Kruskal's Algorithm, are applicable here.