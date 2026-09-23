# LeetCode 680. Valid Palindrome II

## Problem Statement
Given a string `s`, return `true` if the `s` can be palindrome after deleting at most one character from it.

## Input
A string `s` consisting of lowercase English letters.

## Output
A boolean value (`true` or `false`) indicating whether the string can form a palindrome by deleting at most one character.

## Constraints
- `1 <= s.length <= 10^5`
- `s` consists of lowercase English letters.

## Examples
### Example 1
Input: `s = "aba"`
Output: `true`
**Explanation:** The string is already a palindrome.

### Example 2
Input: `s = "abca"`
Output: `true`
**Explanation:** You could delete the character 'c'.

### Example 3
Input: `s = "abc"`
Output: `false`
**Explanation:** Deleting any character will not result in a palindrome.