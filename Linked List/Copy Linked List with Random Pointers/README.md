# Copy Linked List with Random Pointer

## 🧩 Problem Statement

You are given the head of a linked list where each node contains an additional pointer called `random`.

Each node in the linked list contains:
- `val`: an integer value
- `next`: pointer to the next node
- `random`: pointer to **any node in the list or `null`**

Construct a **deep copy** of the list. The deep copy should consist of **new nodes**, where each new node has the same value as the corresponding original node.

Both the `next` and `random` pointers of the new nodes should point to nodes in the copied list such that the structure of the list is identical to the original list.

Return the head of the copied linked list.

---

## 📥 Input

- `head`: Head of the original linked list.

Each node structure:

Node {
int val
Node next
Node random
}


---

## 📤 Output

- Return the head of the **deep copied linked list**.

---

## 📌 Constraints

- `0 <= n <= 1000`
- `-10^4 <= Node.val <= 10^4`
- `random` pointer may point to any node in the list or `null`.

---

## 🧪 Examples

### Example 1

Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]


### Example 2

Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]


### Example 3

Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]


---

## 📝 Notes

- A **deep copy** means all nodes are newly created.
- No node in the copied list should reference nodes from the original list.
- The relative positions of `next` and `random` pointers must remain identical.