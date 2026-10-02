# LeetCode 14. Longest Common Prefix

## Problem Statement
Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string `""`.

## Input
A vector of strings `strs` containing the strings to analyze.

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;
```

## Output
A string representing the longest common prefix shared among all the input strings.

## Constraints
* `1 <= strs.length <= 200`
* `0 <= strs[i].length <= 200`
* `strs[i]` consists of only lowercase English letters.

## Examples
### Example 1
Input: `strs = ["flower","flow","flight"]`
Output: `"fl"`
**Explanation:** The common prefix among "flower", "flow", and "flight" is "fl".

### Example 2
Input: `strs = ["dog","racecar","car"]`
Output: `""`
**Explanation:** There is no common prefix among the input strings.