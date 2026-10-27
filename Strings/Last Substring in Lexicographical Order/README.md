# LeetCode 1163. Last Substring in Lexicographical Order

## Problem Statement
Given a string `s`, return the last substring of `s` in lexicographical order.

## Input
A string `s` consisting of lowercase English letters.


## Output
A string representing the lexicographically last substring of `s`.

## Constraints
* `1 <= s.length <= 4 * 10^5`
* `s` contains only lowercase English letters.

## Examples
### Example 1
Input: s = "abab"
Output: "bab"
**Explanation:** The substrings are "a", "ab", "aba", "abab", "b", "ba", "bab". The lexicographically maximum substring is "bab".

### Example 2
Input: s = "leetcode"
Output: "tcode"
**Explanation:** The lexicographically maximum substring is "tcode".