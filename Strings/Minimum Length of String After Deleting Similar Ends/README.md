# LeetCode 1750. Minimum Length of String After Deleting Similar Ends

## Problem Statement
Given a string `s` consisting only of characters `'a'`, `'b'`, and `'c'`. You are asked to apply the following algorithm on the string any number of times:

1. Pick a non-empty prefix from the string `s` where all the characters in the prefix are equal.
2. Pick a non-empty suffix from the string `s` where all the characters in the suffix are equal and that the prefix and the suffix do not overlap at any index.
3. The characters in the prefix and suffix must be the same.
4. Delete both the prefix and the suffix.

Return *the minimum length of `s` after performing the above operation any number of times (including zero)*.

## Input
A string `s` consisting of lowercase English letters 'a', 'b', and 'c'.


## Output
An integer representing the minimum length of the string after applying the operations.

## Constraints
* `1 <= s.length <= 10^5`
* `s` only consists of characters `'a'`, `'b'`, and `'c'`.

## Examples
### Example 1
Input: s = "ca"
Output: 2
**Explanation:** You can't take any operations, so the length remains 2.

### Example 2
Input: s = "cabaabac"
Output: 0
**Explanation:** 
- Take prefix "c" and suffix "c" and delete them, string becomes "abaabac".
- Take prefix "a" and suffix "a" and delete them, string becomes "baab".
- Take prefix "b" and suffix "b" and delete them, string becomes "aa".
- Take prefix "aa" and suffix "aa" and delete them, string becomes "".

### Example 3
Input: s = "aabccabba"
Output: 3
**Explanation:** An optimal sequence of operations is:
- Take prefix "aa" and suffix "a" -> wait, prefix and suffix characters must match.
- Take prefix "aa" and suffix "a" - invalid because 'a' != 'a' length mismatch? No, prefix and suffix characters must be the same.
- Optimal deletion leaves "bcc" of length 3.