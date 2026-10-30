# LeetCode 1898. Maximum Number of Removable Characters
## Problem Statement
You are given two strings `s` and `p` where `p` is a subsequence of `s`. You are also given a **0-indexed** integer array `removable` containing a subset of indices of `s` (a subset of integers from `0` to `s.length() - 1`).

You want to choose an integer `k` (`0 <= k <= removable.length`) such that, after removing `k` characters from `s` using the **first** `k` indices in `removable`, `p` is **still a subsequence** of `s`.

Return *the **maximum** `k` you can choose such that `p` is still a subsequence of `s` after the removals*.

## Input
- `s`: A string consisting of lowercase English letters.
- `p`: A string consisting of lowercase English letters, which is a subsequence of `s`.
- `removable`: A 0-indexed integer array of unique indices of `s`.

## Output
- An integer representing the maximum number of characters that can be removed.

## Constraints
- `1 <= p.length <= s.length <= 10^5`
- `0 <= removable.length < s.length`
- `0 <= removable[i] < s.length`
- `s` and `p` both consist of lowercase English letters.
- The elements in `removable` are distinct.
- `p` is a subsequence of `s`.

## Examples
### Example 1
Input: `s = "abcacb"`, `p = "ab"`, `removable = [3, 1, 0]`
Output: `2`
**Explanation:** After removing the characters at indices 3 and 1, `s = "a--c-b"` (where dashes represent removed characters), which can be simplified to `"acb"`. `"ab"` is still a subsequence of `"acb"`.
If we remove the characters at indices 3, 1, and 0, `s = "---c-b"`, which can be simplified to `"cb"`, and `"ab"` is no longer a subsequence.
Hence, the maximum k is 2.