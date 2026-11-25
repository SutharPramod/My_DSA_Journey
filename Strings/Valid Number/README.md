# LeetCode 65. Valid Number
## Problem Statement
A valid number can be split up into these components (in order):
1. A decimal number or an integer.
2. (Optional) An 'e' or 'E', followed by an integer.

A decimal number can be split up into these components (in order):
1. (Optional) A sign character ('+' or '-').
2. One of the following formats:
   - One or more digits, followed by a dot '.'
   - One or more digits, followed by a dot '.', followed by one or more digits
   - A dot '.', followed by one or more digits

An integer can be split up into these components (in order):
1. (Optional) A sign character ('+' or '-').
2. One or more digits.

Given a string `s`, return `true` if `s` is a valid number.

## Input
A string `s` consisting of various characters.
```cpp

```
## Output
A boolean value (`true` or `false`) indicating whether the string is a valid number.

## Constraints
- `1 <= s.length <= 20`
- `s` consists of only English letters (both uppercase and lowercase), digits (`0-9`), plus `'+'`, `'-'`, or `'.'`.

## Examples
### Example 1
Input: s = "0"
Output: true
**Explanation:** "0" is a valid number.

### Example 2
Input: s = "e"
Output: false
**Explanation:** "e" is not a valid number because it lacks digits.