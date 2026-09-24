# LeetCode 2000. Reverse Prefix of Word

## Problem Statement
Given a 0-indexed string `word` and a character `ch`, reverse the segment of `word` that starts at index `0` and ends at the index of the first occurrence of `ch` (inclusive). If the character `ch` does not exist in `word`, do nothing.

For example, if `word = "abcdefd"` and `ch = "d"`, then you should reverse the segment that starts at `0` and ends at `3` (inclusive). The resulting string will be `"dcbaefd"`.

## Input
A string `word` consisting of lowercase English letters, and a character `ch`.

using namespace std;

## Output
The resulting string after reversing the prefix.

## Constraints
* `1 <= word.length <= 250`
* `word` consists of lowercase English letters.
* `ch` is a lowercase English letter.

## Examples
### Example 1
Input: word = "abcdefd", ch = 'd'
Output: "dcbaefd"
**Explanation:** The first occurrence of 'd' is at index 3. 
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".

### Example 2
Input: word = "xyxzxe", ch = 'z'
Output: "zxyxxe"
**Explanation:** The first occurrence of 'z' is at index 2. 
Reverse the part of word from 0 to 2 (inclusive), the resulting string is "zxyxxe".