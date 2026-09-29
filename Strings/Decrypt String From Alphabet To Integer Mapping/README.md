# LeetCode 1309. Decrypt String from Alphabet to Integer Mapping

## Problem Statement
Given a string `s` formed by digits and `'#'`, we want to map it to English lowercase characters as follows:
- Characters (`'a'` to `'i'`) are represented by (`'1'` to `'9'`).
- Characters (`'j'` to `'z'`) are represented by (`'10#'` to `'26#'`).

Return the decrypted string.

The test cases are generated so that a unique decryption always exists.

## Input
A string `s` consisting of digits and the `'#'` character.
```cpp
using namespace std;
```

## Output
A decrypted string of lowercase English letters.

## Constraints
- `1 <= s.length <= 1000`
- `s` consists of digits and the `'#'` letter.
- `s` will be a valid string such that decryption is always possible.

## Examples
### Example 1
Input: `s = "10#11#12"`
Output: `s = "jkab"`
**Explanation:** `"10#" -> 'j'`, `"11#" -> 'k'`, `"1" -> 'a'`, `"2" -> 'b'`.

### Example 2
Input: `s = "1326#"`
Output: `s = "acz"`
**Explanation:** `"1" -> 'a'`, `"3" -> 'c'`, `"26#" -> 'z'`.