# LeetCode 1871. Jump Game VII

## Problem Statement
You are given a 0-indexed binary string `s` and two integers `minJump` and `maxJump`. In the beginning, you are standing at index `0` which is equal to `'0'`. You can move from index `i` to index `j` if the following conditions are fulfilled:
- `i + minJump <= j <= minJump(i + maxJump, s.length - 1)`, and
- `s[j] == '0'`.

Return `true` if you can reach index `s.length - 1` in `s`, or `false` otherwise.

## Input
- `s`: A binary string consisting of characters `'0'` and `'1'`.
- `minJump`: An integer representing the minimum jump length.
- `maxJump`: An integer representing the maximum jump length.

using namespace std;

## Output
- Returns a boolean value (`true` or `false`).

## Constraints
- `2 <= s.length <= 10^5`
- `s[0] == '0'`
- `1 <= minJump <= maxJump < s.length`

## Examples
### Example 1
Input: s = "011010", minJump = 2, maxJump = 3
Output: true
**Explanation:**  
In the first step, move from index 0 to index 3 `(s[3] == '0')`.  
In the second step, move from index 3 to index 5 `(s[5] == '0')`.  
We can reach the last index, so return true.

### Example 2
Input: s = "011110", minJump = 2, maxJump = 3
Output: false