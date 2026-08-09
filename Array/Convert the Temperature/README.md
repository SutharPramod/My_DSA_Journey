# LeetCode 2469. Convert the Temperature

## Problem Statement
You are given a non-negative floating point number `celsius` rounded to two decimal places, representing a temperature in **Celsius**.

You should convert Celsius into **Kelvin** and **Fahrenheit** and return it as an array `ans = [kelvin, fahrenheit]`.

Return the array `ans`. Answers within $10^{-5}$ of the actual answer will be accepted.

### Formulae:
- $\text{Kelvin} = \text{Celsius} + 273.15$
- $\text{Fahrenheit} = \text{Celsius} \times 1.80 + 32.00$

## Input
- A single line containing a floating-point number representing `celsius`.

## Output
- Print two space-separated floating-point numbers representing `kelvin` and `fahrenheit`.

## Constraints
- `0 <= celsius <= 1000`

## Examples

### Example 1
Input:
36.50

Output:
309.65000 97.70000

**Explanation:**
- Temperature at 36.50 Celsius converted to Kelvin is $36.50 + 273.15 = 309.65$.
- Temperature at 36.50 Celsius converted to Fahrenheit is $36.50 \times 1.80 + 32.00 = 97.70$.

### Example 2
Input:
122.11

Output:
395.26000 251.79800

**Explanation:**
- Temperature at 122.11 Celsius converted to Kelvin is $122.11 + 273.15 = 395.26$.
- Temperature at 122.11 Celsius converted to Fahrenheit is $122.11 \times 1.80 + 32.00 = 251.798$.