# LeetCode 925. Long Pressed Name

## Problem Statement
Your friend is typing their name into a keyboard. Sometimes, when typing a character `c`, the key might get *long pressed*, and the character will be typed 1 or more times.

You examine the typed characters of the keyboard. Return `True` if it is possible that it was your friend's name, with some characters being long pressed.

## Input
Two strings `name` and `typed`, where `name` is the intended name and `typed` is what was actually typed on the keyboard.

using namespace std;
## Output
A boolean value (`true` or `false`) indicating whether `typed` could be a long-pressed version of `name`.

## Constraints
* `1 <= name.length <= 1000`
* `1 <= typed.length <= 1000`
* `name` and `typed` consist of only lowercase English letters.

## Examples
### Example 1
Input: name = "alex", typed = "aaleex"
Output: true
**Explanation:** 'a' and 'e' in 'alex' were long-pressed.

### Example 2
Input: name = "saeed", typed = "ssaaedd"
Output: false
**Explanation:** 'e' in 'saeed' was typed 1 time, but in 'typed' it was typed 2 times which doesn't match the relative order and occurrences properly for long-press rules.