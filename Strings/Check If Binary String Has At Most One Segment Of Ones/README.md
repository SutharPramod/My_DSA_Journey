# LeetCode 1784. Check If Binary String Has At Most One Segment Of Ones

## Problem Statement
Given a binary string `s` **without leading zeros**, return `true` if `s` contains at most one contiguous segment of ones. Otherwise, return `false`.

## Input
A string `s` consisting of characters '0' and '1'.

## Output
A boolean value (`true` or `false`).

## Constraints
* `1 <= s.length <= 100`
* `s[i]` is either `'0'` or `'1'`.
* `s[0]` is `'1'`.

## Examples
### Example 1
Input: s = "1001"
Output: false
**Explanation:** The ones do not form a contiguous segment (there is a "00" separating them).

### Example 2
Input: s = "110"
Output: true
**Explanation:** The ones form a single contiguous segment from index 0 to 1.