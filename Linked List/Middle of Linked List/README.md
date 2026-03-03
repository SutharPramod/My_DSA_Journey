# Middle of the Linked List

## 🧩 Problem Statement

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

---

## 📥 Input

- `head`: The head node of a singly linked list.
- Each node contains:
  - `val`: Integer value
  - `next`: Pointer to the next node

---

## 📤 Output

- Return the middle node of the linked list.

---

## 📌 Constraints

- The number of nodes in the list is in the range `[1, 100]`
- `1 <= Node.val <= 100`

---

## 🧪 Examples

### Example 1

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node is node 3.


### Example 2

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since there are two middle nodes (3 and 4), return the second one.


---

## 📝 Notes

- You must return the node itself, not just its value.
- Try to solve it in one pass if possible.
- Expected time complexity: O(n)
- Expected space complexity: O(1)