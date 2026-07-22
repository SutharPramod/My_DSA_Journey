# LeetCode 41. First Missing Positive

## Problem Statement
Given an unsorted integer array `nums`, return the smallest positive integer that is not present in `nums`.

You must implement an algorithm that runs in $O(n)$ time and uses $O(1)$ auxiliary space.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `nums`.

## Output
- Print a single integer representing the smallest missing positive integer.

## Constraints
- `1 <= nums.length <= 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Examples

### Example 1
Input:
3
1 2 0

Output:
3

**Explanation:** The numbers in the range [1,2] are all present in the array. The smallest missing positive integer is 3.

### Example 2
Input:
5
3 4 -1 1

Output:
2

**Explanation:** 1 is in the array, but 2 is missing.

### Example 3
Input:
5
7 8 9 11 12

Output:
1

**Explanation:** The smallest positive integer 1 is missing.