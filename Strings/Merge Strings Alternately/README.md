# LeetCode 1768. Merge Strings Alternately

## Problem Statement
You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

## Input
Two strings `word1` and `word2` consisting of lowercase English letters.
```cpp
using namespace std;
```

## Output
A single merged string formed by alternating characters from `word1` and `word2`.

## Constraints
* `1 <= word1.length, word2.length <= 100`
* `word1` and `word2` consist of lowercase English letters.

## Examples
### Example 1
Input: `word1 = "abc"`, `word2 = "pqr"`
Output: `"apbqcr"`
**Explanation:** The merged string will be as follows:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

### Example 2
Input: `word1 = "ab"`, `word2 = "pqrs"`
Output: `"apbqrs"`
**Explanation:** Notice that as `word2` is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q r   s