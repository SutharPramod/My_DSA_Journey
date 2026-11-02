# LeetCode N-Digit Numbers with Increasing Digits

## Problem Statement
Given an integer $N$, find all $N$-digit numbers where the digits are strictly increasing from left to right (i.e., each digit is greater than the previous digit). The numbers must not start with leading zeros (for $N > 0$, the first digit must be between 1 and 9).

## Input
An integer $N$ ($1 \le N \le 9$).

## Output
A list of all $N$-digit numbers with strictly increasing digits, sorted in ascending order.

## Constraints
* $1 \le N \le 9$

## Examples
### Example 1
Input: N = 1
Output: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
**Explanation:** For N=1, all single digit numbers have increasing digits. (Note: depending on the specific variant, sometimes 0 is included, or strictly 1-9. Here we consider 0-9 for 1-digit).

### Example 2
Input: N = 2
Output: 12, 13, 14, 15, 16, 17, 18, 19, 23, ..., 78, 79, 89
**Explanation:** All 2-digit numbers where the second digit is strictly greater than the first digit.