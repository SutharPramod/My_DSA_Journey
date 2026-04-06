# Diameter of Binary Tree

## Problem Statement

Given the root of a binary tree, return the **diameter** of the tree.

The **diameter** of a binary tree is defined as the **length of the longest path between any two nodes** in the tree. This path may or may not pass through the root.

The length of the path is measured in terms of the **number of edges** between the two nodes.

---

## Input

The input represents a binary tree.

- The first line contains an integer `n` — the number of elements in the level order representation.
- The second line contains `n` space-separated values representing the tree in **level order traversal**.
- A value of `-1` indicates a **null node**.


Tree is represented in level order format


---

## Output

Return a single integer representing the **diameter of the binary tree**.

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


3


**Explanation**

The longest path is: `4 → 2 → 1 → 3`  
Number of edges = `3`.

---

### Example 2

**Input**


n = 1
tree = [1]


**Output**


0


**Explanation**

Only one node exists, so no edges → diameter = `0`.

---

### Example 3

**Input**


n = 7
tree = [1, 2, 3, 4, 5, -1, -1]


**Output**


3


**Explanation**

The longest path is: `4 → 2 → 1 → 3` (or `5 → 2 → 1 → 3`)  
Number of edges = `3`.

---

## Notes

- The diameter is measured in **number of edges**, not nodes.
- The longest path can pass through the root, but it is not required.
- If the tree is empty (`n = 0`), the diameter is `0`.
- The tree is represented in **level order traversal**, where `-1` indicates a missing node.