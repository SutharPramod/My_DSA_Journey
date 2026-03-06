# Detect Cycle in Linked List

## 🧩 Problem Statement

Given the `head` of a singly linked list, determine whether the linked list contains a **cycle**.

A cycle exists if a node in the list can be reached again by continuously following the `next` pointer.

Return `true` if there is a cycle in the linked list, otherwise return `false`.

---

## 📥 Input

- `head`: The head node of a singly linked list.
- Each node contains:
  - `val`: Integer value
  - `next`: Pointer to the next node.

---

## 📤 Output

- Return `true` if the linked list contains a cycle.
- Return `false` otherwise.

---

## 📌 Constraints

- The number of nodes in the list is in the range `[0, 10^4]`
- `-10^5 <= Node.val <= 10^5`
- The `next` pointer may point to any node in the list or `null`.

---

## 🧪 Examples

### Example 1

Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle where the last node connects back to node with index 1.


### Example 2

Input: head = [1,2], pos = 0
Output: true
Explanation: The last node points back to the first node.


### Example 3

Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.


---

## 📝 Notes

- The variable `pos` is used only to represent where the tail connects in the linked list for testing.
- `pos` is **not** passed as a parameter to the function.
- Try to solve the problem using constant memory.