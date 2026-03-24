# Implement Queue using Stacks

## Problem Statement

Design a queue data structure using only **stack operations**.

Implement the `MyQueue` class with the following operations:

- `MyQueue()`  
  Initializes the queue object.

- `void push(int x)`  
  Push element `x` to the **back of the queue**.

- `int pop()`  
  Removes the element from the **front of the queue** and returns it.

- `int peek()`  
  Returns the element at the **front of the queue**.

- `boolean empty()`  
  Returns `true` if the queue is empty, otherwise returns `false`.

You may only use the **standard stack operations**, such as:

- `push` (add element to top)
- `pop` (remove top element)
- `top` or `peek` (view top element)
- `size`
- `isEmpty`

Your implementation must simulate the behavior of a **First-In-First-Out (FIFO)** queue using stacks.

---

## Input

The input consists of a sequence of operations performed on the queue.

- The first line contains an integer `n` representing the number of operations.
- Each of the next `n` lines represents an operation:


push x
pop
peek
empty


---

## Output

For every `pop`, `peek`, or `empty` operation, output the result of the operation.

- `pop` → returns the removed element.
- `peek` → returns the front element.
- `empty` → returns `true` or `false`.

---

## Constraints


1 ≤ n ≤ 10^5
-10^9 ≤ x ≤ 10^9


- `pop` and `peek` operations will only be called when the queue is **not empty**.

---

## Examples

### Example 1

**Input**


7
push 1
push 2
peek
pop
empty
pop
empty


**Output**


1
1
false
2
true


**Explanation**

- `push(1)` → queue = [1]
- `push(2)` → queue = [1, 2]
- `peek()` → returns `1`
- `pop()` → removes and returns `1`
- `empty()` → returns `false`
- `pop()` → removes and returns `2`
- `empty()` → returns `true`

---

### Example 2

**Input**


6
push 10
push 20
push 30
peek
pop
peek


**Output**


10
10
20


**Explanation**

- `push(10)` → queue = [10]
- `push(20)` → queue = [10, 20]
- `push(30)` → queue = [10, 20, 30]
- `peek()` → returns `10`
- `pop()` → removes and returns `10`
- `peek()` → returns `20`

---

## Notes

- The queue must follow **FIFO (First-In-First-Out)** order.
- Only **stack operations** are allowed to simulate queue behavior.
- The implementation should maintain the correct order of elements after every operation.