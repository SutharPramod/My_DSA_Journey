# LeetCode 848. Shifting Letters

## Problem Statement
We have a string `s` of lowercase English letters and an integer array `shifts` of the same length.

Call the `shift()` of a letter, the next letter in the alphabet, (wrapping around so that `'z'` becomes `'a'`).

* For example, `shift('a') = 'b'`, `shift('t') = 'u'`, and `shift('z') = 'a'`.

Now for each `shifts[i] = x`, we want to shift the first `i + 1` letters of `s`, `x` times.

Return the final string after all such shifts to `s` are applied.

## Input
`string s`: A string of lowercase English letters.
`vector<int>& shifts`: An array of integers representing the shift values.


## Output
`string`: The final string after applying all shifts.

## Constraints
* $1 \le s.length \le 10^5$
* $s$ consists of lowercase English letters.
* $shifts.length == s.length$
* $0 \le shifts[i] \le 10^9$

## Examples
### Example 1
Input: `s = "abc"`, `shifts = [3, 5, 9]`
Output: `"rpl"`
**Explanation:** 
Start with "s = "abc"".
After shifting the first 1 letters of s by 3, s becomes "dbc".
After shifting the first 2 letters of s by 5, s becomes "igc".
After shifting the first 3 letters of s by 9, s becomes "rpl".