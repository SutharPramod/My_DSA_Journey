# LeetCode 787. Cheapest Flights Within K Stops

## Problem Statement
There are `n` cities connected by a number of flights. You are given an array `flights` where:

`flights[i] = [from, to, price]`

indicates that there is a flight from city `from` to city `to` with cost `price`.

You are also given three integers:
- `src` → starting city
- `dst` → destination city
- `k` → maximum number of stops allowed

Return the cheapest price from `src` to `dst` with at most `k` stops. If no such route exists, return `-1`.

## Input
- The first line contains two integers `n` and `m`, representing the number of cities and flights.
- The next `m` lines each contain three integers `from`, `to`, and `price`.
- The last line contains three integers `src`, `dst`, and `k`.

## Output
- Print a single integer representing the minimum flight cost.
- If the destination cannot be reached within `k` stops, print `-1`.

## Constraints
- 1 <= n <= 100
- 0 <= m <= n * (n - 1)
- 0 <= from, to < n
- 1 <= price <= 10^4
- 0 <= k < n

## Examples

### Example 1
Input:
4 5
0 1 100
1 2 100
2 3 100
0 2 500
1 3 600
0 3 1

Output:
300

### Example 2
Input:
3 3
0 1 100
1 2 100
0 2 500
0 2 1

Output:
200

### Example 3
Input:
3 1
0 1 100
0 2 1

Output:
-1

## Notes
- A stop occurs when passing through an intermediate city.
- A direct flight from `src` to `dst` has `0` stops.
- Multiple paths may exist between two cities, but only paths within the stop limit are valid.
- Recommended Approach: Modified Breadth-First Search (BFS) or Bellman-Ford algorithm tracking the number of stops to avoid tracking stale, cheaper paths that exceed the step limit.