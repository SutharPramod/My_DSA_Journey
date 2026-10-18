# LeetCode 1759. Count Number of Homogenous Substrings
## Problem Statement
Given a string `s`, return *the number of homogenous substrings of* `s`. Since the answer may be too large, return it modulo $10^9 + 7$.

A string is homogenous if all the characters of the string are the same.

A substring is a contiguous sequence of characters within a string.
## Input
A string `s` consisting of lowercase English letters.

## Output
An integer representing the number of homogenous substrings, modulo $10^9 + 7$.
## Constraints
* $1 \le s.length \le 10^5$
* `s` consists of lowercase letters.
## Examples
### Example 1
Input: s = "abbcccaa"
Output: 13
**Explanation:** The homogenous substrings are:
- "a" appears 3 times.
- "aa" appears 1 time.
- "b" appears 1 time.
- "bb" appears 1 time.
- "c" appears 3 times.
- "cc" appears 2 times.
- "ccc" appears 1 time.
Total = 3 + 1 + 1 + 1 + 3 + 2 + 1 = 13.