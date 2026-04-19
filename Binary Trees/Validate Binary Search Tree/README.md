# Validate Binary Search Tree

## Problem Statement

Given the root of a binary tree, determine whether it is a valid Binary Search Tree (BST).

A binary tree is considered a valid BST if it satisfies the following conditions:

- The left subtree of a node contains only nodes with values **strictly less than** the node's value.
- The right subtree of a node contains only nodes with values **strictly greater than** the node's value.
- Both the left and right subtrees must also be valid BSTs.

## Input

- The first line contains an integer `n`, the number of nodes in the binary tree.
- The second line contains `n` space-separated integers representing the tree in level-order traversal.
- Use `-1` to represent a null node.

## Output

- Print `"true"` if the given binary tree is a valid BST, otherwise print `"false"`.

## Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ Node.val ≤ 10^9`
- All node values are integers.

## Examples

### Example 1


Input:
3
2 1 3

Output:
true


### Example 2


Input:
5
5 1 4 -1 -1 3 6

Output:
false


### Example 3


Input:
1
1

Output:
true


## Notes

- A valid BST requires all nodes in the left subtree to be strictly less than the root, and all nodes in the right subtree to be strictly greater.
- The property must hold for every node in the tree, not just the immediate children.
- Duplicate values are not allowed in a valid BST.