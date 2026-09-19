# LeetCode 1678. Goal Parser Interpretation

## Problem Statement
You have a command `command` that consists of a alphabet `"G"`, `"()"` and/or `"(al)"` in some order. The Goal Parser will interpret `command` as a string formatted such that:
- `"G"` is interpreted as the string `"G"`,
- `"()"` is interpreted as the string `"o"`, and
- `"(al)"` is interpreted as the string `"al"`.

The interpreted strings are then concatenated in the original order. Return the **Goal Parser's interpretation** of `command`.

## Input
- A single line containing a string representing `command`.

## Output
- Print a string representing the parsed interpretation of `command`.

## Constraints
- `1 <= command.length <= 100`
- `command` consists of `"G"`, `"()"`, and/or `"(al)"` in some order.

## Examples

### Example 1
Input:
G()()()](al)

Output:
Goal

**Explanation:**
- `"G"` $\rightarrow$ `"G"`
- `"()"` $\rightarrow$ `"o"`
- `"(al)"` $\rightarrow$ `"al"`
The parsed result is `"G" + "o" + "al" = "Goal"`.

### Example 2
Input:
G()()()](al)

Output:
Gooooal

**Explanation:**
- `"G"` $\rightarrow$ `"G"`
- `"()"` $\rightarrow$ `"o"`
- `"()"` $\rightarrow$ `"o"`
- `"()"` $\rightarrow$ `"o"`
- `"(al)"` $\rightarrow$ `"al"`
The parsed result is `"G" + "o" + "o" + "o" + "al" = "Gooooal"`.

### Example 3
Input:
(al)G(al)()()G

Output:
alGalooG