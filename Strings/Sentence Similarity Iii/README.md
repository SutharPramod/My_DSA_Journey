# LeetCode 1813. Sentence Similarity III

## Problem Statement
You are given two strings `sentence1` and `sentence2`, each representing a sentence consisting of words separated by a single space with no leading or trailing spaces.

A sentence is a list of words that are separated by a single space with no leading or trailing spaces. For example, "Hello World", "HELLO", "hello world hello world" are sentences. Words consist of English letters only.

Two sentences `sentence1` and `sentence2` are similar if it is possible to insert an arbitrary sentence (possibly empty) inside one of these sentences such that the two sentences become equal. Note that the inserted sentence must be separated by spaces from the existing words.

For example,
- `sentence1` = "Hello my name is Jane" and `sentence2` = "Hello Jane" can be made equal by inserting "my name is " between "Hello" and "Jane" in `sentence2`.
- `sentence1` = "of" and `sentence2` = "A lot of words" can be made equal by inserting "A lot " and " words" to `sentence1`.

Given two sentences `sentence1` and `sentence2`, return `true` if `sentence1` and `sentence2` are similar, or `false` otherwise.

## Input
Two strings `sentence1` and `sentence2` representing the sentences.
```cpp
using namespace std;
```

## Output
A boolean value (`true` or `false`) indicating whether the sentences are similar.

## Constraints
- `1 <= sentence1.length, sentence2.length <= 100`
- `sentence1` and `sentence2` consist of lowercase and uppercase English letters and spaces.
- The words in `sentence1` and `sentence2` are separated by a single space.

## Examples
### Example 1
Input: sentence1 = "My name is Haley", sentence2 = "My Haley"
Output: true
**Explanation:** sentence2 can be turned to sentence1 by inserting "name is " between "My" and "Haley".

### Example 2
Input: sentence1 = "of", sentence2 = "A lot of words"
Output: false
**Explanation:** No insertion can make the sentences equal.

### Example 3
Input: sentence1 = "Eating right now", sentence2 = "Eating"
Output: true
**Explanation:** sentence2 can be turned to sentence1 by inserting " right now" at the end.