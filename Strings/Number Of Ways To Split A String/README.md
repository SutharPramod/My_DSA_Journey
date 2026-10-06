# LeetCode 1573. Number Of Ways To Split A String

## Problem Statement
Given a binary string `s`, you can split `s` into 3 non-empty strings $s_1$, $s_2$, and $s_3$ such that $s = s_1 + s_2 + s_3$. 

Return the number of ways you can split `s` such that the number of characters `'1'` is the same in $s_1$, $s_2$, and $s_3$. Since the answer could be too large, return it modulo $10^9 + 7$.

## Input
A string `s` consisting of characters `'0'` and `'1'`.
```cpp
using namespace std;
```

## Output
An integer representing the number of ways to split the string modulo $10^9 + 7$.

## Constraints
* $3 \le \text{s.length} \le 10^5$
* `s[i]` is either `'0'` or `'1'`.

## Examples
### Example 1
Input: `s = "10101"`
Output: `4`
**Explanation:** There are four ways to split s in three parts where the number of ones in each part is the same.
"1 | 010 | 1"
"1 | 01 | 01"
"10 | 10 | 1"
"10 | 1 | 01"