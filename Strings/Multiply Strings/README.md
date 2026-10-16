# LeetCode 43. Multiply Strings

## Problem Statement
Given two non-negative integers `num1` and `num2` represented as strings, return the product of `num1` and `num2`, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

## Input
Two strings `num1` and `num2` consisting of digits only.
```cpp
using namespace std;
string num1;
string num2;
```

## Output
A string representing the product of `num1` and `num2`.

## Constraints
* `1 <= num1.length, num2.length <= 200`
* `num1` and `num2` consist of digits only.
* Both `num1` and `num2` do not contain any leading zero, except for the number `0` itself.

## Examples
### Example 1
Input: `num1 = "2"`, `num2 = "3"`
Output: `"6"`
**Explanation:** The product of 2 and 3 is 6.

### Example 2
Input: `num1 = "123"`, `num2 = "456"`
Output: `"56088"`
**Explanation:** The product of 123 and 456 is 56088.