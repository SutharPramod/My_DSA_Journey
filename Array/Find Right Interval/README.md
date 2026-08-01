# LeetCode 436. Find Right Interval

## Problem Statement
You are given an array of `intervals`, where `intervals[i] = [start_i, end_i]` and each `start_i` is **unique**.

The **right interval** for an interval `i` is an interval `j` such that `start_j >= end_i` and `start_j` is **minimized**. Note that `i` may equal `j`.

Return an array of **right interval indices** for each interval `i`. If no right interval exists for interval `i`, then put `-1` at index `i`.

## Input
- The first line contains an integer `n`, representing the number of intervals.
- The next `n` lines each contain two space-separated integers representing `start_i` and `end_i`.

## Output
- Print `n` space-separated integers representing the index of the right interval for each input interval, or `-1` if none exists.

## Constraints
- `1 <= intervals.length <= 2 * 10^4`
- `intervals[i].length == 2`
- `-10^6 <= start_i <= end_i <= 10^6`
- The start point of each interval is **unique**.

## Examples

### Example 1
Input:
1
1 2

Output:
-1

**Explanation:** There is only one interval in the list, so it cannot have a right interval.

### Example 2
Input:
3
3 4
2 3
1 2

Output:
-1 0 1

**Explanation:**
- For `[3, 4]`: There is no interval with `start >= 4`, so output is `-1`.
- For `[2, 3]`: Interval `[3, 4]` (index 0) has `start = 3 >= 3`, which is the smallest matching start, so output is `0`.
- For `[1, 2]`: Interval `[2, 3]` (index 1) has `start = 2 >= 2`, which is the smallest matching start, so output is `1`.

### Example 3
Input:
3
1 4
2 3
3 4

Output:
-1 2 -1

**Explanation:**
- For `[1, 4]`: No interval has `start >= 4`, so output is `-1`.
- For `[2, 3]`: Interval `[3, 4]` (index 2) has `start = 3 >= 3`, so output is `2`.
- For `[3, 4]`: No interval has `start >= 4`, so output is `-1`.