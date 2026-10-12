# LeetCode 777. Swap Adjacent in LR String

## Problem Statement
In a string composed of `'L'`, `'R'`, and `'X'` characters, like `rxL`, a move consists of either replacing one occurrence of `"XL"` with `"LX"`, or replacing one occurrence of `"RX"` with `"XR"`. Given the starting string `start` and the ending string `end`, return `True` if and only if there exists a sequence of moves to transform `start` into `end`.

## Input
Two strings `start` and `end` consisting of characters `'L'`, `'R'`, and `'X'`.
```cpp
using namespace std;
```

## Output
A boolean value (`true` or `false`) indicating whether `start` can be transformed into `end`.

## Constraints
* $1 \le \text{start.length}() \le 10^4$
* `start.length()` == `end.length()`
* Both `start` and `end` will only consist of characters `'L'`, `'R'`, and `'X'`.

## Examples
### Example 1
Input: `start = "RXXLRXRXL", end = "XRLXXRRLX"`
Output: `true`
**Explanation:** We can transform start to end one move at a time:
- "RXXLRXRXL" ->
- "XRXLRXRXL" ->
- "XRLXRXRXL" ->
- "XRLXXRRXL" ->
- "XRLXXRRLX"

### Example 2
Input: `start = "X", end = "L"`
Output: `false`