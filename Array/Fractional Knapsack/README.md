# GeeksforGeeks. Fractional Knapsack

## Problem Statement
Given two arrays, `val[]` and `wt[]`, representing the values and weights of $n$ items, and an integer `capacity` representing the maximum weight a knapsack can hold, determine the maximum total value that can be achieved in the knapsack.

Unlike the 0/1 Knapsack problem, you are allowed to **break items into fractions** if necessary.

Return the maximum total value rounded to 6 decimal places.

## Input
- The first line contains an integer `n`, representing the number of items.
- The second line contains `n` space-separated integers representing the values `val[]`.
- The third line contains `n` space-separated integers representing the weights `wt[]`.
- The fourth line contains a single integer representing `capacity`.

## Output
- Print a single floating-point number representing the maximum total value, rounded to 6 decimal places.

## Constraints
- `1 <= val.size() == wt.size() <= 10^5`
- `1 <= capacity <= 10^9`
- `1 <= val[i], wt[i] <= 10^4`

## Examples

### Example 1
Input:
3
60 100 120
10 20 30
50

Output:
240.000000

**Explanation:** Take the full 1st item (weight 10, value 60), the full 2nd item (weight 20, value 100), and a $\frac{2}{3}$ fraction of the 3rd item (weight 20 out of 30, value $\frac{2}{3} \times 120 = 80$).
Total weight = $10 + 20 + 20 = 50$. Total value = $60 + 100 + 80 = 240.000000$.

### Example 2
Input:
1
500
30
10

Output:
166.666667

**Explanation:** Since the single item's weight exceeds capacity, take a fraction $\frac{10}{30}$ of it, yielding value $500 \times \frac{10}{30} \approx 166.666667$.