# Valid Parentheses

## Problem Statement

Given a string `s` consisting only of the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine whether the input string is **valid**.

A string is considered **valid** if:

1. Open brackets are closed by the **same type** of brackets.
2. Open brackets are closed in the **correct order**.
3. Every closing bracket has a corresponding open bracket of the same type.

Return `true` if the string is valid, otherwise return `false`.

---

## Input

A single string `s` containing only the following characters:


( ) { } [ ]


---

## Output

Return a boolean value:

- `true` if the string is valid.
- `false` otherwise.

---

## Constraints


1 ≤ s.length ≤ 10^5
s consists only of the characters '(', ')', '{', '}', '[' and ']'.


---

## Examples

### Example 1

**Input**


s = "()"


**Output**


true


**Explanation**

The opening parenthesis `(` is properly closed by `)`.

---

### Example 2

**Input**


s = "()[]{}"


**Output**


true


**Explanation**

Each opening bracket has a corresponding closing bracket in the correct order.

---

### Example 3

**Input**


s = "(]"


**Output**


false


**Explanation**

The opening parenthesis `(` is closed by `]`, which is a different type of bracket.

---

### Example 4

**Input**


s = "([)]"


**Output**


false


**Explanation**

The brackets are not closed in the correct order.

---

### Example 5

**Input**


s = "{[]}"


**Output**


true


**Explanation**

All brackets are properly matched and closed in the correct order.

---

## Notes

- The input string contains **only bracket characters**.
- The order of brackets is important; a closing bracket must match the **most recently opened bracket** that has not yet been closed.
- An empty stack of unmatched opening brackets indicates the string is valid.