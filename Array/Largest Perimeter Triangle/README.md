# LeetCode 976. Largest Perimeter Triangle

## Problem Statement
Given an integer array `nums`, return the **largest perimeter** of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return `0`.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print a single integer representing the maximum perimeter among all valid triangles, or `0` if no valid triangle can be formed.

## Constraints
- `3 <= nums.length <= 10^4`
- `1 <= nums[i] <= 10^6`

## Examples

### Example 1
Input:
3
2 1 2

Output:
5

**Explanation:** The three side lengths `[2, 1, 2]` satisfy the triangle inequality ($1 + 2 > 2$), so the perimeter is $2 + 1 + 2 = 5$.

### Example 2
Input:
3
1 2 1

Output:
0

**Explanation:** You cannot form a triangle with side lengths `1`, `2`, and `1` because $1 + 1 \ngtr 2$.

### Example 3
Input:
4
3 2 3 4

Output:
10

**Explanation:** The valid triangles formed by picking 3 side lengths are:
- `[3, 2, 3]` $\rightarrow$ Perimeter = 8
- `[3, 3, 4]` $\rightarrow$ Perimeter = 10
- `[3, 2, 4]` $\rightarrow$ Perimeter = 9

The maximum perimeter is 10.