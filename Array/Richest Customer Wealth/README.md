# LeetCode 1672. Richest Customer Wealth

## Problem Statement
You are given an `m x n` integer grid `accounts` where `accounts[i][j]` is the amount of money the $i^{th}$ customer has in the $j^{th}$ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

## Input
- The first line contains two integers `m` and `n`, representing the number of customers and the number of banks respectively.
- The next `m` lines each contain `n` integers, representing the bank account balances for each customer.

## Output
- Print a single integer representing the maximum wealth among all customers.

## Constraints
- `m == accounts.length`
- `n == accounts[i].length`
- `1 <= m, n <= 50`
- `1 <= accounts[i][j] <= 100`

## Examples

### Example 1
Input:
2 3
1 2 3
3 2 1

Output:
6

### Example 2
Input:
3 2
1 5
7 3
3 5

Output:
10

### Example 3
Input:
3 3
2 8 7
7 1 3
1 9 5

Output:
17

## Notes
- The problem requires calculating the row sum for each row in a 2D matrix.
- Each row represents a single customer, and the sum of elements in that row equals their total wealth.
- **Recommended Approach:** Iterate through each row, compute the sum of its integers, and keep track of the maximum sum encountered using a running maximum variable. This runs efficiently in $O(m \times n)$ time complexity and $O(1)$ space complexity.