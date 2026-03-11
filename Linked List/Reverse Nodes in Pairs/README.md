# Reverse Nodes in Pairs

## 🧩 Problem Statement

Given the head of a singly linked list, swap every two adjacent nodes and return the modified list.

You must swap the nodes **without modifying the values inside the nodes**, only the node connections should be changed.

If the number of nodes in the list is odd, the last node should remain unchanged.

---

## 📥 Input

- `head`: The head of a singly linked list.

Each node contains:
- `val`: Integer value
- `next`: Pointer to the next node

---

## 📤 Output

- Return the head of the linked list after swapping every two adjacent nodes.

---

## 📌 Constraints

- The number of nodes in the list is in the range `[0, 100]`
- `0 <= Node.val <= 100`

---

## 🧪 Examples

### Example 1

Input: head = [1,2,3,4]
Output: [2,1,4,3]


### Example 2

Input: head = []
Output: []


### Example 3

Input: head = [1]
Output: [1]


---

## 📝 Notes

- Only node pointers should be changed, not the node values.
- The relative order within each pair should be reversed.
- If the list has an odd number of nodes, the final node remains unchanged.