# LeetCode 89. Gray Code

## Problem Statement
The Gray code is a binary numeral system where two successive values differ in only one bit.

Given an integer `n` representing the total number of bits in the code, return *any sequence of a valid n-bit Gray code*.

A valid Gray code sequence must begin with `0`.

## Input
- An integer `n` ($1 \le n \le 16$) representing the number of bits.

## Output
- A list of integers representing the generated Gray code sequence.

## Constraints
- `1 <= n <= 16`

## Examples
### Example 1
Input: n = 2
Output: [0, 1, 3, 2]
**Explanation:**
For n = 2, the binary Gray code is:
00 - 0
01 - 1
11 - 3
10 - 2
[0, 1, 3, 2] is also a valid Gray code sequence.

### Example 2
Input: n = 1
Output: [0, 1]