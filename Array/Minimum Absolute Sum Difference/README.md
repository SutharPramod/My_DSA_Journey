# LeetCode 1818. Minimum Absolute Sum Difference

## Problem Statement
You are given two positive integer arrays `nums1` and `nums2`, both of length `n`.

The **absolute sum difference** of `nums1` and `nums2` is defined as the sum of $|nums1[i] - nums2[i]|$ for each $0 \le i < n$.

You can replace **at most one** element of `nums1` with any other element that already exists in `nums1` to minimize the absolute sum difference.

Return the **minimum absolute sum difference** after replacing at most one element in `nums1`. Since the answer may be large, return it modulo $10^9 + 7$.

## Input
- The first line contains an integer `n`, representing the length of the arrays.
- The second line contains `n` space-separated integers representing `nums1[]`.
- The third line contains `n` space-separated integers representing `nums2[]`.

## Output
- Print a single integer representing the minimum absolute sum difference modulo $10^9 + 7$.

## Constraints
- `n == nums1.length == nums2.length`
- `1 <= n <= 10^5`
- `1 <= nums1[i], nums2[i] <= 10^5`

## Examples

### Example 1
Input:
3
1 7 5
2 3 5

Output:
3

**Explanation:** There are two possible optimal solutions:
- Replace `nums1[1]` (7) with `nums1[0]` (1) $\rightarrow$ `[1, 1, 5]`.
- Replace `nums1[1]` (7) with `nums1[2]` (5) $\rightarrow$ `[1, 5, 5]`.

Both result in $|1-2| + |1-3| + |5-5| = 1 + 2 + 0 = 3$.

### Example 2
Input:
5
2 4 6 8 10
2 4 6 8 10

Output:
0

**Explanation:** `nums1` is identical to `nums2`, so no replacement is needed. The absolute sum difference is 0.

### Example 3
Input:
6
1 10 4 4 2 7
9 3 5 1 7 4

Output:
20

**Explanation:** Replace `nums1[0]` (1) with `nums1[1]` (10) $\rightarrow$ `[10, 10, 4, 4, 2, 7]`.
New difference: $|10-9| + |10-3| + |4-5| + |4-1| + |2-7| + |7-4| = 1 + 7 + 1 + 3 + 5 + 3 = 20$.