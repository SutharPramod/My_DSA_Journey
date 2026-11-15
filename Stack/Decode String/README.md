# LeetCode 394. Decode String
## Problem Statement
Given an encoded string, return its decoded string.

The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer.

You may assume that the input string is always valid; no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, `k`. For example, there won't be input like `3a` or `2[4]`.

## Input
- `s`: A string representing the encoded string.

## Output
- A string representing the decoded string.

## Constraints
- `1 <= s.length <= 30`
- `s` consists of lowercase English letters, digits, and square brackets `'['` and `']'`.
- `s` is guaranteed to be a valid input.
- All the integers in `s` are in the range `[1, 300]`.

## Examples
### Example 1
Input: `s = "3[a]2[bc]"`
Output: `"aaabcbc"`
**Explanation:** The string inside brackets are 'a' repeated 3 times and 'bc' repeated 2 times.

### Example 2
Input: `s = "3[a2[c]]"`
Output: `"accaccacc"`
**Explanation:** The inner string is "a2[c]" which decodes to "acc", and then it is repeated 3 times.