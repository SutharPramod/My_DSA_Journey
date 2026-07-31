# LeetCode 153. Find Minimum in Rotated Sorted Array

## Problem Statement
Suppose an array of length `n` sorted in ascending order is rotated between `1` and `n` times. For example, the array `nums = [0,1,2,4,5,6,7]` might become:
- `[4,5,6,7,0,1,2]` if it was rotated 4 times.
- `[0,1,2,4,5,6,7]` if it was rotated 7 times.

Notice that rotating an array `1` time results in `[nums[n-1], nums[0], nums[1], ..., nums[n-2]]`.

Given the sorted rotated array `nums` of **unique** elements, return the minimum element of this array.

You must write an algorithm that runs in $O(\log n)$ time.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the rotated sorted array `nums`.

## Output
- Print a single integer representing the minimum element in the array.

## Constraints
- `n == nums.length`
- `1 <= n <= 5000`
- `-5000 <= nums[i] <= 5000`
- All the integers of `nums` are **unique**.
- `nums` is sorted and rotated between `1` and `n` times.

## Examples

### Example 1
Input:
5
3 4 5 1 2

Output:
1

**Explanation:** The original array was `[1, 2, 3, 4, 5]` rotated 3 times. The minimum element is 1.

### Example 2
Input:
7
4 5 6 7 0 1 2

Output:
0

**Explanation:** The original array was `[0, 1, 2, 4, 5, 6, 7]` rotated 4 times. The minimum element is 0.

### Example 3
Input:
4
11 13 15 17

Output:
11

**Explanation:** The original array was `[11, 13, 15, 17]` rotated 4 times (meaning it is back in fully sorted order). The minimum element is 11.