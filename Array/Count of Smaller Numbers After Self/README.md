# LeetCode 315. Count of Smaller Numbers After Self

## Problem Statement
Given an integer array `nums`, return an integer array `counts` where `counts[i]` is the number of smaller elements strictly to the right of `nums[i]`.

## Input
- The first line contains an integer `n`, representing the number of elements in `nums`.
- The second line contains `n` space-separated integers representing `nums[]`.

## Output
- Print `n` space-separated integers representing the count of smaller elements to the right of each element.

## Constraints
- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`

## Examples

### Example 1
Input:
4
5 2 6 1

Output:
2 1 1 0

**Explanation:**
- To the right of 5, there are 2 smaller elements (2 and 1).
- To the right of 2, there is 1 smaller element (1).
- To the right of 6, there is 1 smaller element (1).
- To the right of 1, there are 0 smaller elements.

### Example 2
Input:
1
-1

Output:
0

### Example 3
Input:
2
-1 -1

Output:
0 0