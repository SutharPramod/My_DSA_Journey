# Flatten a Multilevel Doubly Linked List

## 🧩 Problem Statement

You are given the head of a **multilevel doubly linked list**.

Each node in the list contains:
- `val`: Integer value
- `prev`: Pointer to the previous node
- `next`: Pointer to the next node
- `child`: Pointer to another doubly linked list

These child lists may have one or more children of their own, forming a **multilevel structure**.

Your task is to **flatten the list** so that all nodes appear in a **single-level doubly linked list**.

The nodes in the child list should appear **immediately after the parent node**. After flattening, all `child` pointers should be set to `null`.

Return the head of the flattened list.

---

## 📥 Input

- `head`: The head node of a multilevel doubly linked list.

Node structure:

Node {
int val
Node prev
Node next
Node child
}


---

## 📤 Output

- Return the head of the **flattened doubly linked list**.

---

## 📌 Constraints

- The number of nodes will not exceed `1000`
- `1 <= Node.val <= 10^5`

---

## 🧪 Examples

### Example 1

Input:
1---2---3---4---5---6
|
7---8---9---10
|
11--12

Output:
1-2-3-7-8-11-12-9-10-4-5-6


### Example 2

Input:
1---2
|
3

Output:
1-3-2


### Example 3

Input:
head = []

Output:
[]


---

## 📝 Notes

- The child list must be inserted **between the node and its next node**.
- The final structure should remain a **valid doubly linked list**.
- All `child` pointers must be **set to null** after flattening.