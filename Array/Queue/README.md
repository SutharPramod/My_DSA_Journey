# 📂 Queue Data Structure Implementation

A comprehensive C++ implementation of the **Queue** data structure using a fixed-size array. This project highlights the core principles of **FIFO (First-In, First-Out)** processing.



---

## 🚀 Overview
The **Queue** is a linear data structure that manages elements in a first-come, first-served manner. It is the backbone of asynchronous data processing, scheduling, and buffering.

### Key Features
* **FIFO Logic**: The first element added is the first one to be removed.
* **Dual Pointers**: Uses `Front` and `Rear` pointers to manage the boundaries efficiently.
* **$O(1)$ Complexity**: Enqueue and Dequeue operations are performed in constant time.

---

## ⚙️ Core Operations

| Operation | Description | Complexity |
| :--- | :--- | :--- |
| `enqueue(val)` | Adds an element to the end (Rear) of the queue. | $O(1)$ |
| `dequeue()` | Removes the element from the front (Front) of the queue. | $O(1)$ |
| `front()` | Retrieves the first element without removing it. | $O(1)$ |
| `isEmpty()` | Checks if the queue is empty. | $O(1)$ |
| `isFull()` | Checks if the queue has reached capacity. | $O(1)$ |