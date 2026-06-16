# LeetCode 1389. Create Target Array in the Given Order

## Problem Statement
Given two arrays of integers `nums` and `index`, your task is to create a `target` array under the following rules:
- Initially, the `target` array is empty.
- From left to right, read `nums[i]` and `index[i]`, then insert at index `index[i]` the value `nums[i]` in the `target` array.
- Repeat the previous step until there are no elements to read in `nums` and `index`.

Return the `target` array. It is guaranteed that the insertion operations will be valid.

## Input
- The first line contains an integer `n`, representing the number of elements in both `nums` and `index`.
- The second line contains `n` space-separated integers for the `nums` array.
- The third line contains `n` space-separated integers for the `index` array.

## Output
- Print `n` space-separated integers representing the final `target` array.

## Constraints
- `1 <= n <= 100`
- `nums.length == n`
- `index.length == n`
- `0 <= nums[i] <= 100`
- `0 <= index[i] <= i`

## Examples

### Example 1
Input:
5
0 1 2 3 4
0 1 2 2 1

Output:
0 4 1 3 2

**Explanation:**
- nums [0], index [0] -> target [0]
- nums [1], index [1] -> target [0, 1]
- nums [2], index [2] -> target [0, 1, 2]
- nums [3], index [3] -> target [0, 1, 3, 2] (3 is inserted at index 2)
- nums [4], index [4] -> target [0, 4, 1, 3, 2] (4 is inserted at index 1)

### Example 2
Input:
5
1 2 3 4 0
0 1 2 3 0

Output:
0 1 2 3 4