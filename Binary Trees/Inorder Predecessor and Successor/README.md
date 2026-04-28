# Inorder Predecessor and Successor in a Binary Search Tree

## Problem Statement

Given the root of a Binary Search Tree (BST) and a key `x`, find the **inorder predecessor** and **inorder successor** of the given key.

- The **inorder predecessor** is the largest value in the BST that is strictly smaller than `x`.
- The **inorder successor** is the smallest value in the BST that is strictly greater than `x`.

If the predecessor or successor does not exist, print `-1` for that value.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.
- The third line contains an integer `x`, the key.

## Output

- Print two integers:
  - The inorder predecessor of `x`
  - The inorder successor of `x`

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are unique.
- The input tree is a valid BST.

## Examples

### Example 1


Input:
7
50 30 70 20 40 60 80
65

Output:
60 70


### Example 2


Input:
5
20 10 30 5 15
10

Output:
5 15


### Example 3


Input:
3
2 1 3
3

Output:
2 -1


## Notes

- Inorder traversal of a BST produces a sorted sequence of values.
- The predecessor is the immediate previous value, and the successor is the immediate next value in this sorted order.
- If the key `x` is not present in the tree, still determine its predecessor and successor based on BST properties.