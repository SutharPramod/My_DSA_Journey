# LeetCode 1969. Minimum Non-Zero Product of the Array Elements
## Problem Statement
You are given a positive integer `p`. Consider an array `nums` (1-indexed) that consists of the integers in the range `[1, 2^p - 1]` in their binary representation. You are allowed to do the following operation any number of times:
- Choose two different elements `x` and `y` from `nums`.
- Choose a bit in the binary representation of `x` and swap it with the corresponding bit in `y`.

Find the minimum non-zero product of `nums` after performing the above operations any number of times. Return this product modulo $10^9 + 7$.

Since the answer may be large, return it modulo $10^9 + 7$.

## Input
- An integer `p` ($1 \le p \le 60$).

## Output
- Return an integer representing the minimum non-zero product modulo $10^9 + 7$.

## Constraints
- $1 \le p \le 60$

## Examples
### Example 1
Input: p = 1
Output: 1
**Explanation:** nums = [1]. There is only one element, so the product is 1.

### Example 2
Input: p = 2
Output: 6
**Explanation:** nums = [1, 2, 3]. We can swap the first bit of 3 with the first bit of 2, resulting in nums = [1, 1, 3] (or other configurations). The minimum non-zero product is 1 * 1 * 6 = 6.