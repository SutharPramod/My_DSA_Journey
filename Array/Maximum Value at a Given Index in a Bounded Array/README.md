# LeetCode 1802. Maximum Value at a Given Index in a Bounded Array

## Problem Statement
You are given three positive integers: `n`, `index`, and `maxSum`. You want to construct an array `nums` (0-indexed) of size `n` that satisfies the following conditions:

1. `nums[i]` is a **positive integer** ($nums[i] \ge 1$) for all $0 \le i < n$.
2. $|nums[i] - nums[i+1]| \le 1$ for all $0 \le i < n - 1$ (the difference between adjacent elements is at most 1).
3. The sum of all elements in `nums` does not exceed `maxSum` ($\sum_{i=0}^{n-1} nums[i] \le maxSum$).
4. `nums[index]` is **maximized**.

Return the maximum possible value of `nums[index]`.

## Input
- A single line containing three space-separated integers representing `n`, `index`, and `maxSum`.

## Output
- Print a single integer representing the maximum possible value at `nums[index]`.

## Constraints
- `1 <= n <= maxSum <= 10^9`
- `0 <= index < n`

## Examples

### Example 1
Input:
4 2 6

Output:
2

**Explanation:** `nums = [1, 2, 2, 1]` is one valid array. `nums[2] = 2`, and the sum is $1 + 2 + 2 + 1 = 6 \le 6$. It is impossible to make `nums[2] = 3` because the minimum sum would then be $1 + 2 + 3 + 2 = 8 > 6$.

### Example 2
Input:
6 1 10

Output:
3

**Explanation:** `nums = [2, 3, 2, 1, 1, 1]` satisfies all conditions with `nums[1] = 3` and sum $= 10 \le 10$.