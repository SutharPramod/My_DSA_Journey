# Merge Two Sorted Linked Lists

## 🧩 Problem Statement

You are given the heads of two **sorted singly linked lists** `list1` and `list2`.

Merge the two lists into a single **sorted linked list**. The merged list should be made by **splicing together the nodes** of the first two lists.

Return the head of the merged linked list.

---

## 📥 Input

- `list1`: Head of the first sorted linked list.
- `list2`: Head of the second sorted linked list.

Each node contains:
- `val`: Integer value
- `next`: Pointer to the next node

---

## 📤 Output

- Return the head of the merged sorted linked list.

---

## 📌 Constraints

- The number of nodes in both lists is in the range `[0, 50]`
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in **non-decreasing order**

---

## 🧪 Examples

### Example 1

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]


### Example 2

Input: list1 = [], list2 = []
Output: []


### Example 3

Input: list1 = [], list2 = [0]
Output: [0]


---

## 📝 Notes

- The merged list must remain **sorted**.
- You must **reuse the existing nodes** from the input lists.
- Try to solve it with **O(n + m)** time complexity.