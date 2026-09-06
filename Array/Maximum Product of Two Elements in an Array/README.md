# LeetCode 1464. Maximum Product of Two Elements in an Array

## Problem Statement
Given the array of integers `nums`, you will choose two different indices `i` and `j` of that array. Return the **maximum value** of `(nums[i]-1)*(nums[j]-1)`.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print a single integer representing the maximum product of `(nums[i]-1)*(nums[j]-1)`.

## Constraints
- `2 <= nums.length <= 500`
- `1 <= nums[i] <= 10^00`

## Examples

### Example 1
Input:
4
3 4 5 2

Output:
12

**Explanation:** If you choose the indices `i=1` and `j=2` (indexed from 0), you get the maximum value of `(nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12`.

### Example 2
Input:
4
1 5 4 5

Output:
16

**Explanation:** Choosing indices `i=1` and `j=3`, you get `(5-1)*(5-1) = 16`.

### Example 3
Input:
3
3 7 0

Output:
0