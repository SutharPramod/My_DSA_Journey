# LeetCode 1200. Minimum Absolute Difference

## Problem Statement
Given an array of **distinct** integers `arr`, find all pairs of elements with the **minimum absolute difference** of any two elements.

Return a list of pairs in **ascending order** (with respect to pairs), each pair `[a, b]` following:
- `a, b` are from `arr`
- `a < b`
- `b - a` equals the minimum absolute difference of any two elements in `arr`

## Input
- The first line contains an integer `n`, representing the number of elements in `arr`.
- The second line contains `n` space-separated integers representing `arr[]`.

## Output
- Print each pair `[a, b]` on a new line (or as space-separated pairs), where `a < b` and pairs are ordered by `a`.

## Constraints
- `2 <= arr.length <= 10^5`
- `-10^6 <= arr[i] <= 10^6`
- All elements in `arr` are **distinct**.

## Examples

### Example 1
Input:
4
4 2 1 3

Output:
1 2
2 3
3 4

**Explanation:** The minimum absolute difference is 1. Pairs with difference equal to 1 are `[1, 2]`, `[2, 3]`, and `[3, 4]`.

### Example 2
Input:
4
1 3 6 10 15

Output:
1 3

**Explanation:** The minimum absolute difference is 2. The pair with difference 2 is `[1, 3]`.

### Example 3
Input:
6
3 8 -10 23 19 -4

Output:
-10 -4
19 23

**Explanation:** The minimum absolute difference is 6. Pairs with difference 6 are `[-10, -4]` and `[19, 23]`.