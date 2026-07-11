# LeetCode 441. Arranging Coins

## Problem Statement
You have `n` coins and you want to build a staircase with these coins. The staircase consists of `k` rows where the $i^{th}$ row has exactly `i` coins. The last row of the staircase **may be** incomplete.

Given the integer `n`, return the number of **complete rows** of the staircase you will build.

## Input
- A single line containing an integer `n` representing the total number of coins.

## Output
- Print a single integer representing the total number of complete rows that can be formed.

## Constraints
- `1 <= n <= 2^31 - 1`

## Examples

### Example 1
Input:
5

Output:
2

**Explanation:** The coins can be arranged as follows:
Row 1: 🪙
Row 2: 🪙 🪙
Row 3: 🪙 🪙 (Incomplete)
Since the 3rd row is incomplete, we return 2.

### Example 2
Input:
8

Output:
3

**Explanation:** The coins can be arranged as follows:
Row 1: 🪙
Row 2: 🪙 🪙
Row 3: 🪙 🪙 🪙
Row 4: 🪙 🪙 (Incomplete)
Since the 4th row is incomplete, we return 3.