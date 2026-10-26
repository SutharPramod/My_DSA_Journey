# LeetCode 1208. Get Equal Substrings Within Budget
## Problem Statement
You are given two strings `s` and `t` of the same length. You want to change `s` to `t`. Changing the $i$-th character of `s` to the $i$-th character of `t` costs $|s[i] - t[i]|$ (i.e., the absolute difference between the ASCII values of the characters).

You are also given an integer `maxCost`.

Return the maximum length of a substring of `s` that can be changed to be the same as the corresponding substring of `t` with a cost less than or equal to `maxCost`. If there is no substring from `s` that can be changed to its corresponding substring from `t`, return `0`.

## Input
Two strings `s` and `t` of the same length, and an integer `maxCost`.

## Output
An integer representing the maximum length of a valid substring.

## Constraints
* $1 \le s.length \le 10^5$
* $t.length == s.length$
* $0 \le maxCost \le 10^6$
* `s` and `t` consist of only lowercase English letters.

## Examples
### Example 1
Input: s = "abcd", t = "bcdf", maxCost = 3
Output: 3
**Explanation:** "abc" of `s` can change to "bcd" with cost |'a'-'b'| + |'b'-'c'| + |'c'-'d'| = 1 + 1 + 1 = 3.
Exceeding the maxCost, the maximum length is 3.

### Example 2
Input: s = "abcd", t = "cdef", maxCost = 0
Output: 1
**Explanation:** Each character in `s` costs 2 to change to `cdef`, so you can only change 1 character at cost 0 (which is impossible since costs are >= 2, wait, min cost is 2, so max length is 0? Let's trace: 'a'->'c' is 2 > 0, so max length is 0).