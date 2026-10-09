# LeetCode 1616. Split Two Strings To Make Palindrome
## Problem Statement
You are given two strings `a` and `b` of the same length. Choose an index and split both strings at the same index, splitting `a` into two strings: `a_prefix` and `a_suffix` where `a = a_prefix + a_suffix`, and splitting `b` into two strings: `b_prefix` and `b_suffix` where `b = b_prefix + b_suffix`.

Check if it is possible that either `a_prefix + b_suffix` or `b_prefix + a_suffix` forms a palindrome.

Notice that `x + y` denotes the concatenation of strings `x` and `y`.

## Input
Two strings `a` and `b` of the same length consisting of lowercase English letters.
```cpp
#include <string>
using namespace std;
```
## Output
Return `true` if it is possible to form a palindrome string, or `false` otherwise.

## Constraints
* `1 <= a.length, b.length <= 10^5`
* `a.length == b.length`
* `a` and `b` consist of lowercase English letters.

## Examples
### Example 1
Input: a = "x", b = "y"
Output: true
**Explanation:** If a = "x" and b = "y", you can choose index = 0, resulting in a_prefix = "", a_suffix = "x", b_prefix = "", b_suffix = "y". Then a_prefix + b_suffix = "" + "y" = "y", which is a palindrome.

### Example 2
Input: a = "xbdef", b = "xecab"
Output: false

### Example 3
Input: a = "ulacfd", b = "jizalu"
Output: true
**Explanation:** Split them at index 3:
a_prefix = "ula", a_suffix = "cfd"
b_prefix = "jiz", b_suffix = "alu"
Then a_prefix + b_suffix = "ula" + "alu" = "ulaalu", which is a palindrome.