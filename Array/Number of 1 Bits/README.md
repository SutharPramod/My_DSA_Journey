# LeetCode 191. Number of 1 Bits

## Problem Statement
Given a positive integer `n`, write a function that returns the number of set bits (also known as the **Hamming weight**) present in its binary representation.

## Input
- A single integer `n` (represented as a 32-bit unsigned integer).

## Output
- Print a single integer representing the count of '1' bits in the binary representation of `n`.

## Constraints
- `1 <= n <= 2^31 - 1` (or $1 \le n \le 2^{32} - 1$ for unsigned integers)

## Examples

### Example 1
Input:
11

Output:
3

**Explanation:** The input integer 11 has binary representation `00000000000000000000000000001011`. It contains a total of three set bits.

### Example 2
Input:
128

Output:
1

**Explanation:** The input integer 128 has binary representation `00000000000000000000000010000000`. It contains a total of one set bit.

### Example 3
Input:
2147483645

Output:
30

**Explanation:** The input integer 2147483645 has binary representation `01111111111111111111111111111101`. It contains a total of thirty set bits.