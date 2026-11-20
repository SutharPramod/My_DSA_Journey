# LeetCode 1513. Number of Substrings With Only 1s
## Problem Statement
Given a binary string `s`, return the number of substrings with all characters `1`'s. Since the answer may be too large, return it modulo $10^9 + 7$.

## Input
A string `s` consisting of characters '0' and '1'.

## Output
An integer representing the number of substrings containing only '1's modulo $10^9 + 7$.

## Constraints
- $1 \le s.length \le 10^5$
- `s[i]` is either `'0'` or `'1'`.

## Examples
### Example 1
Input: s = "0110111"
Output: 9
**Explanation: There are 9 substrings of length 1 and greater that consist only of '1's.
- "1" appears 5 times.
- "11" appears 3 times.
- "111" appears 1 time.
Total = 5 + 3 + 1 = 9.

### Example 2
Input: s = "101"
Output: 2
**Explanation: Substrings "1" and "1" (at index 0 and 2) are the only ones.