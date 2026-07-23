# LeetCode 1608. Special Array With X Elements Greater Than or Equal X

## Problem Statement
You are given an array `nums` of non-negative integers. `nums` is considered **special** if there exists a number `x` such that there are exactly `x` numbers in `nums` that are **greater than or equal to** `x`.

Notice that `x` does not have to be an element in `nums`.

Return `x` if the array is special, otherwise, return `-1`. It can be proven that if `nums` is special, the value for `x` is unique.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `nums`.

## Output
- Print the unique integer `x` if the array is special, or `-1` if no such value exists.

## Constraints
- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 1000`

## Examples

### Example 1
Input:
2
3 5

Output:
2

**Explanation:** There are 2 values (3 and 5) that are greater than or equal to 2. Thus, x = 2.

### Example 2
Input:
2
0 0

Output:
-1

**Explanation:** No numbers are greater than or equal to 1, and there are 2 numbers greater than or equal to 0 (but 0 != 2). Thus, no valid x exists.

### Example 3
Input:
4
0 4 3 0 4

Output:
3

**Explanation:** There are 3 values that are greater than or equal to 3 ([4, 3, 4]). Thus, x = 3.