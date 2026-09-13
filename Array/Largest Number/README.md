# LeetCode 179. Largest Number

## Problem Statement
Given a list of non-negative integers `nums`, arrange them such that they form the **largest number** and return it.

Since the result may be very large, you need to return a string instead of an integer.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print a string representing the largest concatenated number formed by the array elements.

## Constraints
- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 10^9`

## Examples

### Example 1
Input:
2
10 2

Output:
210

**Explanation:** Concatenating `2` and `10` as `"210"` is larger than `"102"`.

### Example 2
Input:
5
3 30 34 5 9

Output:
9534330

**Explanation:** Arranging the elements as `[9, 5, 34, 3, 30]` yields `"9534330"`, which is the largest possible concatenated number.

### Example 3
Input:
2
0 0

Output:
0

**Explanation:** Multiple leading zeros must be consolidated into a single `"0"`.