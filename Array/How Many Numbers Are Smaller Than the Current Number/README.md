# LeetCode 1365. How Many Numbers Are Smaller Than the Current Number

## Problem Statement
Given the array `nums`, for each `nums[i]` find out how many numbers in the array are smaller than it. That is, for each `nums[i]` you have to count the number of valid `j's` such that `j != i` and `nums[j] < nums[i]`.

Return the answer in an array.

## Input
- The first line contains a single integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers, representing the elements of the array `nums`.

## Output
- Print `n` space-separated integers representing the count of smaller numbers for each corresponding element.

## Constraints
- `2 <= n <= 500`
- `0 <= nums[i] <= 100`

## Examples

### Example 1
Input:
5
8 1 2 2 3

Output:
4 0 1 1 3

### Example 2
Input:
4
6 5 4 8

Output:
2 1 0 3

### Example 3
Input:
4
7 7 7 7

Output:
0 0 0 0

## Notes
- A brute force approach using nested loops compares each element with every other element, leading to a time complexity of $O(n^2)$.
- **Recommended Approach:** Since the constraints on the values of `nums[i]` are very small (`0` to `100`), a frequency array (bucket sort concept) can be utilized to optimize the solution:
  1. Count the frequency of each number using an array of size `102`.
  2. Transform the frequency array into a running sum prefix array, where `prefix[i]` stores the total count of numbers smaller than `i`.
  3. Map the original elements to their corresponding prefix values to get the final counts.
- This optimizes the algorithm to a highly efficient $O(n + k)$ time complexity and $O(k)$ space complexity, where $k$ is the maximum possible value in the constraint range (100).