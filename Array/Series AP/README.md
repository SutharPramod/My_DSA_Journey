# GeeksforGeeks. Series AP

## Problem Statement
Given the first two terms `a1` and `a2` of an Arithmetic Progression (AP), find the $n^{\text{th}}$ term of the series.

## Input
- Three integers: `a1` (first term), `a2` (second term), and `n` (target term index).

## Output
- Print a single integer representing the $n^{\text{th}}$ term of the Arithmetic Progression.

## Constraints
- `-10^4 <= a1, a2 <= 10^4`
- `1 <= n <= 10^4`

## Examples

### Example 1
Input:
a1 = 2, a2 = 3, n = 4

Output:
5

**Explanation:** 
- Common difference $d = a2 - a1 = 3 - 2 = 1$.
- The sequence is: `2, 3, 4, 5, 6, ...`
- The $4^{\text{th}}$ term is `5`.

### Example 2
Input:
a1 = 1, a2 = 3, n = 10

Output:
19

**Explanation:** 
- Common difference $d = a2 - a1 = 3 - 1 = 2$.
- The sequence is: `1, 3, 5, 7, 9, 11, 13, 15, 17, 19, ...`
- The $10^{\text{th}}$ term is `19`.