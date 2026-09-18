# LeetCode 1528. Shuffle String

## Problem Statement
You are given a string `s` and an integer array `indices` of the same length. The string `s` will be shuffled such that the character at the $i^{\text{th}}$ position moves to `indices[i]` in the shuffled string.

Return the shuffled string.

## Input
- The first line contains a string `s`.
- The second line contains space-separated integers representing the array `indices`.

## Output
- Print a string representing the restored/shuffled string.

## Constraints
- `s.length == indices.length == n`
- `1 <= n <= 100`
- `s` consists of lowercase English letters.
- `0 <= indices[i] < n`
- All values of `indices` are **unique** (i.e., `indices` is a permutation of integers from `0` to `n - 1`).

## Examples

### Example 1
Input:
codeleet
4 5 6 7 0 2 1 3

Output:
leetcode

**Explanation:** As shown, `"codeleet"` becomes `"leetcode"` after restoring characters to their target positions:
- `s[0] = 'c'` moves to index `4`
- `s[1] = 'o'` moves to index `5`
- `s[2] = 'd'` moves to index `6`
- `s[3] = 'e'` moves to index `7`
- `s[4] = 'l'` moves to index `0`
- `s[5] = 'e'` moves to index `2`
- `s[6] = 'e'` moves to index `1`
- `s[7] = 't'` moves to index `3`

### Example 2
Input:
abc
0 1 2

Output:
abc

**Explanation:** After shuffling, each character remains in its original position.