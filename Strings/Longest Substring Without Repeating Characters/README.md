# Longest Substring Without Repeating Characters

## Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

A substring is a contiguous sequence of characters within the string.

## Input

- The first line contains a string `s`.

## Output

- Print a single integer representing the length of the longest substring without repeating characters.

## Constraints

- `0 ≤ s.length ≤ 10^5`
- `s` consists of English letters, digits, symbols, and spaces.

## Examples

### Example 1


Input:
abcabcbb

Output:
3


### Example 2


Input:
bbbbb

Output:
1


### Example 3


Input:
pwwkew

Output:
3


## Notes

- The substring must contain only unique characters.
- Characters are case-sensitive (`'A'` and `'a'` are considered different).
- The answer represents the maximum possible length among all valid substrings.