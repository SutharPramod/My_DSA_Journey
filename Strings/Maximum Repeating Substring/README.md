# LeetCode 1668. Maximum Repeating Substring

## Problem Statement
For a string `sequence`, a string `word` is *k*-repeating if `word` concatenated `k` times is a substring of `sequence`. The string `word`'s maximum *k*-repeating value is the highest value `k` where `word` is *k*-repeating in `sequence`. If `word` is not a substring of `sequence`, its maximum *k*-repeating value is `0`.

Given strings `sequence` and `word`, return *the maximum k-repeating value of `word` in `sequence`*.

## Input
Two strings `sequence` and `word`.

## Output
An integer representing the maximum *k*-repeating value of `word` in `sequence`.

## Constraints
* `1 <= sequence.length <= 100`
* `1 <= word.length <= 100`
* `sequence` and `word` contains only lowercase English letters.

## Examples
### Example 1
Input: sequence = "ababc", word = "ab"
Output: 2
**Explanation:** "abab" is a substring in "ababc" (2-repeating).

### Example 2
Input: sequence = "ababc", word = "ba"
Output: 1
**Explanation:** "ba" is a substring in "ababc" (1-repeating). "baba" is not a substring in "ababc".

### Example 3
Input: sequence = "ababc", word = "ac"
Output: 0
**Explanation:** "ac" is not a substring in "ababc".