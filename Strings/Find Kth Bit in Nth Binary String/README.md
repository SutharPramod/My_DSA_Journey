# LeetCode 1545. Find Kth Bit in Nth Binary String

## Problem Statement
Given two positive integers `n` and `k`, the binary string `S_n` is formed as follows:
- `S_1 = "0"`
- `S_i = S_{i - 1} + "1" + \text{reverse(invert(S_{i - 1}))}` for `i > 1`

Where `+` denotes the concatenation operation, `invert` makes all `0`s `1`s and all `1`s `0`s, and `reverse` reverses the string.

Return the $k^{th}$ bit in `S_n`. It is guaranteed that `k` is valid for the given `n`.

## Input
Two integers `n` and `k`, where `1 <= n <= 20` and `1 <= k <= 2^n - 1`.

## Output
A character (`'0'` or `'1'`) representing the $k^{th}$ bit in `S_n`.

## Constraints
- `1 <= n <= 20`
- `1 <= k <= 2^n - 1`

## Examples
### Example 1
Input: n = 3, k = 1
Output: 0
**Explanation:** S_3 is "0111001". The 1st bit is "0".

### Example 2
Input: n = 4, k = 11
Output: 1
**Explanation:** S_4 is "011100110110001". The 11th bit is "1".