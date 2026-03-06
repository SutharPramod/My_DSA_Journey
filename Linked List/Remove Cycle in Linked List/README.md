# Remove Cycle in Linked List

## 🧩 Problem Statement

Given the `head` of a singly linked list that may contain a **cycle**, detect the cycle and remove it so that the linked list becomes a proper linear linked list.

A cycle exists if a node’s `next` pointer points to a previous node in the list. After removing the cycle, the last node should point to `null`.

Return the head of the modified linked list.

---

## 📥 Input

- `head`: The head node of a singly linked list.
- Each node contains:
  - `val`: Integer value
  - `next`: Pointer to the next node.

---

## 📤 Output

- Return the head of the linked list after removing the cycle.

---

## 📌 Constraints

- The number of nodes in the list is in the range `[1, 10^5]`
- `-10^9 <= Node.val <= 10^9`

---

## 🧪 Examples

### Example 1

Input: head = [1,2,3,4,5], pos = 1
Output: [1,2,3,4,5]
Explanation:
The last node connects back to node with index 1 forming a cycle.
After removing the cycle, the list becomes linear.


### Example 2

Input: head = [1,2,3], pos = 0
Output: [1,2,3]
Explanation:
The last node connects back to the first node.
After removing the cycle, the last node points to null.


### Example 3

Input: head = [1], pos = -1
Output: [1]
Explanation:
There is no cycle in the linked list.


---

## 📝 Notes

- The variable `pos` represents the index where the tail connects to form a cycle (used for explanation only).
- `pos` is not passed as a function parameter.
- The goal is to **detect and remove the cycle without losing any nodes**.
- Expected time complexity: O(n)
- Expected space complexity: O(1)