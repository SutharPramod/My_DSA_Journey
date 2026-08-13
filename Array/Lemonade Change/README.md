# LeetCode 860. Lemonade Change

## Problem Statement
At a lemonade stand, each lemonade costs **$5**. Customers are standing in a queue to buy from you and order one at a time (in the order specified by `bills`). Each customer will only buy one lemonade and pay with either a **$5**, **$10**, or **$20** bill. You must provide the correct change to each customer so that the net transaction is $5.

Note that you do not have any change in hand at first.

Given an integer array `bills` where `bills[i]` is the bill the $i^{th}$ customer pays, return `true` if you can provide every customer with the correct change, or `false` otherwise.

## Input
- The first line contains an integer `n`, representing the number of customers.
- The second line contains `n` space-separated integers representing `bills[]`.

## Output
- Print `true` if correct change can be provided to every customer, or `false` otherwise.

## Constraints
- `1 <= bills.length <= 10^5`
- `bills[i]` is either `5`, `10`, or `20`.

## Examples

### Example 1
Input:
5
5 5 5 10 20

Output:
true

**Explanation:** 
- From the first 3 customers, we collect three $5 bills in order.
- From the $4^{\text{th}}$ customer, we collect a $10 bill and give back a $5 bill.
- From the $5^{\text{th}}$ customer, we give a $10 bill and a $5 bill.
- Since all customers got correct change, we output `true`.

### Example 2
Input:
5
5 5 10 10 20

Output:
false

**Explanation:** 
- From the first two customers, we collect two $5 bills.
- For the next two customers, we collect a $10 bill and give back a $5 bill.
- For the last customer, we try to give $15 back in change, but we only have two $10 bills.
- Since we cannot give correct change, the answer is `false`.