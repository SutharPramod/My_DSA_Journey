# LeetCode 56. Merge Intervals

## Problem Statement
Given an array of `intervals` where `intervals[i] = [start_i, end_i]`, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

## Input
- The first line contains an integer `n`, representing the number of intervals.
- The next `n` lines each contain two space-separated integers representing `start_i` and `end_i`.

## Output
- Print each merged interval `[start, end]` on a new line (or space-separated pairs).

## Constraints
- `1 <= intervals.length <= 10^4`
- `intervals[i].length == 2`
- `0 <= start_i <= end_i <= 10^4`

## Examples

### Example 1
Input:
4
1 3
2 6
8 10
15 18

Output:
1 6
8 10
15 18

**Explanation:** Intervals `[1, 3]` and `[2, 6]` overlap, so they merge into `[1, 6]`.

### Example 2
Input:
2
1 4
4 5

Output:
1 5

**Explanation:** Intervals `[1, 4]` and `[4, 5]` are considered overlapping because their boundaries touch at `4`.