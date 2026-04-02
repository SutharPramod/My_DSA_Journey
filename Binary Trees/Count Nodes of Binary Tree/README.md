# Count Nodes of Binary Tree

## Problem Statement

Given the root of a binary tree, return the **total number of nodes** present in the tree.

A node is counted as a valid node if it exists in the tree (i.e., it is not null).

---

## Input

The input represents a binary tree.

- The first line contains an integer `n` — the number of elements in the level order representation.
- The second line contains `n` space-separated values representing the tree in **level order traversal**.
- A value of `-1` indicates a **null node**.


Tree is represented in level order format


---

## Output

Return a single integer representing the **total number of nodes** in the binary tree.

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


5


**Explanation**

All elements represent valid nodes, so total nodes = 5.

---

### Example 2

**Input**


n = 7
tree = [1, 2, 3, -1, -1, 4, 5]


**Output**


5


**Explanation**

The valid nodes are: 1, 2, 3, 4, 5 → total = 5 nodes.

---

### Example 3

**Input**


n = 0
tree = []


**Output**


0


**Explanation**

The tree is empty, so there are no nodes.

---

## Notes

- Only **non-null nodes** should be counted.
- The tree is given in **level order traversal**, where `-1` represents a missing node.
- The output should reflect the **actual number of nodes present in the tree**, not the size of the input array.