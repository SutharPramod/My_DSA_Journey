# LeetCode 686. Repeated String Match

## Problem Statement
Given two strings `a` and `b`, return the minimum number of times you should repeat string `a` so that string `b` becomes a substring of it. If it is no possible, return `-1`.

Notice: string `"abc"` repeated 0 times is `""`, repeated 1 time is `"abc"`, and repeated 2 times is `"abcabc"`.

## Input
Two strings `a` and `b`.


## Output
An integer representing the minimum repetition count, or `-1`.

## Constraints
* `1 <= a.length <= 10^4`
* `1 <= b.length <= 10^4`
* `a` and `b` consist of lowercase English letters.

## Examples
### Example 1
Input: a = "abcd", b = "cdabcdab"
Output: 3
**Explanation:** After repeating `a` three times, we get "abcdabcdabcd", and `b` is a substring of it.

### Example 2
Input: a = "a", b = "aa"
Output: 2