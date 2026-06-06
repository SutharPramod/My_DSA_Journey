# LeetCode 1281. Subtract the Product and Sum of Digits of an Integer

## Problem Statement
Given an integer number `n`, return the difference between the product of its digits and the sum of its digits.

## Input
- The input consists of a single line containing an integer `n`.

## Output
- Print a single integer representing the result of subtracting the sum of the digits from the product of the digits.

## Constraints
- `1 <= n <= 10^5`

## Examples

### Example 1
Input:
234

Output:
15

### Example 2
Input:
4421

Output:
21

## Notes
- To extract the digits of the number individually, you can repeatedly use the modulo operator (`% 10`) to get the last digit, and then perform integer division (`/ 10`) to remove the last digit.
- **Recommended Approach:**
  1. Initialize two variables: `product = 1` and `sum = 0`.
  2. Run a loop while `n > 0`.
  3. In each iteration, extract the last digit using `digit = n % 10`.
  4. Multiply `product` by `digit` and add `digit` to `sum`.
  5. Update `n` using `n = n / 10`.
  6. After the loop terminates, calculate and return `product - sum`.
- This approach runs in $O(\log_{10} n)$ time complexity, which corresponds to the total number of digits in the integer, and utilizes $O(1)$ auxiliary space.