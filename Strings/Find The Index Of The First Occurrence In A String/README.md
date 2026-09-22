# LeetCode 28. Find The Index Of The First Occurrence In A String

## Problem Statement
Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

## Input
Two strings: `haystack` and `needle`.
```cpp
#include <iostream>
#include <string>
using namespace std;
```

## Output
An integer representing the index of the first occurrence of `needle` in `haystack`, or `-1` if it doesn't exist.

## Constraints
* `1 <= haystack.length, needle.length <= 10^4`
* `haystack` and `needle` consist of only lowercase English characters.

## Examples
### Example 1
Input: haystack = "sadbutsad", needle = "sad"  
Output: 0  
**Explanation:** "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0.

### Example 2
Input: haystack = "leetcode", needle = "leeto"  
Output: -1  
**Explanation:** "leeto" did not occur in "leetcode", so we return -1.