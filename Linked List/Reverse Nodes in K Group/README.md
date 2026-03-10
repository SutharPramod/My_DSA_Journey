# Reverse Nodes in k-Group

## 🧩 Problem Statement

Given the head of a singly linked list, reverse the nodes of the list **k at a time**, and return the modified list.

`k` is a positive integer and is less than or equal to the length of the linked list.

If the number of nodes is not a multiple of `k`, then the remaining nodes at the end should remain **as they are**.

You must reverse the nodes in groups of `k` while maintaining the relative order of the groups.

---

## 📥 Input

- `head`: Head of the singly linked list.
- `k`: Size of the group for reversal.

Each node contains:
- `val`: Integer value
- `next`: Pointer to the next node

---

## 📤 Output

- Return the head of the modified linked list after reversing nodes in groups of `k`.

---

## 📌 Constraints

- The number of nodes in the list is `n`
- `1 <= k <= n <= 5000`
- `0 <= Node.val <= 1000`

---

## 🧪 Examples

### Example 1

Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]


### Example 2

Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]


### Example 3

Input: head = [1,2], k = 2
Output: [2,1]


---

## 📝 Notes

- Nodes must be reversed **in-place** without creating new nodes.
- If fewer than `k` nodes remain at the end, leave them unchanged.
- Expected time complexity: **O(n)**
- Expected space complexity: **O(1)**