# Identical Trees

## Problem Statement

Given the roots of two binary trees, determine whether the two trees are **identical**.

Two binary trees are considered **identical** if:

1. They have the **same structure**, and  
2. Corresponding nodes have the **same values**.

Return `true` if both trees are identical, otherwise return `false`.

---

## Input

The input consists of two binary trees.

- The first line contains an integer `n` — number of elements in the first tree.
- The second line contains `n` space-separated values representing the first tree in **level order traversal**.
- The third line contains an integer `m` — number of elements in the second tree.
- The fourth line contains `m` space-separated values representing the second tree in **level order traversal**.
- A value of `-1` indicates a **null node**.


Both trees are represented in level order format


---

## Output

Return a boolean value:

- `true` if both trees are identical.
- `false` otherwise.

---

## Constraints


0 ≤ n, m ≤ 10^5
-10^9 ≤ Node Value ≤ 10^9


---

## Examples

### Example 1

**Input**


n = 5
tree1 = [1, 2, 3, 4, 5]
m = 5
tree2 = [1, 2, 3, 4, 5]


**Output**


true


**Explanation**

Both trees have the same structure and identical node values.

---

### Example 2

**Input**


n = 5
tree1 = [1, 2, 3, -1, 4]
m = 5
tree2 = [1, 2, 3, 4, -1]


**Output**


false


**Explanation**

The structures of the two trees are different.

---

### Example 3

**Input**


n = 3
tree1 = [1, 2, 1]
m = 3
tree2 = [1, 1, 2]


**Output**


false


**Explanation**

The structure is the same, but node values differ.

---

## Notes

- Both the **structure and node values** must match for the trees to be identical.
- A `null` node must correspond to a `null` node in the other tree.
- The trees are provided in **level order traversal**, where `-1` represents a missing node.