# LeetCode 2951. Find the Peaks

## Problem Statement
You are given a 0-indexed array `mountain`. An element is considered a **peak** if it is strictly greater than its adjacent elements (i.e., strictly greater than both its left neighbor and its right neighbor).

Return an array containing the indices of all the peaks in the `mountain` array in any order.

Note:
- The first and last elements of the array are **not** considered peaks because they do not have two adjacent elements.

## Input
- The first line contains an integer `n`, representing the number of elements in `mountain`.
- The second line contains `n` space-separated integers representing the array `mountain[]`.

## Output
- Print a space-separated sequence of integers representing the 0-indexed positions of all peak elements. If no peaks exist, print an empty output.

## Constraints
- `3 <= mountain.length <= 100`
- `1 <= mountain[i] <= 100`

## Examples

### Example 1
Input:
3
2 4 4

Output:


**Explanation:**
- `mountain[0]` and `mountain[2]` cannot be peaks as they are boundary elements.
- For `mountain[1] = 4`: its left neighbor is `2` and right neighbor is `4`. Since $4 \ngtr 4$, it is not strictly greater than both neighbors.
- Therefore, no peaks exist.

### Example 2
Input:
5
1 4 3 8 5

Output:
1 3

**Explanation:**
- `mountain[1] = 4`: strictly greater than `mountain[0]` (1) and `mountain[2]` (3). Index `1` is a peak.
- `mountain[3] = 8`: strictly greater than `mountain[2]` (3) and `mountain[4]` (5). Index `3` is a peak.
- Output array of peak indices is `[1, 3]`.