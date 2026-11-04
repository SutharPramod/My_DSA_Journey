# LeetCode 216. Combination Sum III

## Problem Statement
Find all valid combinations of `k` numbers that sum up to `n` such that the following conditions are true:
- Only numbers 1 through 9 are used.
- Each number is used at most once.

Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

## Input
- An integer `k` (the number of numbers in each combination).
- An integer `n` (the target sum).

## Output
- A list of lists containing all valid combinations.

## Constraints
- $2 \le k \le 9$
- $1 \le n \le 60$

## Examples
### Example 1
Input: k = 3, n = 7
Output: [[1, 2, 4]]
**Explanation:** 
1 + 2 + 4 = 7
There are no other valid combinations.

### Example 2
Input: k = 3, n = 9
Output: [[1, 2, 6], [1, 3, 5], [2, 3, 4]]
**Explanation:** 
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.