# Replace Consecutive Two Same with One

## Problem Statement
Given a string of characters, repeatedly replace any two consecutive identical characters with a single occurrence of that character (or according to a specific reduction rule, typically reducing adjacent duplicates).

## Input
A single string `s` consisting of lowercase English letters.

## Output
The resulting string after all possible consecutive duplicate reductions have been applied.

## Constraints
* `1 <= s.length <= 10^5`
* `s` consists of lowercase English letters.

## Examples
### Example 1
Input: s = "abbaca"
Output: "ca"
**Explanation:** 
For "abbaca", we can remove "bb" to get "aaca", then remove "aa" to get "ca".

### Example 2
Input: s = "azxxzy"
Output: "ay"
**Explanation:** 
For "azxxzy", we can remove "xx" to get "azzy", and then remove "zz" to get "ay".