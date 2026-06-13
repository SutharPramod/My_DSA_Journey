# LeetCode 1512. Number of Good Pairs

## Problem Statement
Given an array of integers `nums`, return the number of good pairs.

A pair `(i, j)` is called good if `nums[i] == nums[j]` and `i` < `j`.

## Input
- The first line contains a single integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers, representing the elements of the array `nums`.

## Output
- Print a single integer representing the total number of good pairs.

## Constraints
- `1 <= n <= 100`
- `1 <= nums[i] <= 100`

## Examples

### Example 1
Input:
6
1 2 3 1 1 3

Output:
4

### Example 2
Input:
4
1 1 1 1

Output:
6

### Example 3
Input:
3
1 2 3

Output:
0

## Notes
- A brute force approach checks every possible pair `(i, j)` where `i < j`, resulting in a time complexity of $O(n^2)$.
- **Recommended Approach:** Use a hash map (or a frequency array since the constraints on `nums[i]` are small) to store the count of each number encountered so far. As you iterate through the array, if a number has been seen `count` times, it can form `count` new good pairs with the previous occurrences. Add `count` to your total result, then increment the frequency of that number. This optimizes the solution to $O(n)$ time complexity and $O(n)$ space complexity.