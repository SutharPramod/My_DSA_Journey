# LeetCode 66. Plus One

## Problem Statement
You are given a **large integer** represented as an integer array `digits`, where each `digits[i]` is the $i^{th}$ digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading `0`s, except for the number `0` itself.

Increment the large integer by one and return the resulting array of digits.

## Input
- The first line contains an integer `n`, representing the number of digits in the array.
- The second line contains `n` space-separated integers representing the elements of `digits`.

## Output
- Print `n` (or `n + 1`) space-separated integers representing the digits after adding one.

## Constraints
- `1 <= digits.length <= 100`
- `0 <= digits[i] <= 9`
- `digits` does not contain any leading 0's.

## Examples

### Example 1
Input:
3
1 2 3

Output:
1 2 4

**Explanation:** The array represents the integer 123. Incrementing by one gives 123 + 1 = 124. Thus, the result should be `[1, 2, 4]`.

### Example 2
Input:
4
4 3 2 1

Output:
4 3 2 2

**Explanation:** The array represents the integer 4321. Incrementing by one gives 4321 + 1 = 4322. Thus, the result should be `[4, 3, 2, 2]`.

### Example 3
Input:
1
9

Output:
1 0

**Explanation:** The array represents the integer 9. Incrementing by one gives 9 + 1 = 10. Thus, the result should be `[1, 0]`.