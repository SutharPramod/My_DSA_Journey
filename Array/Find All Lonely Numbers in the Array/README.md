# LeetCode 2150. Find All Lonely Numbers in the Array

## Problem Statement
You are given an integer array `nums`. A number $x$ is **lonely** if it satisfies both of the following conditions:
1. It appears **exactly once** in the array.
2. Neither $x - 1$ nor $x + 1$ appears in the array.

Return **all lonely numbers** in `nums`. You may return the answer in **any order**.

## Input
- The first line contains an integer $n$, representing the number of elements in `nums`.
- The second line contains $n$ space-separated integers representing `nums[]`.

## Output
- Print a space-separated sequence of integers representing all lonely numbers. If no lonely numbers exist, print an empty output.

## Constraints
- $1 \le \text{nums.length} \le 10^5$
- $0 \le \text{nums}[i] \le 10^6$

## Examples

### Example 1
Input:
4
10 6 5 8

Output:
10 8

**Explanation:**
- `10` is lonely: it appears once, and neither `9` nor `11` appears in the array.
- `8` is lonely: it appears once, and neither `7` nor `9` appears in the array.
- `5` is not lonely because `6` (i.e., $5 + 1$) is in the array.
- `6` is not lonely because `5` (i.e., $6 - 1$) is in the array.

### Example 2
Input:
4
1 3 5 3

Output:
1 5

**Explanation:**
- `1` is lonely: it appears once, and neither `0` nor `2` appears in the array.
- `5` is lonely: it appears once, and neither `4` nor `6` appears in the array.
- `3` is not lonely because it appears twice in `nums`.