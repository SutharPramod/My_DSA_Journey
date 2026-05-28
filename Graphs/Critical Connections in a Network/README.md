# LeetCode 1192. Critical Connections in a Network

## Problem Statement
There are `n` servers numbered from `0` to `n - 1` connected by undirected server-to-server `connections` forming a network where `connections[i] = [ai, bi]` represents a connection between servers `ai` and `bi`. Any server can reach other servers directly or indirectly through the network.

A **critical connection** is a connection that, if removed, will make some servers unable to reach some other servers.

Return all critical connections in the network in any order.

## Input
- The first line contains two integers `n` and `m`, representing the number of servers and the number of connections.
- The next `m` lines each contain two integers `ai` and `bi`, representing a connection between two servers.

## Output
- Print each critical connection as a pair of integers. Each pair should be on a new line.

## Constraints
- `2 <= n <= 10^5`
- `n - 1 <= connections.length <= 10^5`
- `0 <= ai, bi <= n - 1`
- `ai != bi`
- There are no repeated connections.

## Examples

### Example 1
Input:
4 4
0 1
1 2
2 0
1 3

Output:
1 3

### Example 2
Input:
2 1
0 1

Output:
0 1

## Notes
- In graph theory, a critical connection is known as a **Bridge**.
- An edge is a bridge if and only if it is not part of any cycle.
- The problem requires identifying edges in an undirected graph whose removal increases the number of connected components.
- A depth-first search (DFS) traversal can be used to assign "discovery times" to nodes. By tracking the lowest discovery time reachable from a node (excluding the edge used to reach it), we can identify if an edge leads to a separate part of the graph that cannot loop back.