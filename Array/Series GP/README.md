# GeeksforGeeks. N-th Term of GP

## Problem Statement
Given three integers `a`, `r`, and `n`, where `a` is the first term of a Geometric Progression (GP), `r` is the common ratio, and `n` is the position of the term you need to find. Calculate the $n^{\text{th}}$ term of the GP modulo $10^9 + 7$.

## Input
- Three space-separated integers `a`, `r`, and `n`.

## Output
- Print a single integer representing the $n^{\text{th}}$ term of the GP modulo $1000000007$ ($10^9 + 7$).

## Constraints
- `1 <= a, r, n <= 10^6`

## Examples

### Example 1
Input:
a = 2, r = 2, n = 4

Output:
16

**Explanation:** The GP series is `2, 4, 8, 16, 32, ...` in which `16` is the $4^{\text{th}}$ term.

### Example 2
Input:
a = 4, r = 3, n = 3

Output:
36

**Explanation:** The GP series is `4, 12, 36, 108, ...` in which `36` is the $3^{\text{rd}}$ term.