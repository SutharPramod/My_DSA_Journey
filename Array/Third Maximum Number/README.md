# LeetCode 414. Third Maximum Number

## Problem Statement
Given an integer array `nums`, return the **third distinct maximum** number in this array. If the third maximum does not exist, return the **maximum** number.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing `nums`.

## Output
- Print a single integer representing the third distinct maximum number, or the overall maximum if fewer than three distinct values exist.

## Constraints
- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Examples

### Example 1
Input:
3
3 2 1

Output:
1

**Explanation:** The first distinct max is 3, the second distinct max is 2, and the third distinct max is 1.

### Example 2
Input:
2
1 2

Output:
2

**Explanation:** The third distinct max does not exist, so the maximum (2) is returned instead.

### Example 3
Input:
4
2 2 3 1

Output:
1

**Explanation:** The distinct elements are [3, 2, 1]. The third distinct max is 1.