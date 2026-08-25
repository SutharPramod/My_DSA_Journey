# LeetCode 561. Array Partition

## Problem Statement
Given an integer array `nums` of $2n$ integers, group these integers into $n$ pairs $(a_1, b_1), (a_2, b_2), \dots, (a_n, b_n)$ such that the sum of $\min(a_i, b_i)$ for all $i$ is **maximized**.

Return the **maximized sum**.

## Input
- The first line contains an integer representing the size of the array ($2n$).
- The second line contains $2n$ space-separated integers representing `nums[]`.

## Output
- Print a single integer representing the maximum possible sum of the minimums of $n$ pairs.

## Constraints
- $1 \le n \le 10^4$
- $\text{nums.length} == 2n$
- $-10^4 \le \text{nums}[i] \le 10^4$

## Examples

### Example 1
Input:
4
1 4 3 2

Output:
4

**Explanation:**
All possible pairings of length 2 are:
1. `(1, 4), (2, 3)` $\rightarrow \min(1, 4) + \min(2, 3) = 1 + 2 = 3$
2. `(1, 3), (2, 4)` $\rightarrow \min(1, 3) + \min(2, 4) = 1 + 2 = 3$
3. `(1, 2), (3, 4)` $\rightarrow \min(1, 2) + \min(3, 4) = 1 + 3 = 4$

The maximum sum is `4`.

### Example 2
Input:
6
6 2 6 5 1 2

Output:
9

**Explanation:**
The optimal pairing is `(1, 2), (2, 5), (6, 6)`.
$\min(1, 2) + \min(2, 5) + \min(6, 6) = 1 + 2 + 6 = 9$.