# LeetCode 1251. Check If It Is a Good Array

## Problem Statement
Given an array `nums` of positive integers. Your task is to select a subset of `nums`, multiply each element by an integer and add all these numbers. The array is said to be **good** if you can obtain a sum of `1` from the array by any possible choice of elements and integers.

Return `true` if the array is good, or `false` otherwise.

## Input
- The first line contains an integer `n`, representing the number of elements in the array.
- The second line contains `n` space-separated integers representing the elements of `nums`.

## Output
- Print `true` if the array is good.
- Print `false` otherwise.

## Constraints
- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^9`

## Examples

### Example 1
Input:
3
12 5 7

Output:
true

**Explanation:** Select the subset `[5, 7]`. We can pick integers 3 and -2 respectively. 
$5 \times 3 + 7 \times (-2) = 15 - 14 = 1$. Thus, it is a good array.

### Example 2
Input:
3
29 6 10

Output:
true

**Explanation:** Select the subset `[29, 6]`. We can pick integers 1 and -5 respectively. 
$29 \times 1 + 6 \times (-5) = 29 - 30 = -1$. We can change signs to get 1: $29 \times (-1) + 6 \times 5 = 1$.

### Example 3
Input:
2
3 6

Output:
false

**Explanation:** There is no way to choose a subset and integers to get a sum of 1 because all elements are multiples of 3.

## Notes

- **Mathematical Insight (Bézout's Identity):** The problem asks whether we can find a subset of numbers $A_1, A_2, \dots, A_k$ and integers $x_1, x_2, \dots, x_k$ such that:
  $$A_1x_1 + A_2x_2 + \dots + A_kx_k = 1$$
- According to **Bézout's Identity** (generalized for multiple integers), a linear combination of integers can equal $d$ if and only if $d$ is a multiple of the greatest common divisor ($\text{GCD}$) of those integers.
- For the linear combination to equal `1`, the greatest common divisor of the chosen subset must be exactly `1`.
- **Simplifying the Problem:** If a subset of numbers has a $\text{GCD}$ of 1, then the $\text{GCD}$ of the *entire array* must also be 1 (since adding more numbers to a set can only maintain or decrease the overall $\text{GCD}$, down to a minimum of 1). 
- Thus, the entire problem reduces to a simple question: **Is the greatest common divisor of all elements in the array equal to 1?**
- **Algorithm Strategy:**
    1. Initialize a variable `running_gcd` with the first element of the array.
    2. Loop through the rest of the numbers in the array and continuously calculate the running $\text{GCD}$ using the Euclidean algorithm: `running_gcd = gcd(running_gcd, nums[i])`.
    3. **Optimization Early Exit:** If at any point during the traversal `running_gcd` becomes `1`, we can instantly return `true` because the $\text{GCD}$ of positive integers cannot decrease below 1.
    4. If the loop finishes and the final global $\text{GCD}$ is greater than 1, return `false`.
- **Complexity:**
    - The time complexity is $O(n \log(\min(\text{nums})))$ because computing the $\text{GCD}$ of two numbers takes logarithmic time relative to the size of the values, and we do this linearly across the array.
    - The space complexity is $O(1)$ since the evaluation is calculated entirely on the fly using a single tracking state variable.