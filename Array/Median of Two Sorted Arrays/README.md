# LeetCode 4. Median of Two Sorted Arrays

## Problem Statement
Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the **median** of the two sorted arrays.

The overall run time complexity should be $O(\log (m+n))$.

## Input
- The first line contains an integer `m`, representing the size of `nums1`.
- The second line contains `m` space-separated integers representing `nums1[]`.
- The third line contains an integer `n`, representing the size of `nums2`.
- The fourth line contains `n` space-separated integers representing `nums2[]`.

## Output
- Print a floating-point number representing the median of the combined sorted array.

## Constraints
- `nums1.length == m`
- `nums2.length == n`
- `0 <= m <= 1000`
- `0 <= n <= 1000`
- `1 <= m + n <= 2000`
- `-10^6 <= nums1[i], nums2[i] <= 10^6`

## Examples

### Example 1
Input:
2
1 3
1
2

Output:
2.00000

**Explanation:** merged array = [1, 2, 3] and median is 2.

### Example 2
Input:
2
1 2
2
3 4

Output:
2.50000

**Explanation:** merged array = [1, 2, 3, 4] and median is (2 + 3) / 2 = 2.5.