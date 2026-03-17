# Min Stack

## Problem Statement

Design a stack data structure that supports the following operations in **constant time**:

- `push(x)` — Push element `x` onto the stack.
- `pop()` — Remove the element on the top of the stack.
- `top()` — Get the top element of the stack.
- `getMin()` — Retrieve the **minimum element** in the stack.

You must design a data structure that supports all these operations in **O(1)** time.

Implement the `MinStack` class with the above operations.

---

## Input

The input consists of a sequence of stack operations.

- The first line contains an integer `n` representing the number of operations.
- Each of the next `n` lines represents an operation:


push x
pop
top
getMin


---

## Output

For every `top` and `getMin` operation, output the corresponding value.

---

## Constraints


1 ≤ n ≤ 2 * 10^5
-10^9 ≤ x ≤ 10^9


- `pop`, `top`, and `getMin` operations will only be called when the stack is **not empty**.

---

## Examples

### Example 1

**Input**


8
push 5
push 3
push 7
getMin
pop
top
getMin
pop


**Output**


3
3
3


**Explanation**

- `push(5)` → stack = [5]
- `push(3)` → stack = [5, 3]
- `push(7)` → stack = [5, 3, 7]
- `getMin()` → returns `3`
- `pop()` → stack = [5, 3]
- `top()` → returns `3`
- `getMin()` → returns `3`
- `pop()` → stack = [5]

---

### Example 2

**Input**


6
push 2
push 0
push 3
getMin
pop
getMin


**Output**


0
0


**Explanation**

- `push(2)` → stack = [2]
- `push(0)` → stack = [2, 0]
- `push(3)` → stack = [2, 0, 3]
- `getMin()` → returns `0`
- `pop()` → stack = [2, 0]
- `getMin()` → returns `0`

---

## Notes

- The stack must support retrieving the **minimum element in constant time**.
- The minimum value should reflect the **current state of the stack**.
- The operations must be implemented efficiently to handle up to `2 * 10^5` operations.