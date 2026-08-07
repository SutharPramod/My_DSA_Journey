# GeeksforGeeks. Print Number Pattern

## Problem Statement
You are given a number `n`. You need to generate and print a pattern based on the given value of `n`.

For each row, starting from the first:
- Print numbers in descending order from `n` down to `1`.
- Each number in a row is repeated as many times as the current repetition count (which starts at `n` for the first row and decreases by `1` in each subsequent row down to `1`).
- Instead of printing each row on a new line, separate rows with `-1`.
- After printing the entire pattern, end the output with `-1`.

## Input
- A single integer `n`.

## Output
- Return an array of integers representing the flattened sequence of numbers separated by `-1`.

## Constraints
- `1 <= n <= 40`

## Examples

### Example 1
Input:
2

Output:
[2, 2, 1, 1, -1, 2, 1, -1]

**Explanation:**
- **Row 1:** Each number from 2 down to 1 is repeated 2 times $\rightarrow$ `2 2 1 1`, followed by `-1`.
- **Row 2:** Each number from 2 down to 1 is repeated 1 time $\rightarrow$ `2 1`, followed by `-1`.

### Example 2
Input:
3

Output:
[3, 3, 3, 2, 2, 2, 1, 1, 1, -1, 3, 3, 2, 2, 1, 1, -1, 3, 2, 1, -1]

**Explanation:**
- **Row 1 (count = 3):** `3 3 3 2 2 2 1 1 1` followed by `-1`.
- **Row 2 (count = 2):** `3 3 2 2 1 1` followed by `-1`.
- **Row 3 (count = 1):** `3 2 1` followed by `-1`.

### Example 3
Input:
1

Output:
[1, -1]

**Explanation:**
- **Row 1 (count = 1):** `1` followed by `-1`.