# Height of Binary Tree

## Problem Statement

Given the root of a binary tree, determine the **height** of the tree.

The **height** of a binary tree is defined as the number of **edges in the longest path** from the root node to any leaf node.

A **leaf node** is a node that does not have any children.

Return the height of the binary tree.

---

## Input

The input represents a binary tree.

- The first line contains an integer `n` — the number of nodes in the tree.
- The second line contains `n` space-separated values representing the tree in **level order traversal**.
- A value of `-1` indicates a **null node**.


Tree is represented in level order format


---

## Output

Return a single integer representing the **height of the binary tree**.

---

## Constraints


0 ≤ n ≤ 10^5
-10^9 ≤ Node Value ≤ 10^9


---

## Examples

### Example 1

**Input**


n = 5
tree = [1, 2, 3, 4, 5]


**Output**


2


**Explanation**

The longest path is from root `1` → `2` → `4` (or `5`).

Number of edges = `2`.

---

### Example 2

**Input**


n = 1
tree = [1]


**Output**


0


**Explanation**

Only one node exists, so height = `0`.

---

### Example 3

**Input**


n = 7
tree = [1, 2, 3, -1, -1, 4, 5]


**Output**


2


**Explanation**

The longest path is `1 → 3 → 4` (or `5`), which has `2` edges.

---

## Notes

- Height is measured in terms of **number of edges**, not nodes.
- If the tree is empty (`n = 0`), the height is considered `-1`.
- The tree is constructed using **level order traversal**, where `-1` represents a missing node.