# LeetCode 1636. Sort Array by Increasing Frequency

## Problem Statement
Given an array of integers `nums`, sort the array in **increasing order** based on the frequency of the values. If multiple values have the same frequency, sort them in **decreasing order** by their numerical value.

Return the sorted array.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print `n` space-separated integers representing the frequency-sorted array.

## Constraints
- `1 <= nums.length <= 100`
- `-100 <= nums[i] <= 100`

## Examples

### Example 1
Input:
6
1 1 2 2 2 3

Output:
3 1 1 2 2 2

**Explanation:**
- Frequency of `3` is 1.
- Frequency of `1` is 2.
- Frequency of `2` is 3.
So the elements ordered by frequency are `3` (occurs 1 time), `1` (occurs 2 times), and `2` (occurs 3 times).

### Example 2
Input:
6
2 3 1 3 2 1

Output:
3 3 2 2 1 1

**Explanation:** 
- `1`, `2`, and `3` all have a frequency of 2.
- Since frequencies are tied, sort elements in decreasing order by numerical value: `3`, `2`, `1`.

### Example 3
Input:
8
-1 1 -6 4 5 -6 1 4

Output:
5 -1 4 4 1 1 -6 -6

**Explanation:**
- `5` has frequency 1.
- `-1` has frequency 1 (tied with `5`, but `-1` is smaller so it comes after `5` in decreasing value).
- `4`, `1`, `-6` all have frequency 2. Arranged in decreasing order: `4`, `1`, `-6`.