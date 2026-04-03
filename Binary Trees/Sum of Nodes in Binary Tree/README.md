# Sum of Nodes in Binary Tree

## Problem Statement

Given the root of a binary tree, compute the **sum of all node values** present in the tree.

Each node contains an integer value, and the total sum is obtained by adding the values of all existing (non-null) nodes.

Return the **sum of all nodes** in the binary tree.

---

## Input

The input represents a binary tree.

- The first line contains an integer `n` — the number of elements in the level order representation.
- The second line contains `n` space-separated values representing the tree in **level order traversal**.
- A value of `-1` indicates a **null node**.


Tree is represented in level order format


---

## Output

Return a single integer representing the **sum of all node values** in the binary tree.

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


15


**Explanation**

Sum = 1 + 2 + 3 + 4 + 5 = 15

---

### Example 2

**Input**


n = 7
tree = [1, 2, 3, -1, -1, 4, 5]


**Output**


15


**Explanation**

Valid nodes are: 1, 2, 3, 4, 5  
Sum = 1 + 2 + 3 + 4 + 5 = 15

---

### Example 3

**Input**


n = 0
tree = []


**Output**


0


**Explanation**

The tree is empty, so the sum is 0.

---

## Notes

- Only **non-null nodes** should be considered in the sum.
- The tree is given in **level order traversal**, where `-1` represents a missing node.
- The result should account for all valid node values in the tree.