# LeetCode 557. Reverse Words in a String III

## Problem Statement
Given a string `s`, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

## Input
A string `s` consisting of characters, spaces, and punctuation.
```cpp
#include <string>
#include <iostream>
using namespace std;
```

## Output
The modified string `s` with each word reversed individually.

## Constraints
* `1 <= s.length <= 5 * 10^4`
* `s` contains printable ASCII characters.
* `s` does not contain any leading or trailing spaces.
* There is at least one word in `s`.
* All the words in `s` are separated by a single space.

## Examples
### Example 1
Input: `s = "Let's take LeetCode contest"`
Output: `"s'teL ekat edoCteeL tsetnoc"`
**Explanation:** Each word in the sentence is reversed while keeping spaces in their original positions.

### Example 2
Input: `s = "God Ding"`
Output: `"doG gniD"`
**Explanation:** Each word is individually reversed.