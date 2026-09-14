# LeetCode 49. Group Anagrams

## Problem Statement
Given an array of strings `strs`, group the **anagrams** together. You can return the answer in **any order**.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Input
- The first line contains an integer `n`, representing the number of strings in `strs`.
- The second line contains `n` space-separated strings representing `strs[]`.

## Output
- Print each group of anagrams on a new line, where elements within a group are space-separated.

## Constraints
- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

## Examples

### Example 1
Input:
6
eat tea tan ate nat bat

Output:
bat
nat tan
ate eat tea

**Explanation:** 
- `"bat"` has no anagrams in the input, forming `["bat"]`.
- `"nat"` and `"tan"` are anagrams, forming `["nat", "tan"]`.
- `"ate"`, `"eat"`, and `"tea"` are anagrams, forming `["ate", "eat", "tea"]`.

### Example 2
Input:
1
a

Output:
a

### Example 3
Input:
1
""

Output:
""