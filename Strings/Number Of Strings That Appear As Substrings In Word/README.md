# LeetCode 1967. Number of Strings That Appear as Substrings in Word

## Problem Statement
Given an array of strings `patterns` and a string `word`, return *the number of strings in `patterns` that exist as a substring in `word`*.

A **substring** is a contiguous sequence of characters within a string.

## Input
- `patterns`: A vector of strings representing the patterns to check.
- `word`: A string representing the main word.

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
```

## Output
- An integer representing the count of patterns that appear as substrings in `word`.

## Constraints
- `1 <= patterns.length <= 100`
- `1 <= patterns[i].length <= 100`
- `1 <= word.length <= 100`
- `patterns[i]` and `word` consist of lowercase English letters.

## Examples
### Example 1
Input: `patterns = ["a","abc","bc","d"]`, `word = "abc"`
Output: `3`
**Explanation:**
- "a" appears as a substring in "abc".
- "abc" appears as a substring in "abc".
- "bc" appears as a substring in "abc".
- "d" does not appear in "abc".
3 of the strings in patterns appear as a substring in word.

### Example 2
Input: `patterns = ["a","b","c"]`, `word = "aaaaaa"`
Output: `1`
**Explanation:**
- "a" appears as a substring in "aaaaaa".
- "b" does not appear in "aaaaaa".
- "c" does not appear in "aaaaaa".
Only 1 of the strings in patterns appears as a substring in word.