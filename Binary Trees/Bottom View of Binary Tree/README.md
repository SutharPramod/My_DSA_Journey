# Bottom View of Binary Tree

## Problem Statement

Given the root of a binary tree, return the **bottom view** of the tree.

The **bottom view** of a binary tree is the set of nodes visible when the tree is viewed from the **bottom**.  
For each horizontal distance from the root, include the **last node encountered** (from top to bottom).

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

Return an array of integers representing the **bottom view of the binary tree**, ordered from **leftmost to rightmost**.

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


[4, 2, 6, 3, 7]


**Explanation**

From bottom view:
- Node `4` is the leftmost.
- Then `2`, `6`, `3`, and `7` are visible from bottom.

---

### Example 2

**Input**


n = 5
tree = [1, 2, 3, -1, 4]


**Output**


[2, 4, 3]


**Explanation**

Node `4` appears below `2`, so it is visible in the bottom view.

---

### Example 3

**Input**


n = 6
tree = [1, 2, 3, 4, -1, -1, 5]


**Output**


[4, 2, 1, 3, 5]


**Explanation**

Each horizontal distance includes the last visible node from bottom.

---

## Notes

- The root node has a horizontal distance of `0`.
- The left child decreases horizontal distance by `1`, and the right child increases it by `1`.
- For each horizontal distance, include the **last node encountered** in level order traversal.
- The output must be sorted based on horizontal distance from **left to right**.