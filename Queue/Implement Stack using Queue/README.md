# Implement Stack using Queues

## Problem Statement

Design a stack data structure using only **queue operations**.

Implement the `MyStack` class with the following operations:

- `MyStack()`  
  Initializes the stack object.

- `void push(int x)`  
  Push element `x` onto the stack.

- `int pop()`  
  Removes the element on the **top of the stack** and returns it.

- `int top()`  
  Returns the element on the **top of the stack**.

- `boolean empty()`  
  Returns `true` if the stack is empty, otherwise returns `false`.

You are allowed to use only the **standard operations of a queue**, which means you can only use:

- `enqueue` (push to back)
- `dequeue` (remove from front)
- `peek` (get front element)
- `size`
- `isEmpty`

Your implementation should simulate the behavior of a **Last-In-First-Out (LIFO)** stack using queues.

---

## Input

The input consists of a sequence of operations performed on the stack.

- The first line contains an integer `n` representing the number of operations.
- Each of the next `n` lines represents an operation:


push x
pop
top
empty


---

## Output

For every `pop`, `top`, or `empty` operation, output the result of the operation.

- `pop` → returns the removed element.
- `top` → returns the top element.
- `empty` → returns `true` or `false`.

---

## Constraints


1 ≤ n ≤ 10^5
-10^9 ≤ x ≤ 10^9


- `pop` and `top` operations will only be called when the stack is **not empty**.

---

## Examples

### Example 1

**Input**


7
push 1
push 2
top
pop
empty
pop
empty


**Output**


2
2
false
1
true


**Explanation**

- `push(1)` → stack = [1]
- `push(2)` → stack = [1, 2]
- `top()` → returns `2`
- `pop()` → removes and returns `2`
- `empty()` → returns `false`
- `pop()` → removes and returns `1`
- `empty()` → returns `true`

---

### Example 2

**Input**


5
push 10
push 20
push 30
top
pop


**Output**


30
30


**Explanation**

- `push(10)` → stack = [10]
- `push(20)` → stack = [10, 20]
- `push(30)` → stack = [10, 20, 30]
- `top()` → returns `30`
- `pop()` → removes and returns `30`

---

## Notes

- The stack must follow **LIFO (Last-In-First-Out)** order.
- Only **queue operations** are allowed to simulate stack behavior.
- The solution should maintain the correct order of elements after every operation.