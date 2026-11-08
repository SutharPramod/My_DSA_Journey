# N Prime Numbers After Prime P with Sum S

## Problem Statement
Given a prime number `P`, an integer `N`, and a target sum `S`, find all unique combinations of `N` prime numbers strictly greater than `P` such that their sum equals `S`.

## Input
- **P**: An integer representing the starting prime (exclusive).
- **N**: An integer representing the number of primes to choose.
- **S**: An integer representing the target sum.

## Output
- All combinations of `N` prime numbers strictly greater than `P` that sum up to `S`.

## Constraints
- `P` is a prime number.
- `N \ge 1`
- `S \le 10000` (typical upper bound for such number theory problems).

---

## Examples

### Example 1
* **Input:** `N = 2`, `P = 7`, `S = 28`
* **Output:** 
11 17

#### Explanation: The primes strictly greater than 7 are 11, 13, 17, 19, ... The combination of 2 primes that sum to 28 is `11 + 17 = 28`.