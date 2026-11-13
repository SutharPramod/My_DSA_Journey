# LeetCode 1922. Count Good Numbers

## Problem Statement
A digit string is **good** if the digits (0-indexed) at even indices are even numbers (0, 2, 4, 6, 8) and the digits at odd indices are prime numbers (2, 3, 5, 7).

Given an integer `n`, return the total number of good digit numbers of length `n`. Since the answer may be large, return it modulo $10^9 + 7$.

A digit string is a string consisting of digits in the range `['0', '9']` which may contain leading zeros.

## Input
- `n`: A single integer representing the length of the digit string ($1 \le n \le 10^{15}$).

## Output
- An integer representing the count of good numbers modulo $10^9 + 7$.

## Constraints
- $1 \le n \le 10^{15}$

## Examples
### Example 1
Input: n = 1
Output: 5
**Explanation:** The good numbers of length 1 are "0", "2", "4", "6", "8".

### Example 2
Input: n = 4
Output: 400
**Explanation:** The good numbers of length 4 are 400.

### Example 3
Input: n = 50
Output: 564908303