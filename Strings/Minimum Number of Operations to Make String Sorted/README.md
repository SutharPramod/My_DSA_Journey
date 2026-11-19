# LeetCode 1830. Minimum Number of Operations to Make String Sorted

## Problem Statement
Given a string `s`, you are allowed to perform the following operation any number of times:
1. Choose an index `i` in the string such that `1 <= i < s.length` and `s[i-1] > s[i]`.
2. Swap `s[i-1]` and `s[i]`.

Return the minimum number of operations needed to make the string sorted (in non-decreasing order). Since the answer can be large, return it modulo $10^9 + 7$.

## Input
A string `s` consisting of lowercase English letters.

## Output
An integer representing the minimum number of operations modulo $10^9 + 7$.

## Constraints
* `1 <= s.length <= 3000`
* `s` consists only of lowercase English letters.

## Examples
### Example 1
Input: s = "cba"
Output: 5
**Explanation:** 
The valid operations for "cba" are:
- Swap 1st and 2nd characters: "cba" -> "bca"
- Swap 2nd and 3rd characters: "bca" -> "bac"
- Swap 1st and 2nd characters: "bac" -> "abc"
- ...
Total operations to sort it is 5.

### Example 2
Input: s = "aabaa"
Output: 2
**Explanation:** 
- "aabaa" -> "aaaba" (1 operation)
- "aaaba" -> "aaaab" (1 operation)
Total operations = 2.