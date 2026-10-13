# LeetCode 227. Basic Calculator II
## Problem Statement
Given a string `s` which represents an expression, evaluate this expression and return its value. 

The integer division should truncate toward zero.

You may assume that the given expression is always valid. All intermediate results will be in the range of $[-2^{31}, 2^{31} - 1]$.

Note: You are not allowed to use the `eval` function which evaluates the string as a general programming language.

## Input
A string `s` representing a valid arithmetic expression consisting of non-negative integers, `+`, `-`, `*`, `/` and spaces ` ` interspersed.
```cpp
#include <string>
```
## Output
An integer representing the evaluated result of the expression.

## Constraints
* $1 \le \text{s.length} \le 3 \times 10^5$
* `s` consists of integers and operators (`+`, `-`, `*`, `/`) separated by some number of spaces.
* `s` represents a valid expression.
* All the integers in the expression are non-negative integers in the range $[0, 2^{31} - 1]$.
* The answer is guaranteed to fit in a 32-bit signed integer.

## Examples
### Example 1
Input: s = "3+2*2"
Output: 7
**Explanation:** 2*2 is evaluated first, then 3 + 4 = 7.

### Example 2
Input: s = " 3/2 "
Output: 1
**Explanation:** Integer division truncates toward zero.

### Example 3
Input: s = " 3+5 / 2 "
Output: 5
**Explanation:** 5 / 2 = 2, then 3 + 2 = 5.