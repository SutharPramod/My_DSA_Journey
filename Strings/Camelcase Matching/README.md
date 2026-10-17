# LeetCode 1023. Camelcase Matching

## Problem Statement
Given a array of strings `queries` and a string `pattern`, return a boolean array `answer` where `answer[i]` is `true` if `queries[i]` can match `pattern` by adding lowercase letters, otherwise `false`.

To match a string with `pattern`, we can insert lowercase letters anywhere in the pattern such that it becomes the query. (We cannot delete or reorder characters, and we cannot insert uppercase letters).

## Input
A vector of strings `queries` and a string `pattern`.
```cpp

```

## Output
A vector of booleans indicating whether each query matches the pattern.

## Constraints
* `1 <= queries.length <= 100`
* `1 <= queries[i].length <= 100`
* `1 <= pattern.length <= 100`
* `queries[i]` and `pattern` consist of English letters.

## Examples
### Example 1
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FB"
Output: [true,false,true,true,false]
**Explanation:** 
"FooBar" can be generated like this "F" + "oo" + "B" + "ar".
"FootBall" can be generated like this "F" + "oot" + "B" + "all".
"FrameBuffer" can be generated like this "F" + "rame" + "B" + "uffer".

### Example 2
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBa"
Output: [true,false,true,false,false]
**Explanation:** 
"FooBar" can be generated like this "Fo" + "o" + "Ba" + "r".