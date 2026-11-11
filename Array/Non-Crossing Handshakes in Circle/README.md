# Non-Crossing Handshakes in Circle

## Problem Statement
You are given an even number of people $num\_people$ sitting around a circle and handshaking simultaneously, such that no two handshakes cross. Return the number of ways these handshakes could happen.

Since the answer can be very large, return it modulo $10^9 + 7$.

## Input
- An integer `num_people` representing the even number of people sitting in a circle.

## Output
- An integer representing the number of non-crossing handshakes modulo $10^9 + 7$.

## Constraints
- $2 \le num\_people \le 1000$
- `num_people` is always even.

## Examples
### Example 1
Input: `num_people = 2`
Output: `1`
**Explanation:** 
There are 2 people, so there is only 1 way to shake hands.

### Example 2
Input: `num_people = 4`
Output: `2`
**Explanation:** 
There are 4 people. There are 2 ways to handshake:
1. Person 1 shakes with 2, and Person 3 shakes with 4. (Non-crossing)
2. Person 1 shakes with 4, and Person 2 shakes with 3. (Non-crossing)