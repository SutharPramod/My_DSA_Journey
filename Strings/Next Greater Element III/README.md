# LeetCode 556. Next Greater Element III
## Problem Statement
Given a positive integer `n`, find the smallest integer which has exactly the same digits existing in the integer `n` and is greater in value than `n`. If no such positive integer exists, return `-1`.

Note that the returned integer should fit in a 32-bit integer. If there is a valid answer but it does not fit in a 32-bit integer, return `-1`.

## Input
A single positive integer `n`.
using namespace std;
## Output
An integer representing the smallest greater number with the same digits, or `-1` if it doesn't exist or overflows a 32-bit signed integer.
## Constraints
* `1 <= n <= 2^31 - 1`

## Examples
### Example 1
Input: n = 12
Output: 21
**Explanation:** The smallest integer greater than 12 with the same digits is 21.

### Example 2
Input: n = 21
Output: -1
**Explanation:** There is no greater integer with the same digits as 21.