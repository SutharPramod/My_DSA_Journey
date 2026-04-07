# Top View of Binary Tree

## Problem Statement

Given the root of a binary tree, return the **top view** of the tree.

The **top view** of a binary tree is the set of nodes visible when the tree is viewed from the **top**.  
For each horizontal distance from the root, only the **first node encountered** (from top to bottom) should be included.

Return the node values in the order of their **horizontal distance from left to right**.

---

## Input

The input represents a binary tree.

- The first line contains an integer `n` — the number of elements in the level order representation.
- The second line contains `n` space-separated values representing the tree in **level order traversal**.
- A value of `-1` indicates a **null node**.


Tree is represented in level order format


---

## Output

Return an array of integers representing the **top view of the binary tree**, ordered from **leftmost to rightmost**.

---

## Constraints


0 ≤ n ≤ 10^5
-10^9 ≤ Node Value ≤ 10^9


---

## Examples

### Example 1

**Input**


n = 7
tree = [1, 2, 3, 4, 5, 6, 7]


**Output**


[4, 2, 1, 3, 7]


**Explanation**

From top view:
- Node `4` is the leftmost.
- Then `2`, `1`, `3`, and `7` are visible.

---

### Example 2

**Input**


n = 5
tree = [1, 2, 3, -1, 4]


**Output**


[2, 1, 3]


**Explanation**

Node `4` is hidden behind `2` when viewed from the top.

---

### Example 3

**Input**


n = 6
tree = [1, 2, 3, 4, -1, -1, 5]


**Output**


[4, 2, 1, 3, 5]


**Explanation**

Each horizontal distance contributes one visible node.

---

## Notes

- The root node has a horizontal distance of `0`.
- The left child decreases horizontal distance by `1`, and the right child increases it by `1`.
- For each horizontal distance, only the **first node encountered in level order traversal** should be included.
- The output must be sorted based on horizontal distance from **left to right**.