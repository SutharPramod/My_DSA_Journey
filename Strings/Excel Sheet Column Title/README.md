# LeetCode 168. Excel Sheet Column Title

## Problem Statement
Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet.

For example:
- A -> 1
- B -> 2
- C -> 3
...
- Z -> 26
- AA -> 27
- AB -> 28 
...

## Input
An integer `columnNumber` ($1 \le \text{columnNumber} \le 2^{31} - 1$).
using namespace std;

## Output
A string representing the corresponding column title.

## Constraints
- $1 \le \text{columnNumber} \le 2^{31} - 1$

## Examples
### Example 1
Input: columnNumber = 1
Output: "A"
**Explanation:** 1 corresponds to A.

### Example 2
Input: columnNumber = 28
Output: "AB"
**Explanation:** 28 corresponds to AB.