# K-th Level of Binary Tree

## Problem Statement

Given the root of a binary tree and an integer `k`, return all the node values present at the **k-th level** of the tree.

The root of the tree is considered to be at **level 0**.

Return the values of all nodes at level `k` in **left to right order**.  
If no such level exists, return an empty array.

---

## Input

- The first line contains an integer `n` — the number of elements in the level order representation.
- The second line contains `n` space-separated values representing the tree in **level order traversal**.
- The third line contains an integer `k` — the target level.
- A value of `-1` indicates a **null node**.


Tree is represented in level order format


---

## Output

Return an array of integers representing the node values at the **k-th level**.

---

## Constraints


0 ≤ n ≤ 10^5
0 ≤ k ≤ 10^5
-10^9 ≤ Node Value ≤ 10^9


---

## Examples

### Example 1

**Input**


n = 7
tree = [1, 2, 3, 4, 5, 6, 7]
k = 2


**Output**


[4, 5, 6, 7]


**Explanation**

- Level 0 → [1]  
- Level 1 → [2, 3]  
- Level 2 → [4, 5, 6, 7]

---

### Example 2

**Input**


n = 5
tree = [1, 2, 3, -1, 4]
k = 2


**Output**


[4]


**Explanation**

Only node `4` exists at level 2.

---

### Example 3

**Input**


n = 3
tree = [1, 2, 3]
k = 3


**Output**


[]


**Explanation**

There is no level `3` in the tree.

---

## Notes

- The root node is at **level 0**.
- Nodes at the same level should be returned in **left to right order**.
- If the given level does not exist, return an **empty array**.
- The tree is represented in **level order traversal**, where `-1` indicates a missing node.