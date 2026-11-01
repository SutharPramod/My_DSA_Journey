# LeetCode 241. Different Ways to Add Parentheses
## Problem Statement
Given a string of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators in parentheses. The valid operators are `+`, `-` and `*`.

## Input
A string `expression` consisting of digits and the operators `+`, `-`, and `*`.

## Output
A list of integers representing all possible computed results from different ways of adding parentheses.

## Constraints
* The number of digits in the input expression is in the range `[1, 20]`.
* The output results are guaranteed to fit within a 32-bit signed integer.

## Examples
### Example 1
Input: expression = "2-1-1"
Output: [0, 2]
**Explanation:**
((2-1)-1) = 0
(2-(1-1)) = 2

### Example 2
Input: expression = "2*3-4*5"
Output: [-34, -14, -10, -10, 10]
**Explanation:**
(2*(3-(4*5))) = -34
((2*3)-(4*5)) = -14
((2*(3-4))*5) = -10
(2*((3-4)*5)) = -10
(((2*3)-4)*5) = 10