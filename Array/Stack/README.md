# 📚 Stack Data Structure Implementation

A robust, efficient C++ implementation of the **Stack** data structure using a fixed-size array. This project demonstrates the core principles of **LIFO (Last-In, First-Out)** memory management.



---

## 🚀 Overview
The **Stack** is a linear data structure that serves as a collection of elements. It is widely used in system memory management, expression parsing, and backtracking algorithms.

### Key Features
* **LIFO Logic**: The last element added is the first one removed.
* **$O(1)$ Complexity**: All core operations (Push, Pop, Peek) occur in constant time.
* **Memory Efficient**: Minimal overhead using array-based allocation.

---

## ⚙️ Core Operations

| Operation | Description | Complexity |
| :--- | :--- | :--- |
| `push(val)` | Adds an element to the top of the stack. | $O(1)$ |
| `pop()` | Removes the topmost element. | $O(1)$ |
| `peek()` | Retrieves the top element without removing it. | $O(1)$ |
| `isEmpty()` | Checks if the stack is empty. | $O(1)$ |
| `isFull()` | Checks if the stack has reached capacity. | $O(1)$ |