# LeetCode 1732. Find the Highest Altitude

## Problem Statement
There is a biker going on a road trip. The road trip consists of `n + 1` points at different altitudes. The biker starts at point `0` with an altitude of `0`.

You are given an integer array `gain` of length `n` where `gain[i]` is the net gain in altitude between points `i` and `i + 1` for all `0 <= i < n`. Return the highest altitude of a point.

## Input
- The first line contains a single integer `n`, representing the number of altitude gains.
- The second line contains `n` space-separated integers, representing the net gain in altitude between consecutive points.

## Output
- Print a single integer representing the highest altitude reached during the trip.

## Constraints
- `n == gain.length`
- `1 <= n <= 100`
- `-100 <= gain[i] <= 100`

## Examples

### Example 1
Input:
5
-5 1 5 0 -7

Output:
1

**Explanation:**
The altitudes are `[0, -5, -4, 1, 1, -6]`. The highest is 1.

### Example 2
Input:
4
4 -3 2 -1

Output:
4

**Explanation:**
The altitudes are `[0, 4, 1, 3, 2]`. The highest is 4.

## Notes
- The problem requires tracking a running total of the altitude as you iterate through the gains.
- The absolute altitude at any point `i + 1` is calculated by adding the gain `gain[i]` to the current altitude at point `i`.
- Since the biker always starts at altitude `0`, the initial maximum altitude must be initialized to `0` rather than a placeholder small integer, as the biker might never reach an altitude higher than the starting point.
- This pattern is closely related to finding the maximum prefix sum of an array.