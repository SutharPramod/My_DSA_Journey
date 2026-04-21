# Minimum Distance Between BST Nodes

## Problem Statement

Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.

The BST property ensures that for any node:
- All values in the left subtree are smaller.
- All values in the right subtree are larger.

## Input

- The first line contains an integer `n`, the number of nodes in the BST.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print a single integer representing the minimum absolute difference between values of any two nodes.

## Constraints

- `2 ≤ n ≤ 10^5`
- `0 ≤ Node.val ≤ 10^9`
- All node values are unique.
- The input tree is a valid Binary Search Tree.

## Examples

### Example 1


Input:
4
4 2 6 1 3

Output:
1


### Example 2


Input:
6
1 -1 3 2 -1 4 -1

Output:
1


### Example 3


Input:
2
1 -1 5

Output:
4


## Notes

- The minimum difference will always be between two nodes that are closest in value.
- Inorder traversal of a BST produces a sorted sequence of values.
- The difference should be computed between any two distinct nodes.