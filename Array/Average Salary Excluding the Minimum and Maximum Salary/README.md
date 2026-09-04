# LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary

## Problem Statement
You are given an array of **unique** integers `salary` where `salary[i]` is the salary of the $i^{\text{th}}$ employee.

Return the **average salary** of employees excluding the minimum and maximum salary. Answers within $10^{-5}$ of the actual answer will be accepted.

## Input
- The first line contains an integer `n`, representing the size of `salary`.
- The second line contains `n` space-separated integers representing `salary[]`.

## Output
- Print a floating-point number representing the average salary after removing the minimum and maximum values.

## Constraints
- `3 <= salary.length <= 100`
- `10^3 <= salary[i] <= 10^6`
- All integers in `salary` are **unique**.

## Examples

### Example 1
Input:
4
4000 3000 1000 2000

Output:
2500.00000

**Explanation:** Minimum salary is 1000 and maximum salary is 4000.
Salaries excluding minimum and maximum are `[2000, 3000]`.
Average = `(2000 + 3000) / 2 = 2500`.

### Example 2
Input:
3
1000 2000 3000

Output:
2000.00000

**Explanation:** Minimum salary is 1000 and maximum salary is 3000.
Salary excluding minimum and maximum is `[2000]`.
Average = `2000 / 1 = 2000`.