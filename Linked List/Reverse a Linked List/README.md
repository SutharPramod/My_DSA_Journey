# Reverse a Linked List

## 🧩 Problem Statement

Given the head of a singly linked list, reverse the list and return the new head.

You must reverse the links between nodes so that the last node becomes the first node.

---

## 📥 Input

- `head`: The head node of a singly linked list.
- Each node contains:
  - `val`: Integer value
  - `next`: Pointer to the next node

---

## 📤 Output

- Return the new head of the reversed linked list.

---

## 📌 Constraints

- The number of nodes in the list is in the range `[0, 10^5]`
- `-10^9 <= Node.val <= 10^9`

---

## 🧪 Examples

### Example 1

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]


### Example 2

Input: head = [1,2]
Output: [2,1]


### Example 3

Input: head = []
Output: []


---

## 📝 Notes

- You may solve it iteratively or recursively.
- Try to solve it in O(n) time and O(1) extra space.
- Only the node links should be modified; node values must remain unchanged.