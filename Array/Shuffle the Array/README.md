# LeetCode 1470. Shuffle the Array

## Problem Statement
Given the array `nums` consisting of `2n` elements in the form `[x1, x2, ..., xn, y1, y2, ..., yn]`.

Return the array in the form `[x1, y1, x2, y2, ..., xn, yn]`.

## Input
- The first line contains a single integer `n`, representing half the length of the array.
- The second line contains `2n` space-separated integers, representing the elements of the array `nums`.

## Output
- Print the shuffled array as `2n` space-separated integers.

## Constraints
- `1 <= n <= 500`
- `nums.length == 2n`
- `1 <= nums[i] <= 10^3`

## Examples

### Example 1
Input:
3
2 5 1 3 4 7

Output:
2 3 5 4 1 7

### Example 2
Input:
4
1 2 3 4 4 3 2 1

Output:
1 4 2 3 3 2 4 1

### Example 3
Input:
2
1 1 2 2

Output:
1 2 1 2

## Notes
- The array is split perfectly down the middle into two halves: the `x` half (indices `0` to `n-1`) and the `y` half (indices `n` to `2n-1`).
- The task is to alternate elements from both halves, starting with `x1`, then `y1`, then `x2`, then `y2`, and so on.
- **Recommended Approach:** Use a pointer tracking mechanism. Create a new array of size `2n`. Run a loop from `0` to `n-1`, and for each iteration `i`, place `nums[i]` at index `2*i` and `nums[i+n]` at index `2*i + 1` in the new array. This achieves an efficient time complexity of $O(n)$ and space complexity of $O(n)$ for the result.